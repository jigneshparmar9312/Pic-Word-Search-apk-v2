using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class LevelData : MonoBehaviour
{
    public List<string> SpwanLatters;
    public List<string> rightString,tmpRightString,TmpFinalList;
    public List<Transform> SpwanTra;
    public Transform ParentCircle;
    public Transform ParentTra;
    public float AngleRotation;
    public List<Sprite> SpawnImg;
    public string LevelName;
    public List<Transform> imagePos;
    public List<GameObject> hintStoredObg;
    public float Length;
    public List<Hints> hints;
    public float YoffsetVal;
    public float tickScale;
    public List<Image> imageBg;
    [Serializable]

    public struct Hints
    {
        public List<GameObject> hintNewStrings;
        public string hintWord;
        public int index;
    }


    //hint store obj and use it as hint to glow only and remove the whole world from main list to make it proper

    public void SetHintData()
    {

        for(int i = 0; i< hints.Count;i++)
        {
            var hint= hints[i];
            List<String> strings = new List<String>();
            hint.hintNewStrings.ForEach(x => strings.Add(x.name));
            hint.hintWord = String.Concat(strings);
            hints[i] = hint;
        }

    }


}


