using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

using UnityEditor;

using UnityEngine.UI;
using System;
using UnityEngine.Networking;

public class Load_anchor_name : MonoBehaviour
{

    public string path = "Assets/file.anchorDirectory";

    public GameObject AnchorNameObject;
    public GameObject DeleteButton;
    public GameObject LocationPage;

    [HideInInspector]
    public GameObject anchor;

    [HideInInspector]
    public GameObject delete1;

    void Start()
    {
       
        StartCoroutine(DownloadAnchorDetails());
    }

    public void loadAnchors()
    {
        Debug.Log("Loading anchor details...");
        //Debug.Log(path);
        StreamReader reader = new StreamReader(path);
        string text;

        int i = 1;
        do
        {
            text = reader.ReadLine();

                string anchorName = text + " " + i.ToString();
            
            if (anchorName.Length>2 && i == 2)
            {
                anchor = GameObject.Instantiate(AnchorNameObject);
                anchor.name = anchorName;
                anchor.GetComponentInChildren<Text>().text = anchor.name.Remove(anchor.name.Length-1);
                anchor.transform.SetParent(LocationPage.transform);
                delete1 = GameObject.Instantiate(DeleteButton);
                delete1.name = "Delete " + anchorName;
                delete1.transform.SetParent(LocationPage.transform);
                delete1.SetActive(true); 
              
                StartCoroutine(SetButtonPossition(anchor.name, delete1.name));
            }
            else if (anchorName.Length > 2 && i >2)
            {
                anchor = GameObject.Instantiate(AnchorNameObject, new Vector3(1, 1, 1), Quaternion.identity);
                anchor.name = anchorName;
                anchor.GetComponentInChildren<Text>().text = anchor.name.Remove(anchor.name.Length - 1);
                anchor.transform.SetParent(LocationPage.transform);
                delete1 = GameObject.Instantiate(DeleteButton);
                delete1.name = "Delete " + anchorName;
                //delete1.GetComponent<Button>().onClick.AddListener=
                delete1.transform.SetParent(LocationPage.transform);
                delete1.SetActive(true);
                StartCoroutine(SetButtonPossition(anchor.name, delete1.name));
            }

            i = i + 1;

        } while (text != null);
    }

    IEnumerator SetButtonPossition(string anchor, string delete1)
    {
        yield return new WaitForSeconds(0.01f);

            Vector3 AnchorButtonPosition = new Vector3(-50, 100 - 70 * (Int32.Parse(anchor.Substring(anchor.Length - 1)) - 2), 0);

            Vector3 DeleteButtonPosition = new Vector3(125, 100 - 70 * (Int32.Parse(anchor.Substring(anchor.Length - 1)) - 2), 0);
            GameObject.Find(anchor).GetComponent<RectTransform>().anchoredPosition = AnchorButtonPosition;
            GameObject.Find(delete1).GetComponent<RectTransform>().anchoredPosition = DeleteButtonPosition;
      
       
    }

    public IEnumerator DownloadAnchorDetails()
    {
        Debug.Log("Downloading File...");

        string url = "http://167.99.111.15:8090/file-uploads/static/file.anchorDirectory";
        Debug.Log("Attempting to look for network ping file: " + url);
        using (UnityWebRequest www = UnityWebRequest.Get(url))
        {
            yield return www.Send();

            if (www.isNetworkError || www.isHttpError)
                Debug.Log(www.error);

            else
            {
                string path = Application.persistentDataPath;
                string anchorDetails = www.downloadHandler.text;
                File.WriteAllText(path + "/file.anchorDirectory", anchorDetails);


                StringReader strReader = new StringReader(anchorDetails);

                while ((anchorDetails = strReader.ReadLine()) != null)
                {

                    Debug.Log(anchorDetails);
                }

            }
        }
    }


}
