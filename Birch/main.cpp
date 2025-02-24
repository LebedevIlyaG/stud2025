#include <iostream>
#include "MyBirch.h"

void CreateP(int& n, int*& mas)
{
  //std::cin >> n;
  mas = new int[n];
  for (int i = 0; i < n; i++)
    (mas)[i] = rand();
}

int main()
{
  //bool flag = true;
  /*
  int a = 0;
  int* pa = &a;
  *pa = 7;
  int& sa = a;
  /*
  sa = 11;

  int*& aa = pa;
 
  int* p;
  CreateP(a, p);

  for (int i = 0; i < *aa; i++)
    std::cout << p[i] << std::endl;
      delete[] p;

  int* b = new int(9);

  std::cout << *b << "\n";

  delete b;
    */
  Birch a;
  a.SetHeight(15);


  std::cout<< a << "\nHi\n";
  return 0;
}
