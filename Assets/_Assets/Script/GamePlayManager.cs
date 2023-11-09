using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using TMPro;
using UnityEngine.UI.Extensions;
using UnityEngine.SceneManagement;
using UnityEngine.UIElements;
using Unity.VisualScripting;
using System;
using GameAnalyticsSDK;
using System.Reflection;

public class GamePlayManager : MonoBehaviour
{
    public static GamePlayManager instance;
    public int LvlNum = 0;
    public int LevelCount = 1;
    public int CoinAmount = 0;
    [SerializeField] TMP_Text levelText, coinAmountText, quotes, intelText;
    public List<LevelData> levelDataList;
    [SerializeField] List<GameObject> LevelGrid, ImgSpwaned;
    [SerializeField] GameObject SpwanPrefabe, imgPrefabe;
    public Camera cam;
    public bool isGameplay = true;
    [SerializeField] LayerMask hitLayer, imgLayer, pieceLayer;
    public List<GameObject> storedObject, spwanedObjects;
    public List<string> StoredString;
    [SerializeField] Transform parentTra;
    [SerializeField] int WinInex = 0;
    [SerializeField] GameObject winScreen;
    bool isRotate = false;
    bool taphint = false;
    int hintcount = 0;
    int newInt = 0;
    [SerializeField] List<string> newStringList;


    public List<AudioSource> otherAudio;
    public AudioSource backGroundAudio;
    [SerializeField] List<Sprite> spriteList;
    [SerializeField] List<Color> textShadecolor;
    [SerializeField] List<Material> newmat;
    [SerializeField] Sprite GlowImg, normalSprite, RighWordSprite;
    [SerializeField] float Degree;

    [SerializeField] GameObject wonderFulTextobg, rainbowEffectobg, nextlvlBtn, rainbowSpine;
    GameObject storedImg;
    bool FocusImg = false;

    public AudioSource TapSound, correctwordSound, wrongWordSound, levelCompleteSound, selectSound1, selectSound2, selectSound3, selectSound4, wheelSound;

    //color when unselectRightWord

    [SerializeField] List<Color> tmpTextColor;
    [SerializeField] GameObject tmpEffect;
    [SerializeField] Material defualtMat;
    [SerializeField] int intelCount;

    private Vector2 startPos;
    private Vector2 endPos;
    public float minSwipeDistance = 1f;
    public float minSwipeThreshold = 1f;

    [SerializeField] int rotationInd;
    [SerializeField] Transform Circle, NewParent;
    [SerializeField] Color GreySpriteColor, greyBgColor;
    [SerializeField] GameObject HandObg;
    [SerializeField] Transform StartPos, Endpos;
    private float inactivityTime = 5.0f;
    private IEnumerator myEnm;
    private float SpwanNewCount;
    [SerializeField] GameObject NewEffect, effectParent;
    [SerializeField] TMP_Text Counter, levlNameText;
    [SerializeField] List<UnityEngine.UI.Image> spwanBg;
    [SerializeField] List<int> bgIndex;

    int FinalTmpIndex;
    private void Awake()
    {
        instance =  this;

        if (!PlayerPrefs.HasKey("LvlNum"))
        {
            PlayerPrefs.SetInt("LvlNum", 0);
        }

        if (!PlayerPrefs.HasKey("LevelCount"))
        {
            PlayerPrefs.SetInt("LevelCount", 1);
        }


        if (!PlayerPrefs.HasKey("intelCount"))
        {
            PlayerPrefs.SetInt("intelCount", 1);
        }

        Application.targetFrameRate = 50;
    }

