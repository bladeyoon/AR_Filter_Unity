using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScreenLog : Singleton<ScreenLog>
{
    public Text logText;

    void Start()
    {
        logText.text = "";
    }

    private void _Log(string msg)
    {
        if (msg[0] != '\n')
        {
            msg = "\n" + msg;
        }

        logText.text += msg;
        Debug.Log(msg);
    }

    public static void Log(string msg)
    {
        Instance._Log(msg);
    }
}
