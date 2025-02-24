
#include "MyBirch.h"

Birch::Birch() : height (1), nol (numberOfLeaves)
{
  numberOfBranches = 0;

  numberOfLeaves = nullptr;
}

Birch::Birch(double height_) : Birch::Birch()
{
  if (height_ <= 0)
    height = 1;
  else
    this->height = height;
}

Birch::Birch(double height_, int numberOfBranches, int* numberOfLeaves) : Birch::Birch()
{
}

Birch::Birch(const Birch& p) : Birch::Birch()
{
}

Birch::Birch(Birch&& p) : Birch::Birch()
{
}

Birch::~Birch()
{
  if (numberOfLeaves != nullptr)
    delete[] numberOfLeaves;
}

double Birch::GetHeight()
{
  return 0.0;
}

int Birch::GetNumberOfBranches()
{
  return 0;
}

int* Birch::GetNumberOfLeaves()
{
  return nullptr;
}

void Birch::SetHeight(double height_)
{
}

void Birch::SetNumberOfBranches(int numberOfBranches_)
{
}

void Birch::SetNumberOfLeaves(int* numberOfBranches_)
{
}

std::ostream& operator<<(std::ostream& o, Birch& b)
{
  return o;
}

std::istream& operator>>(std::istream& i, Birch& b)
{
  return i;
}
