#include <iostream>
#include "Factorial.h"

int main() {
  // feel free to change this test case!
  int value = Factorial(6);
  std::cout << "6! should equal 720. Your Factorial method returned:" 
            << std::endl;
  std::cout << value << std::endl;
}

int Factorial(int n){
    int fact = 1;
    
    for(int i = 1; i<=n; ++i){
        
        fact = fact*i;
    }

   return fact; 
}