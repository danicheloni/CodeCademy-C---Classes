/*Write a program to find the sum of even numbers and the product of odd numbers in a vector.

For example:

Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.*/

#include <iostream>
#include <vector>

int main() {
  std::vector <int> myvector = {2, 4, 3, 6, 1, 9};
  int soma = 0;
  int prod = 1;

  for (int i = 0; i < myvector.size(); i++){
    if (myvector[i] % 2 == 0){
      soma = soma + myvector[i];
    }
    else{
      prod = prod * myvector[i];
    }
  }

  std::cout << "Sum of even numbers is: " << soma << "\n";
  std::cout << "Product of odd numbers is: " << prod << "\n";
}