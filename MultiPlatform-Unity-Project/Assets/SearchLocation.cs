using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Microsoft.Maps.Unity;
using Microsoft.Maps.Unity.Search;
using Microsoft.Maps.Unity.Services;
using TMPro;
using Microsoft.Geospatial;

using UnityEngine;
using Microsoft.MixedReality.Toolkit.Examples.Demos;
using Microsoft.MixedReality.Toolkit.UI;
using Photon.Pun;

public class SearchLocation : MonoBehaviour//, IPunObservable
{
    string place;
    float prevValue;
    public TextMeshPro inputText;
    public TextMeshPro previewText;
   
    public MapRenderer mapRenderer;
    public PinchSlider pinchSlider;
    
    public TouchScreenKeyboard keyboard;
    private PhotonView photonView1;
    OwnershipHandler ownershipHandler;

    Microsoft.Geospatial.LatLon latlong;

    // Start is called before the first frame update
    void Start()
    {
        ownershipHandler = GetComponent<OwnershipHandler>();
        photonView1 = gameObject.GetComponent<PhotonView>();

   
        place = inputText.text;

    }
    async System.Threading.Tasks.Task StartAsync()
    {

        MapServices.BingMapsKey = "AqwIuNYzCpGUpxAGoxrEezGT2qFqWz8u913J38duA4W7SHz4DXogJ6wHwJPShBEP";

        if (string.IsNullOrEmpty(MapServices.BingMapsKey))
        {
            Debug.LogError(
                "Provide a Bing Maps key to use the map services. " +
                "This key can either be set on the MapRenderer or directly in code through MapServices.BingMapsKey property.");
            return;
        }

        Microsoft.Maps.Unity.Search.MapLocationFinderResult a = await Microsoft.Maps.Unity.Search.MapLocationFinder.FindLocations("seattle", null);
        var finderResult = await Microsoft.Maps.Unity.Search.MapLocationFinder.FindLocations(place, null);

        string formattedAddressString = null;

        if (finderResult.Locations.Count > 0)
        {
            formattedAddressString = finderResult.Locations[0].Address.FormattedAddress;
            latlong = finderResult.Locations[0].Point;
            Debug.Log(latlong);

        }

        mapRenderer = GetComponent<MapRenderer>();
        StartCoroutine(RunTour(latlong));

    }

    // Update is called once per fram
    void Update()
    {
  
        previewText.text = inputText.text.Substring(8, inputText.text.Length - 8);

        if (inputText.text != null && inputText.text != place && pinchSlider.SliderValue == prevValue)
        {
            place = inputText.text;
            pinchSlider.GetComponent<PinchSlider>().enabled = false;
            Task downloading = StartAsync();

        }
        if (pinchSlider.GetComponent<PinchSlider>().enabled == true)
        {
            prevValue = pinchSlider.SliderValue;
        }    }


    private IEnumerator RunTour(LatLon latlong)
    {
        yield return new WaitForSeconds(5.0f);

        double latitude = latlong.LatitudeInDegrees;
        double longitude = latlong.LongitudeInDegrees;


        if (photonView1 != null && photonView1.IsMine)
            photonView1.RPC("RPC_RunTour", RpcTarget.All, latitude, longitude);

        pinchSlider.GetComponent<PinchSlider>().enabled = true;
    }

    [PunRPC]
    private void RPC_RunTour(double latitide_x, double longitude_y)
    {
        MapScene mapScene;
        Debug.Log(photonView1.OwnerActorNr + ": latlong: " + latlong);


        mapScene = new MapSceneOfLocationAndZoomLevel(new LatLon(latitide_x, longitude_y), 16.0f);

        mapRenderer.SetMapScene(mapScene);
    }

    public void SliderZoom()
    {
        if (photonView1 != null && photonView1.IsMine)
            photonView1.RPC("RPC_SliderZoom", RpcTarget.All, pinchSlider.SliderValue);

    }

    [PunRPC]
    private void RPC_SliderZoom(float sliderValue)
    {
        Debug.Log(photonView1.OwnerActorNr + ": SliderValue: " + sliderValue);
        mapRenderer.ZoomLevel = sliderValue * 30;
    }

}

