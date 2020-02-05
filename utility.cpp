// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions
#include <cmath>

bool isOdd(int x) {
  if (abs(x) % 2 == 1){
    return true;
  }else{
    return false;
  }
}
bool isEven(int x) { 
  if (abs(x) % 2 == 0){
    return true;
  }else{
    return false;
  }
}
bool isPrime(int x) { 
  for (int i = 2; i < abs(x); i++){
    if(abs(x)%i == 0){
      return false;
    }
  }
  if (x == 0 || abs(x) == 1){
    return false;
  }
  return true;
}
