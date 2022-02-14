/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

int Factorial(int no);
int nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

int Factorial(int no)
{
  int fac;

  fac = 1;
  for (int r=no; r >= 1; r--) 
  {
    fac = fac * r;
  }

  return fac;
}

int nCr(int n, int r)
{
  int a;
  a = n - r;
  int total, fac1 = 1, fac2 = 1, fac3 = 1;

  for (int q=n; q >= 1; q--) 
  {
    fac1 = fac1 * q;
  }

  for (int w=a; w >= 1; w--) 
  {
    fac2 = fac2 * w;
  }

  for (int e=r; e >= 1; e--) 
  {
    fac3 = fac3 * e;
  }

  return fac1 / (fac2 * fac3);

}
