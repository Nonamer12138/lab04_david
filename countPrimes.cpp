#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include <cmath>
#include "utility.h"

int countPrimes(int a[], int size) {
  int count = 0;
  bool isPrime = true;
  for(int i = 0; i < size; i++){
    for(int n = 2; n < a[i]; n++){
      if(abs(a[i])/n == 0){
	isPrime = false;
      }
    }
    if(a[i] == 0 || abs(a[i]) == 1){
      isPrime = false;
    }
    if(isPrime){
      count++;
    }
    isPrime = true;
  }
  return count;  
}
