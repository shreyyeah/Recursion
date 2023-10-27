//22070123114
//exp15-factorial
#include<iostream>
using namespace std;

int factorial(int x) /* defining a function for factorial*/
{
  if(x > 1)
    return x * factorial(x - 1); 
  else
    return 1;
}

int main() {

  int x;

  cout << "Enter a positive integer: ";
  cin >> x;

  cout << "Factorial of " << x << " = " << factorial(x);

  return 0;
}