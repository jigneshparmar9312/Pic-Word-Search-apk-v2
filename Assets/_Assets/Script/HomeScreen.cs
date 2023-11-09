using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HomeScreen : MonoBehaviour
{

    public AudioSource TapSound;
    public void SceanTransfer()
    {
        TapSound.Play();
        SceneManager.LoadScene(1);
    }
}
