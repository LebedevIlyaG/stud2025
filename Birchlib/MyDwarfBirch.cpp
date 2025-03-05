#include "MyDwarfBirch.h"



DwarfBirch::DwarfBirch(double height_, int numberOfBranches_, 
  int* numberOfLeaves_) : 
  Birch::Birch(height_, numberOfBranches_, numberOfLeaves_)
{
  color = 0;
  if (height_ > 15)
    throw "Error height!!!";
}

DwarfBirch::DwarfBirch(const Birch& p) : Birch::Birch(p)
{
  color = 0;
}

DwarfBirch::DwarfBirch(Birch&& p) : Birch::Birch()
{
  color = 0;
  this->height = p.GetHeight();
  this->numberOfBranches = p.GetNumberOfBranches();
  this->numberOfLeaves = p.GetNumberOfLeaves();

  p.SetNumberOfBranches(0);
}

DwarfBirch::~DwarfBirch()
{
}

void DwarfBirch::SetHeight(double height_)
{
  if (height_ <= 0 || height_ >= 15)
    throw "Error Heigth!!!";
  height = height_;
}

int DwarfBirch::GetNumberOfBranches()
{
  std::cout << "\nYa za vami sleshu!\n";
  return this->numberOfBranches;
}

int DwarfBirch::GetColor()
{
  return color;
}
