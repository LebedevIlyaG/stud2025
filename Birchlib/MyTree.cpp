#include "MyTree.h"
#include "MyDwarfBirch.h"

Tree::Tree() : height(1)
{
  numberOfBranches = 0;

  numberOfLeaves = nullptr;
}


std::ostream& operator<<(std::ostream& o, Tree& b)
{
  Tree* tree = &b;
  //char* buf = (char*)c;
  //buf[0] = 1;
  void* buf2 = (void*)(tree);
  
  DwarfBirch* bb = 0;
  bb = (DwarfBirch*)buf2;
  DwarfBirch* bb2 = (DwarfBirch*)((void*)(tree));

  DwarfBirch* bb3 = dynamic_cast<DwarfBirch*>(tree);
  


  o << b.GetHeight() << "\t" << b.GetNumberOfBranches() << "\n";
  for (int i = 0; i < b.GetNumberOfBranches(); i++)
    o << b.GetNumberOfLeaves()[i] << "\t";
  if (bb3 != 0)
    o << bb3->GetColor();
  o << std::endl;
  return o;
}

std::istream& operator>>(std::istream& i, Tree& b)
{
  return i;
}
