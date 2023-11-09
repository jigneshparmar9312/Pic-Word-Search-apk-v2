using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using System;

public class Settings : MonoBehaviour
{
    public static Settings instance;

    [SerializeField] Image soundBTNImage, HapticBTNimag, MusicBTN;
    [SerializeField] Transform NewPos, normalPos1, normalPos2, normalPos3;
    GamePlayManager gameplayManager;

    bool SettingOpen = false;
   public  bool issoundPlay = true;
    public bool isMusic = true;
   public bool isHapticsPlay = true;
    [SerializeField] Image SettingImg;
    [SerializeField] Sprite ClocseSprite, normalSprite, soundoffSprite, soundonSprite, hapticOnSprite, HapticOffSprite, MusicOn, MusicOFf;
    [SerializeField] GameObject SoundBTN, hapticBTN, MusicBTNMain;

    private void Awake()
    {
        if(instance==null)
        {
            instance = this;
        }
        else
        {
            Destroy(instance);
        }
    }

    public bool IssoundPlay
    {
        get => issoundPlay;
        set
        {
            issoundPlay = value;
            PlayerPrefs.SetInt("SoundBTN", Convert.ToInt32(issoundPlay));
            if (!issoundPlay)
            {
                for (int i = 0; i < gameplayManager.otherAudio.Count; i++)
                {
                    gameplayManager.otherAudio[i].mute = true;
                }
                soundBTNImage.sprite = soundoffSprite;
            }
            else
            {
                for (int i = 0; i < gameplayManager.otherAudio.Count; i++)
                {
                    gameplayManager.otherAudio[i].mute = false;
                }
                soundBTNImage.sprite = soundonSprite;
            }
        }
    }
    public bool IsMusic
    {
        get => isMusic; set
        {
            isMusic = value;
            gameplayManager.backGroundAudio.mute = !isMusic;

            PlayerPrefs.SetInt("musicBTN", Convert.ToInt32(isMusic));

            if (!isMusic)
                MusicBTN.sprite = MusicOFf;
            else
                MusicBTN.sprite = MusicOn;
        }
    }
    public bool IsHapticsPlay
    {
        get => isHapticsPlay; set
        {
            isHapticsPlay = value;

           // HapticFeedback.SetVibrationOn(isHapticsPlay);
            PlayerPrefs.SetInt("hapticBTN", Convert.ToInt32(isHapticsPlay));

            if (!isHapticsPlay)
                
                HapticBTNimag.sprite = HapticOffSprite;
            else
                HapticBTNimag.sprite = hapticOnSprite;
        }
    }

    private void Start()
    {
        gameplayManager = GamePlayManager.instance;
        LoadData();
    }

    public void SettingBTN()
    {
        if (!SettingOpen)
        {
            gameplayManager.TapSound.Play();
            SettingImg.sprite = ClocseSprite;
            SoundBTN.SetActive(true);
            SoundBTN.transform.DOScale(Vector3.one, 0.5f).SetEase(Ease.OutBounce);
            SoundBTN.transform.DOMove(normalPos1.position, 0.5f).SetEase(Ease.OutBounce);

            hapticBTN.SetActive(true);
            hapticBTN.transform.DOScale(Vector3.one, 0.5f).SetEase(Ease.OutBounce);
            hapticBTN.transform.DOMove(normalPos2.position, 0.5f).SetEase(Ease.OutBounce);

            MusicBTNMain.SetActive(true);
            MusicBTNMain.transform.DOScale(Vector3.one, 0.5f).SetEase(Ease.OutBounce);
            MusicBTNMain.transform.DOMove(normalPos3.position, 0.5f).SetEase(Ease.OutBounce).OnComplete(() => SettingOpen = true);
        }
        else
        {
            gameplayManager.TapSound.Play();
            SoundBTN.transform.DOScale(Vector3.zero, 0.5f).SetEase(Ease.OutBounce).OnComplete(() =>
            {
                SoundBTN.SetActive(false);
            });
                SoundBTN.transform.DOMove(NewPos.position, 0.5f).SetEase(Ease.OutBounce);

            MusicBTNMain.transform.DOScale(Vector3.zero, 0.5f).SetEase(Ease.OutBounce).OnComplete(() =>
            {
               MusicBTNMain.SetActive(false);
            });
                MusicBTNMain.transform.DOMove(NewPos.position, 0.5f).SetEase(Ease.OutBounce);

            hapticBTN.transform.DOScale(Vector3.zero, 0.5f).SetEase(Ease.OutBounce).OnComplete(() =>
            {
                hapticBTN.SetActive(false);
            });
                hapticBTN.transform.DOMove(NewPos.position, 0.5f).SetEase(Ease.OutBounce).OnComplete(()=> SettingOpen = false);
            SettingImg.sprite = normalSprite;
        }
    }

    public void SoundBTNFunc()
    {
        IssoundPlay = !IssoundPlay;

    }

    public void MusicBTNFunc()
    {
        IsMusic = !IsMusic;
    }

    public void hapticsFunc()
    {
        IsHapticsPlay = !IsHapticsPlay;
    }

    public void LoadData()
    {
        IsHapticsPlay = Convert.ToBoolean(PlayerPrefs.GetInt("hapticBTN", 1));
        IssoundPlay = Convert.ToBoolean(PlayerPrefs.GetInt("SoundBTN", 1));
        IsMusic = Convert.ToBoolean(PlayerPrefs.GetInt("musicBTN", 1));
    }

}
