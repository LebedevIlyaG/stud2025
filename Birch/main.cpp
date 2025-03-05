#include <iostream>
#include "MyBirch.h"
#include "MyDwarfBirch.h"

void CreateP(int& n, int*& mas)
{
  //std::cin >> n;
  mas = new int[n];
  for (int i = 0; i < n; i++)
    (mas)[i] = rand();
}

void Method(Birch* b)
{
  b->SetHeight(double(rand()) / RAND_MAX * 32);
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
  Birch d = a;
  Birch d1( a);
  Birch a1 = 17;
  Birch a2 = { 17, 43 };
  Birch a3(17.0, 3, new int [3]{3, 2, 1});



  DwarfBirch b;
  DwarfBirch c(14);
  Birch** mas = new Birch*[3];
  mas[0] = new Birch(14);
  mas[1] = new DwarfBirch(14);
  mas[2] = new Birch(2);

  (*(mas[0])).SetHeight(16);
  mas[1]->SetHeight(14);

  mas[1]->SetNumberOfBranches(9);

  //Method(&a);
  //Method(&b);

  std::cout<< c << "\nHi\n";
  std::cout << a << std::endl;
  return 0;
}
