using UnityEngine;
using System.Runtime.InteropServices;
 
public class TestDLLSort : MonoBehaviour {
    // The imported function
    [DllImport("TestDLLSort", EntryPoint = "TestSort")]
    public static extern void TestSort(int [] a, int length);
 
    public int[] a;
 
    void Start() {
      Debug.Log("boo");
      a = new int [] { 52, 13, 129, 34 };
        TestSort(a, a.Length);
        for (int i = 0; i < a.Length; i++) {
          Debug.Log(a[i]);
        }
    }
}