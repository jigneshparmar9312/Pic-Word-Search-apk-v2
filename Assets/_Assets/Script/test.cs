using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour
{
    public Transform A, B;

    // Update is called once per frame
    void Update()
    {
        Vector3 targetDir = A.transform.position - B.transform.position;
        float angle = Vector3.Angle(targetDir,A.transform.up);
        print(angle);
    }
}
