using UnityEngine;
using System.Runtime.InteropServices;

internal class Optimizer : MonoBehaviour {
  [DllImport("Optimizer")]
  public static extern void Sort(int[] arr, int length);
  public static extern float Magnitude(float a, float b);
  
  public int[] a;
  
  void Start() {
    a = new int [] { 52, 13, 129, 34 };
    Sort(a, a.Length);
    for (int i = 0; i < a.Length; i++) {
      Debug.Log(a[i]);
    }
    
    Debug.Log(Magnitude(50f, 29f));
  }
}