    float HintDelay = 0f;
    private void Start()
    {
        isGameplay = true;
        // cam = Camera.main;
        LvlNum = PlayerPrefs.GetInt("LvlNum");
        LevelCount = PlayerPrefs.GetInt("LevelCount");
        intelCount = PlayerPrefs.GetInt("intelCount");
        SdkManager.LevelStartEvent(LvlNum);
        intelText.text = intelCount.ToString();
        CoinAmount = PlayerPrefs.GetInt("CoinAmount", 0);
        levelText.text = "Level " + LevelCount.ToString();
        coinAmountText.text = CoinAmount.ToString();
        quotes.text = levelDataList[LvlNum].LevelName.ToString();   
        LevelGrid[LvlNum].SetActive(true);
        levelDataList[LvlNum].ParentCircle.gameObject.SetActive(true);
        StartCoroutine(SpwanTileENM());

        for (int i = 0; i < levelDataList[LvlNum].rightString.Count; i++)
        {

            GameObject SpwanText = Instantiate(imgPrefabe, levelDataList[LvlNum].imagePos[i].position, levelDataList[LvlNum].imagePos[i].rotation, levelDataList[LvlNum].ParentTra);
            var newvar = SpwanText.transform.GetChild(0).GetComponent<RectTransform>();

            levelDataList[LvlNum].tmpRightString.Add(levelDataList[LvlNum].rightString[i]);
            levelDataList[LvlNum].TmpFinalList.Add(levelDataList[LvlNum].rightString[i]);
            SpwanText.transform.localRotation = levelDataList[LvlNum].imagePos[i].rotation;
            SpwanText.transform.GetChild(0).localScale = Vector3.one * levelDataList[LvlNum].tickScale;
            newvar.localPosition = new Vector3(newvar.localPosition.x, levelDataList[LvlNum].YoffsetVal, 0);

            SpwanText.GetComponent<UnityEngine.UI.Image>().sprite = levelDataList[LvlNum].SpawnImg[i];
            ImgSpwaned.Add(SpwanText);

        }



        /*  for (int i = levelDataList[LvlNum].rightString.Count; i < 4; i++)
          {
              levelDataList[LvlNum].imageBg[i].gameObject.SetActive(false);
          }
  */
        SpwanNewCount = ImgSpwaned.Count;
        Counter.text = WinInex + " / " + levelDataList[LvlNum].rightString.Count;
        levlNameText.text = levelDataList[LvlNum].LevelName;

        levelDataList[LvlNum].AngleRotation = 360f / levelDataList[LvlNum].imageBg.Count;

        for (int i = 0; i < levelDataList[LvlNum].imageBg.Count; i++)
        {
            spwanBg.Add(levelDataList[LvlNum].imageBg[i]);

        }

        //HandObg.SetActive(false);
        //HandObg.transform.DOMoveX(HandObg.transform.position.x - 1f, 1f).SetEase(Ease.Linear).SetLoops(-1,LoopType.Restart);
        //myEnm = null;
        //myEnm = StartTimer();
        //StartCoroutine(myEnm);
        

        FinalTmpIndex = levelDataList[LvlNum].rightString.Count;
    }


    private void Update()
    {
        if (isGameplay)
        {
            DetectObg();
            /*if (HintDelay >= 6f)
            {
                if (HandObg.activeSelf == true)
                {
                    HintDelay = 0;
                }
                else
                {
                    myEnm = HelpEnm();
                    StartCoroutine(myEnm);
                }
            }
            else
            {
                HintDelay += Time.deltaTime;
            }*/
        }
    }

    IEnumerator SpwanTileENM()
    {
        for (int i = 0; i < levelDataList[LvlNum].SpwanLatters.Count; i++)
        {
            GameObject Spwantiles = Instantiate(SpwanPrefabe, levelDataList[LvlNum].SpwanTra[i].position, SpwanPrefabe.transform.rotation, levelDataList[LvlNum].SpwanTra[i]);
            Spwantiles.GetComponentInChildren<TMP_Text>().text = levelDataList[LvlNum].SpwanLatters[i];
            Spwantiles.transform.parent.name = levelDataList[LvlNum].SpwanLatters[i];
            spwanedObjects.Add(Spwantiles);
            Spwantiles.transform.GetChild(0).DOScale(Vector3.one, 0.5f).SetEase(Ease.OutBounce);
            Spwantiles.name = levelDataList[LvlNum].SpwanLatters[i];
        }

        levelDataList[LvlNum].SetHintData();
        yield return new WaitForSeconds(0f);
    }

