#include "Optimizer.h"
#include <math.h>
#include <algorithm>

extern "C" {
  void Sort(int arr[], int length) {
    std::sort(arr, arr+length);
  }
  float Mag(float a, float b) {
    return sqrtf(a*a+b*b);
  }
}