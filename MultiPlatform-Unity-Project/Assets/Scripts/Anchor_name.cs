using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using System.Linq;
using RestSharp;
using System;

public class Anchor_name : MonoBehaviour
{
    // Start is called before the first frame update
    public InputField Anchorname;
    // public Text txt;
    [HideInInspector]
    public string path;

    void Start()
    {
        path = Application.dataPath + "/file.anchorDirectory";
        //UploadAnchorDetailsToCloud();
    }

    private void Update()
    {
        var lines = File.ReadAllLines(path).Where(arg => !string.IsNullOrWhiteSpace(arg));
        File.WriteAllLines(path, lines);
    }

    public void CreateText()
    {

        string content = Anchorname.text;
        if (!File.Exists(path))
        {

            File.WriteAllText(path, "Anchorname.text");
        }
        content = "\n" + Anchorname.text;

        File.AppendAllText(path, content);

    }


    public void DeleteText()
    {

        string ObjectToDeleteName = gameObject.name;

        string ObjectToDeleteName_withNumber = ObjectToDeleteName.Replace("Delete ", "");
        ObjectToDeleteName = ObjectToDeleteName_withNumber.Remove(ObjectToDeleteName_withNumber.Length - 2);

        string[] lines = File.ReadAllLines(gameObject.GetComponent<Load_anchor_name>().path);


        List<string> listOfLines = lines.OfType<string>().ToList();
        for (int i = listOfLines.Count - 1; i >= 0; i--)
        {

            if (listOfLines[i].Contains(ObjectToDeleteName))
            {
                listOfLines.RemoveAt(i);
                Debug.Log("Removed");
            }
        }

        File.WriteAllLines(gameObject.GetComponent<Load_anchor_name>().path, listOfLines);

        Destroy(gameObject);
        Destroy(GameObject.Find(ObjectToDeleteName_withNumber));

        //StartCoroutine(ReloadAnchorNames());

        // InvokeRepeating("ReloadAnchorNames", 2.0f, 0f);

        ClearAnchorLocationsPage();
        ReloadAnchorNames();


    }

    public void  ReloadAnchorNames()
    {
        Debug.Log(1);
        //yield return new WaitForSeconds(1f);
        Debug.Log(2);
        Debug.Log(GameObject.Find("Locations Page"));
        GameObject.Find("Locations Page").GetComponent<Load_anchor_name>().loadAnchors();

    }

    public void ClearAnchorLocationsPage()
    {
        Debug.Log("something");

        GameObject[] uiElement = GameObject.FindGameObjectsWithTag("ClearUI");
        foreach (GameObject ui in uiElement)
        {
            Debug.Log(ui);
            Destroy(ui);
        }

    }

    public void UploadAnchorDetailsToCloud()
    {

        try
        {
            var client = new RestClient("http://167.99.111.15:8090");

            var request = new RestRequest("/uploadFile.php", Method.POST)
                    .AddHeader("Accept", "application/json")
                    .AddHeader("Content-Type", "multipart/form-data");
            request.AddFile("the_file", path);
            request.AddParameter("replace_file", 1);  //only needed if you want to upload a static file

            var httpResponse = client.Execute(request);

            string json = httpResponse.Content.ToString();

            Debug.Log("Sucess!!");
        }
        catch (Exception ex)
        {
            Debug.Log(string.Format("Exception: {0}", ex.Message));
            throw;
        }
    }


}
