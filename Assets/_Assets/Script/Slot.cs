using System.Collections;
using System.Collections.Generic;
using UnityEngine;  
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Slot : MonoBehaviour
{
    GamePlayManager gamePlayManager;
    public bool isSeleccted =false;
    public int Index;
    public int increaseInd = 0;
    public Sprite RightWordSprite;
    public Material storedMat;
}
