
#include "MyBirch.h"

#include "new"

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
    this->height = height_;
}

Birch::Birch(double height_, int numberOfBranches_,
  int* numberOfLeaves_) :  Birch::Birch(height_)
{
  if (numberOfBranches_ < 0)
    numberOfBranches = 0;
  else
    numberOfBranches = numberOfBranches_;

  if (numberOfLeaves_ == nullptr)
  {
    numberOfLeaves = new int[numberOfBranches] {0};
  }
  else
  {
    numberOfLeaves = new int[numberOfBranches];
    for (int i = 0; i < numberOfBranches; i++)
      numberOfLeaves[i] = numberOfLeaves_[i];
  }
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
