using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class RainBow : MonoBehaviour
{
    [SerializeField] List<Image> RainbowImg;
    void Start()
    {
        RanBow();
    }

    void RanBow()
    {
        RainbowImg[0].DOFillAmount(0, 1f);
        RainbowImg[1].DOFillAmount(0, 1.2f);
        RainbowImg[2].DOFillAmount(0, 1.5f);
        RainbowImg[3].DOFillAmount(0, 1.8f);
        RainbowImg[04].DOFillAmount(0, 2f);
    }

}