    int randomIndex;
    public void DetectObg()
    {
        if (Input.GetMouseButtonDown(0))
        {
            randomIndex = UnityEngine.Random.Range(0, newmat.Count);
            startPos = Input.mousePosition;
            //StopCoroutine(myEnm);
            //HandObg.SetActive(false);
            // if (myEnm != null)
            //{
                //StopAllCoroutines();
                 //StopCoroutine(myEnm);
                //HintDelay = 0;
            //}
        }

        if (Input.GetMouseButton(0))
        {
            Ray ray = cam.ScreenPointToRay(Input.mousePosition);

            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, Mathf.Infinity, hitLayer))
            {
                Transform hitTransform = hit.transform;
                if (!storedObject.Contains(hitTransform.gameObject))
                {
                    storedObject.Add(hitTransform.gameObject);
                    HapticFeedBacks.Instance.PlayLightViberation();

                    if (storedObject.Count > 1)
                    {
                        Vector3 targetDir = storedObject[storedObject.Count - 1].transform.position - storedObject[storedObject.Count - 2].transform.position;
                        targetDir.Normalize();
                        // float angle = Vector3.Angle(targetDir, storedObject[storedObject.Count - 1].transform.up);
                        float newangle = Mathf.Atan2(targetDir.y, targetDir.x) * Mathf.Rad2Deg;


                        if (storedObject.Count == 2)
                        {
                            float tmpFloat = Vector3.Distance(storedObject[storedObject.Count - 1].transform.position, storedObject[storedObject.Count - 2].transform.position);

                            if (tmpFloat < levelDataList[LvlNum].Length)
                            {
                                selectSound2.Play();

                                //hitTransform.GetComponent<UnityEngine.UI.Image>().sprite = spriteList[randomIndex];
                                hitTransform.GetChild(0).transform.GetComponent<MeshRenderer>().material = newmat[randomIndex];
                                hitTransform.DOKill();
                                //  hitTransform.DOScale(Vector3.one * 0.8f, 0.2f).SetEase(Ease.OutQuad).OnComplete(() => hitTransform.DOScale(Vector3.one * 0.726f, 0.1f).SetEase(Ease.OutQuad));
                                hitTransform.transform.DOLocalMove(new Vector3(hit.transform.localPosition.x, hit.transform.localPosition.y, 1.31f), 0.1f).SetEase(Ease.OutQuad);
                                // hitTransform.transform.GetChild(0).GetComponent<Outline>().enabled = false;
                                hitTransform.transform.GetChild(0).GetComponent<Outline>().OutlineColor = Color.white;
                                StoredString.Add(hitTransform.name);
                                // Degree = angle;
                                Degree = newangle;
                            }
                            else
                            {
                                storedObject.RemoveAt(storedObject.Count - 1);
                            }

                        }
                        else if (storedObject.Count >= 2)
                        {
                            float min = Degree - 3;
                            float max = Degree + 3;

                            float tmpFloat = Vector3.Distance(storedObject[storedObject.Count - 1].transform.position, storedObject[storedObject.Count - 2].transform.position);

                            if (newangle > min && newangle < max && tmpFloat < levelDataList[LvlNum].Length)
                            {
                                //print(angle);
                                //  hitTransform.GetComponent<UnityEngine.UI.Image>().sprite = spriteList[randomIndex];
                                hitTransform.GetChild(0).transform.GetComponent<MeshRenderer>().material = newmat[randomIndex];
                                hitTransform.DOKill();
                                //  hitTransform.DOScale(Vector3.one * 0.8f, 0.2f).SetEase(Ease.OutQuad).OnComplete(() => hitTransform.DOScale(Vector3.one * 0.726f, 0.1f).SetEase(Ease.OutQuad));
                                hitTransform.transform.DOLocalMove(new Vector3(hit.transform.localPosition.x, hit.transform.localPosition.y, 1.31f), 0.1f).SetEase(Ease.OutQuad);
                                // hitTransform.transform.GetChild(0).GetComponent<Outline>().enabled = false;
                                hitTransform.transform.GetChild(0).GetComponent<Outline>().OutlineColor = Color.white;
                                StoredString.Add(hitTransform.name);
                                if (storedObject.Count > 3)
                                {
                                    selectSound4.Play();
                                }
                                else if (storedObject.Count == 3)
                                {
                                    selectSound3.Play();
                                }
                            }
                            else
                            {
                                storedObject.RemoveAt(storedObject.Count - 1);
                            }
                        }
                    }
                    else
                    {
                        if (storedObject.Count <= 1)
                        {
                            selectSound1.Play();
                        }
                        //  hitTransform.GetComponent<UnityEngine.UI.Image>().sprite = spriteList[randomIndex];
                        hitTransform.GetChild(0).transform.GetComponent<MeshRenderer>().material = newmat[randomIndex];
                        hitTransform.DOKill();
                        //  hitTransform.DOScale(Vector3.one * 0.8f, 0.2f).SetEase(Ease.OutQuad).OnComplete(() => hitTransform.DOScale(Vector3.one * 0.726f, 0.1f).SetEase(Ease.OutQuad));
                        hitTransform.transform.DOLocalMove(new Vector3(hit.transform.localPosition.x, hit.transform.localPosition.y, 1.31f), 0.1f).SetEase(Ease.OutQuad);
                        //  hitTransform.transform.GetChild(0).GetComponent<Outline>().enabled=false;
                        hitTransform.transform.GetChild(0).GetComponent<Outline>().OutlineColor = Color.white   ;
                        StoredString.Add(hitTransform.name);

                    }
                }
            }
        }

        if (Input.GetMouseButtonUp(0))
        {
            CheckFunc();
            isTimer = false;
            //myEnm = null;
            //myEnm = StartTimer();
            //StartCoroutine(myEnm);
            Degree = 0;
            isGameplay = false;
        }
    }
    int indexOfString;

    private void BlastConfitty()
    {
        GameObject Partical = Instantiate(NewEffect, new Vector3(ImgSpwaned[indexOfString].transform.position.x, ImgSpwaned[indexOfString].transform.position.y - 0.2f, ImgSpwaned[indexOfString].transform.position.z - 5), Quaternion.identity, effectParent.transform);
       // Invoke("Rotateinvoke", 0.6f);
        Destroy(Partical,1f);
    }   

   /* private void Rotateinvoke()
    {
        RotationInd++;
    }*/
    void ResetImgSize()
    {
        storedImg.transform.DOScale(Vector3.one, 0.1f).SetEase(Ease.OutCirc).OnComplete(() =>
         FocusImg = false);
    }
    public void CheckFunc()
    {
        string generatedString = string.Join("", StoredString);
        if (levelDataList[LvlNum].tmpRightString.Contains(generatedString))
        {
            WinInex++;
            FinalTmpIndex--;
            Counter.text = WinInex + " / " + levelDataList[LvlNum].rightString.Count;
            correctwordSound.Play();
            for (int i = 0; i < storedObject.Count; i++)
            {
                Slot recivedSlot = storedObject[i].GetComponent<Slot>();

                if (recivedSlot.increaseInd < recivedSlot.Index)
                {
                    recivedSlot.increaseInd++;
                }
                else if (recivedSlot.Index == recivedSlot.increaseInd)
                {
                    recivedSlot.isSeleccted = true;
                }

                //  storedObject[i].transform.GetComponent<Image>().sprite = RighWordSprite;
                // storedObject[i].transform.GetComponent<UnityEngine.UI.Image>().sprite = spriteList[randomIndex];

                storedObject[i].transform.GetChild(0).GetChild(0).GetComponent<TMP_Text>().color = textShadecolor[randomIndex];
                recivedSlot.RightWordSprite = spriteList[randomIndex];
                storedObject[i].transform.GetChild(0).GetComponent<MeshRenderer>().material = newmat[randomIndex];

                recivedSlot.storedMat = newmat[randomIndex];

            }
            tmpTextColor.Add(textShadecolor[randomIndex]);

             indexOfString = levelDataList[LvlNum].tmpRightString.IndexOf(generatedString);
            RotationInd = (int)SpwanNewCount - indexOfString;
            bgIndex.Add(RotationInd);

            ImgSpwaned[indexOfString].transform.DOScale(Vector3.one * 1f, 0.3f).OnComplete(() =>
                 {
                     // ImgSpwaned[indexOfString].transform.GetChild(0).gameObject.SetActive(true));
                     /*  if (levelDataList[LvlNum].rightString.Count > 5 && SpwanNewCount < levelDataList[LvlNum].rightString.Count)
                       {
                           //ImgSpwaned[indexOfString].transform.GetComponent<UnityEngine.UI.Image>().sprite = levelDataList[LvlNum].SpawnImg[4 + WinInex];
                           levelDataList[LvlNum].tmpRightString[indexOfString] = levelDataList[LvlNum].rightString[4 + WinInex];
                           SpwanNewCount++;
                       }
                       else
                       {
                       }*/
                     levelDataList[LvlNum].imageBg[indexOfString].color = greyBgColor;
                     ImgSpwaned[indexOfString].transform.GetComponent<UnityEngine.UI.Image>().color = GreySpriteColor;
                 }


             );
            ImgSpwaned[indexOfString].layer = 0;

            //remove simmilar word also
            // storedObject.ForEach(x => levelDataList[LvlNum].hintStoredObg.Remove(x));

            /* for (int i = levelDataList[LvlNum].hintStoredObg.Count - 1; i >= 0; i--)
             {
                 if (levelDataList[LvlNum].hintStoredObg[i].GetComponent<Slot>().isSeleccted)
                 {
                     levelDataList[LvlNum].hintStoredObg.RemoveAt(i);
                 }
             }*/
            var hint = levelDataList[LvlNum].hints.Find(x => x.hintWord == generatedString);
            levelDataList[LvlNum].hints.Remove(hint);

            spriteList.Remove(spriteList[randomIndex]);
            textShadecolor.Remove(textShadecolor[randomIndex]);
            newmat.Remove(newmat[randomIndex]);

            CoinAmount += 10;
            PlayerPrefs.SetInt("CoinAmount", CoinAmount);
            coinAmountText.text = CoinAmount.ToString();
            Invoke("BlastConfitty", 0.5f);

            levelDataList[LvlNum].tmpRightString[indexOfString] = "null";
           // levelDataList[LvlNum].tmpRightString.Remove(generatedString);

            hintcount = 0;
            newInt = 0;
            CheckForWin();
            storedObject.Clear();
            StoredString.Clear();
        }
        else
        {
            StartCoroutine(UnselectLatters());
            RotateWheelControl();
        }
    }

    IEnumerator UnselectLatters()
    {
        List<GameObject> tempOfStoreObject = new List<GameObject>(storedObject);
        tempOfStoreObject.Reverse();

        for (int i = 0; i < tempOfStoreObject.Count; i++)
        {
            GameObject tmpObg = tempOfStoreObject[i];
            tmpObg.transform.DOKill();

            if (tmpObg.GetComponent<Slot>().isSeleccted)
            {
                tmpObg.transform.GetChild(0).transform.GetComponent<MeshRenderer>().material = tmpObg.GetComponent<Slot>().storedMat;
                tmpObg.transform.DOLocalMove(new Vector3(tmpObg.transform.localPosition.x, tmpObg.transform.localPosition.y, 1.31f), 0.5f);
                //   tmpObg.transform.DOScale(Vector3.one * 0.8f, 0.2f).SetEase(Ease.OutQuad).OnComplete(() => tmpObg.transform.DOScale(Vector3.one * 0.726f, 0.726f).SetEase(Ease.OutQuad));
                wrongWordSound.Play();
            }
            else
            {
                tmpObg.transform.DOLocalMove(new Vector3(tmpObg.transform.localPosition.x, tmpObg.transform.localPosition.y, 0.31f), 0.5f);
                tmpObg.transform.GetChild(0).transform.GetComponent<MeshRenderer>().material = defualtMat;
                //tmpObg.GetComponent<UnityEngine.UI.Image>().sprite = normalSprite;
                // tmpObg.transform.DOScale(Vector3.one * 0.8f, 0.2f).SetEase(Ease.OutQuad).OnComplete(() => tmpObg.transform.DOScale(Vector3.one * 0.726f, 0.726f).SetEase(Ease.OutQuad));
                wrongWordSound.Play();
            }

            yield return new WaitForSeconds(0.1f);
        }

        storedObject.Clear();
        StoredString.Clear();

        yield return new WaitForSeconds(0.1f);

        isGameplay = true;
    }

    /* private void RotaionIncrease()
     {
         RotationInd++;
     }
 */
    bool isTimer = false; 
    public IEnumerator StartTimer()
    {
        yield return new WaitForSeconds(6);
       
        HandObg.SetActive(true);

        /*if(isTimer != true)
        {
            isTimer = true;
            myEnm = HelpEnm();
            StartCoroutine(myEnm);
            //StartCoroutine(HelpEnm());
        }*/
    }

    public IEnumerator HelpEnm()
    {
        HandObg.transform.localPosition = new Vector3(-2, 0, 0);
        HandObg.SetActive(true);
        yield return new WaitForSeconds(0.6f);
        HandObg.transform.DOMoveX(HandObg.transform.position.x - 1f, 0.5f).SetEase(Ease.Linear);
        yield return new WaitForSeconds(1f);
        HandObg.SetActive(false);
        yield return new WaitForSeconds(0.7f);
        myEnm = HelpEnm();
        StartCoroutine(myEnm);
    }
    //hint Func
    int newcount;
    public void hintFunc()
    {
        var hint = levelDataList[LvlNum].hints[0];
        if (!taphint && CoinAmount >= 30 && hint.index < hint.hintNewStrings.Count)
        {
            var gameObject = levelDataList[LvlNum].hints[0].hintNewStrings[hint.index];
            TapSound.Play();
            HapticFeedBacks.Instance.PlayMediumViberation();
            taphint = true;
            if (levelDataList[LvlNum].hints.Count < 0) return;

            newInt++;

            //outline
            gameObject.transform.GetChild(0).GetComponent<Outline>().enabled = true;
            gameObject.transform.GetChild(0).GetComponent<Outline>().OutlineColor = Color.green;
            /* levelDataList[LvlNum].hintStoredObg[0].transform.GetComponent<UnityEngine.UI.Image>().sprite = GlowImg;
             levelDataList[LvlNum].hintStoredObg[0].transform.DOPunchScale(Vector3.one * 0.3f, 0.3f, 5, 5f).SetEase(Ease.OutCirc).OnComplete(() => taphint = false);*/

            hint.index++;
            // gameObject.transform.GetComponent<UnityEngine.UI.Image>().sprite = GlowImg;
            gameObject.transform.DOPunchScale(Vector3.one * 0.3f, 0.3f, 5, 5f).SetEase(Ease.OutCirc).OnComplete(() => taphint = false);
            CoinAmount -= 30;
            PlayerPrefs.SetInt("CoinAmount", CoinAmount);
            coinAmountText.text = CoinAmount.ToString();
            levelDataList[LvlNum].hints[0] = hint;
        }
    }

    float currentRotationAngle;
    float childRotateAngle;
    int angleInt;


    public int RotationInd
    {
        get => rotationInd; set
        {
            if (value >= SpwanNewCount)
            {
                value = 0;
            }
            else if (value < 0)
            {

                value = (int)SpwanNewCount - 1;
            }

            bool increment = false;

            if (rotationInd < value)
            {
                increment = true;
            }

            do
            {
                if (FinalTmpIndex == 0)
                {
                    break;
                }

                if (bgIndex.Contains(value))
                {

                    if (increment)
                    {
                        value = value + 1;
                    }
                    else
                    {
                        value = value - 1;
                    }

                    if (value >= SpwanNewCount)
                    {
                        value = 0;
                    }
                    else if (value < 0)
                    {

                        value = (int)SpwanNewCount - 1;
                    }

                }
                else
                {
                    break;
                }



            }
            while (bgIndex.Contains(value));

            rotationInd = value;
            float fianlRotation = rotationInd * levelDataList[LvlNum].AngleRotation;
            DOTween.Kill(levelDataList[LvlNum].ParentCircle);
            if (value>=0)
            {
                wheelSound.Play();
                HapticFeedBacks.Instance.PlayMediumViberation();
            }
            levelDataList[LvlNum].ParentCircle.DORotate(new Vector3(0, 0, fianlRotation), 0.5f).OnComplete(() =>
            {
                isGameplay = true;
            });
        }
    }

    //shuffle func
    public void ShuffleFunc()
    {
        if (!isRotate)
        {
            TapSound.Play();
            HapticFeedBacks.Instance.PlayMediumViberation();
            isRotate = true;
            LevelGrid[LvlNum].transform.DOScale(Vector3.one * 0.7f, 0.4f).SetEase(Ease.OutQuad).OnComplete(() =>
             {
                 currentRotationAngle -= 180f;

                 if (angleInt == 0)
                 {
                     childRotateAngle = -90;
                     angleInt = 1;
                 }
                 else if (angleInt == 1)
                 {
                     childRotateAngle = 90;
                     angleInt = 0;
                 }

                 for (int i = 0; i < levelDataList[LvlNum].SpwanTra.Count; i++)
                 {
                     levelDataList[LvlNum].SpwanTra[i].transform.localRotation = Quaternion.Euler(90, 90, 90);
                     levelDataList[LvlNum].SpwanTra[i].transform.DOLocalRotateQuaternion(Quaternion.Euler(childRotateAngle, 90, 90), 0.5f).SetEase(Ease.OutSine);
                 }

                 LevelGrid[LvlNum].transform.DOLocalRotate(new Vector3(0, 0, currentRotationAngle), 0.5f).SetEase(Ease.OutSine).OnComplete(() =>
                 {
                     LevelGrid[LvlNum].transform.DOScale(Vector3.one * 1f, 0.3f).OnComplete(() => isRotate = false);

                 });
             });

        }

    }

    void removeString()
    {

        for (int i = 0; i < levelDataList[LvlNum].hintStoredObg.Count; i++)
        {
            if (levelDataList[LvlNum].hintStoredObg[i] == null)
            {
                levelDataList[LvlNum].hintStoredObg.RemoveAt(i);
            }
        }
    }

    private void CheckForWin()
    {
        if (FinalTmpIndex == 0)
        {
            isGameplay = false;
            LevelGrid[LvlNum].SetActive(false);
            levelCompleteSound.Play();
            StartCoroutine(WinEnm());
        }

    }

    IEnumerator WinEnm()
    {
        yield return new WaitForSeconds(1f);
        winScreen.SetActive(true);
        yield return new WaitForSeconds(0.5f);
        wonderFulTextobg.SetActive(true);
        wonderFulTextobg.transform.DOScale(Vector3.one, 0.6f).SetEase(Ease.OutBounce);
        rainbowEffectobg.SetActive(true);
        rainbowSpine.SetActive(true);
        yield return new WaitForSeconds(1f);
        intelText.transform.DOScale(Vector3.one * 1.4f, 0.3f).OnComplete(() =>
        {
            //intelText.transform.DOScale(Vector3.one, 0.2f);
            StartCoroutine(IncreaseIntelVal());
        });

        CoinAmount += 30;
        PlayerPrefs.SetInt("CoinAmount", CoinAmount);
        coinAmountText.text = CoinAmount.ToString();

    }

    IEnumerator IncreaseIntelVal()
    {
        for (int i = 0; i <= 7; i++)
        {
            yield return new WaitForSeconds(0.12f);
            //intelCount = PlayerPrefs.GetInt("intelCount");
            intelCount++;
            intelText.text = (intelCount).ToString();
        }
        PlayerPrefs.SetInt("intelCount", intelCount);
        nextlvlBtn.SetActive(true);

    }

    public void LevelCompleteFunc()
    {
        TapSound.Play();
        HapticFeedBacks.Instance.PlayMediumViberation();
        PlayerPrefs.SetInt("LevelCount", PlayerPrefs.GetInt("LevelCount") + 1);
        PlayerPrefs.SetInt("LvlNum", PlayerPrefs.GetInt("LvlNum") + 1);
        SdkManager.LevelSuccessEvent(LvlNum, intelCount);
        DOTween.KillAll();
        CancelInvoke();
        StopAllCoroutines();
        SceneManager.LoadScene(1);
        if (LvlNum >= 24)
        {
            PlayerPrefs.SetInt("LvlNum", 0);
        }
    }


    public void RotateWheelControl()
    {
        Ray TapRay = cam.ScreenPointToRay(Input.mousePosition);

        RaycastHit Taphit;
        if (Physics.Raycast(TapRay, out Taphit, Mathf.Infinity, pieceLayer))
        {
            endPos = Input.mousePosition;

            Vector2 swipeDirection = endPos - startPos;
            float swipeDistance = swipeDirection.magnitude;
            if (swipeDistance > minSwipeDistance)
            {
                if (Mathf.Abs(swipeDirection.x) > minSwipeThreshold)
                {
                    // Swipe is horizontal
                    if (swipeDirection.x > 0)
                    {
                        RotationInd--;
                        // Right swipe
                        // Perform actions for right swipe (e.g., move right or trigger an event)
                    }
                    else
                    {
                        RotationInd++;
                        // Left swipe
                        // Perform actions for left swipe (e.g., move left or trigger an event)
                    }
                }
            }
        }

    }
}
