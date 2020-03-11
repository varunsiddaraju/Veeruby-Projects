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
    // string prevText;
    public MapRenderer mapRenderer;
    public PinchSlider pinchSlider;
    public TextMeshPro debugText;
    public TouchScreenKeyboard keyboard;
    private PhotonView photonView1;


    Microsoft.Geospatial.LatLon latlong;

    // Start is called before the first frame update
    void Start()
    {
        photonView1 = gameObject.GetComponent<PhotonView>();
        Debug.Log(inputText.text);
        place = inputText.text;

        //Task downloading = StartAsync();
     
    }
        async System.Threading.Tasks.Task StartAsync()
        {

        MapServices.BingMapsKey = "AqwIuNYzCpGUpxAGoxrEezGT2qFqWz8u913J38duA4W7SHz4DXogJ6wHwJPShBEP";

        //inputtext = GetComponentInChildren<SystemKeyboardExample>().

            if (string.IsNullOrEmpty(MapServices.BingMapsKey))
            {
                Debug.LogError(
                    "Provide a Bing Maps key to use the map services. " +
                    "This key can either be set on the MapRenderer or directly in code through MapServices.BingMapsKey property.");
                return;
            }

        Microsoft.Maps.Unity.Search.MapLocationFinderResult a = await Microsoft.Maps.Unity.Search.MapLocationFinder.FindLocations("seattle", null) ;
        var finderResult = await Microsoft.Maps.Unity.Search.MapLocationFinder.FindLocations(place, null);

        string formattedAddressString = null;
        
            if (finderResult.Locations.Count > 0)
            {
                formattedAddressString = finderResult.Locations[0].Address.FormattedAddress;
                latlong = finderResult.Locations[0].Point;
                Debug.Log(latlong);

            }

        //Debug.Log(a.Locations) ;
        //Debug.Log(a.Locations.Count);
        //Debug.Log(a.Locations.ToString());
        //Debug.Log(a.Status);
        //Debug.Log(finderResult.Status);
        //Debug.Log(formattedAddressString);
       
        mapRenderer = GetComponent<MapRenderer>();
        StartCoroutine(RunTour());
    
            //MapScene mapScene = GetComponent<MapScene>() ;
            //mapScene = new MapSceneOfLocationAndZoomLevel(latlong, 15f);
            //mapRenderer.SetMapScene(mapScene); 

            //   double latitude = _mapRenderer.GetComponent<LatLonWrapper>().Latitude;

            //latitude = latlong.LatitudeInDegrees;
            //   _mapRenderer.GetComponent<LatLonWrapper>().Longitude = latlong.LongitudeInDegrees;
            //MapSceneOfLocationAndZoomLevel(new LatLon(47.608699, -122.340571), 15f);
            //_mapRenderer.SetMapScene();

        }

    // Update is called once per fram
    void Update()
    {
        
        if (debugText.text  == "Photon view ID:")
        {
            debugText.text = "Photon view ID: " + photonView1.ViewID;
        }

        if (inputText.text != null && inputText.text != place && pinchSlider.SliderValue==prevValue)
        {
            place = inputText.text;
            pinchSlider.GetComponent<PinchSlider>().enabled = false;
            Task downloading = StartAsync();

        }
        if (pinchSlider.GetComponent<PinchSlider>().enabled == true)
        {
           // mapRenderer.ZoomLevel = pinchSlider.SliderValue * 30;
            prevValue = pinchSlider.SliderValue;
        }    }


    private IEnumerator RunTour()
    {
        yield return new WaitForSeconds(5.0f);

        if (photonView1.IsMine)
            photonView1.RPC("RPC_RunTour", RpcTarget.All);
        pinchSlider.GetComponent<PinchSlider>().enabled = true;
    }

    [PunRPC]
    private void RPC_RunTour()
    {
        MapScene mapScene;
        Debug.Log(photonView1.OwnerActorNr + ": latlong: " + latlong);
        mapScene = new MapSceneOfLocationAndZoomLevel(latlong, 16.0f);
      
        mapRenderer.SetMapScene(mapScene);
    }

    public void SliderZoom()
    {
        if(photonView1!=null && photonView1.IsMine)
            photonView1.RPC("RPC_SliderZoom", RpcTarget.All, pinchSlider.SliderValue);
       
    }

    [PunRPC]
    private void RPC_SliderZoom(float sliderValue)
    {
        Debug.Log(photonView1.OwnerActorNr + ": SliderValue: " + sliderValue);
        mapRenderer.ZoomLevel = sliderValue * 30;
    }

    //public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    //{
    //    throw new System.NotImplementedException();
    //}
}

    