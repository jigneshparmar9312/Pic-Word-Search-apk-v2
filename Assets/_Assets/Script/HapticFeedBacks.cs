using MoreMountains.NiceVibrations;
using UnityEngine;

public class HapticFeedBacks : MonoBehaviour
{
    private static HapticFeedBacks _instance;
    public static HapticFeedBacks Instance => _instance;
    Settings settings;

    private void Awake()
    {
        if(_instance == null)
        {
            _instance = this; 
        }

    }

    private void Start()
    {
        settings = Settings.instance;
        MMVibrationManager.SetHapticsActive(true);
    }

    public void PlayLightViberation()
    {
        if(!settings.isHapticsPlay)
        {
            return;
        }
        MMVibrationManager.Haptic(HapticTypes.LightImpact, false, true, this);
    }

    public void PlayMediumViberation()
    {
        if (!settings.isHapticsPlay)
        {
            return;
        }
        MMVibrationManager.Haptic(HapticTypes.MediumImpact, false, true, this);
    }

    public void PlayHeavyVibration()
    {
        if (!settings.isHapticsPlay)
        {
            return;
        }
        MMVibrationManager.Haptic(HapticTypes.HeavyImpact, false, true, this);
    }

    public void PlayContinuesVibration()
    {
        if (!settings.isHapticsPlay)
        {
            return;
        }
        MMVibrationManager.Haptic(HapticTypes.LightImpact, false, true, this);
    }

}
