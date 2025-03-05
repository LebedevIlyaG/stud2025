
#include "MyBirch.h"

#include "new"

Birch::Birch() : Tree::Tree(), nol(numberOfLeaves)
{

}

Birch::Birch(double height_) : Birch::Birch()
{
  SetHeight(height_);
}

Birch::Birch(double height_, int numberOfBranches_,
  const int* numberOfLeaves_) :  Birch::Birch(height_)
{
  if (numberOfBranches_ < 0)
    Tree::numberOfBranches = 0;
  else
    this->numberOfBranches = numberOfBranches_;

  if (numberOfLeaves_ == nullptr)
  {
    if (numberOfBranches_ > 0)
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
  this->height = p.height;
  this->numberOfBranches = p.numberOfBranches;
  if (numberOfBranches > 0)
  {
    this->numberOfLeaves = new int[numberOfBranches];
    for (int i = 0; i < numberOfBranches; i++)
      numberOfLeaves[i] = p.numberOfLeaves[i];
  }
}

Birch::Birch(Birch&& p) : Birch::Birch()
{
  this->height = p.height;
  this->numberOfBranches = p.numberOfBranches;
  this->numberOfLeaves = p.numberOfLeaves;
  p.numberOfLeaves = nullptr;
}

Birch::~Birch()
{
  if (numberOfLeaves != nullptr)
    delete[] numberOfLeaves;
}

double Birch::GetHeight()
{
  return height;
}

int Birch::GetNumberOfBranches()
{
  return numberOfBranches;
}

int* Birch::GetNumberOfLeaves()
{
  return numberOfLeaves;
}

void Birch::SetHeight(double height_)
{
  if (height_ <= 0)
    throw "Error Heigth!!!";
  height = height_;
}

void Birch::SetNumberOfBranches(int numberOfBranches_)
{
  if (numberOfBranches_ < 0)
    throw "Error numberOfBranches_!!!";

  int* newNOL = new int[numberOfBranches_];
  for (int i = 0; i < std::min(numberOfBranches, numberOfBranches_); i++)
    newNOL[i] = numberOfLeaves[i];

  delete[] numberOfLeaves;
  numberOfLeaves = newNOL;
  numberOfBranches = numberOfBranches_;
}

void Birch::SetNumberOfLeaves(int* numberOfLeaves_)
{
  if (numberOfLeaves_ == nullptr)
  {
    throw "numberOfLeaves_ == nullptr";
  }
  else
  {
    if (numberOfBranches > 0)
    {
      numberOfLeaves = new int[numberOfBranches];
      for (int i = 0; i < numberOfBranches; i++)
      {
        if (numberOfLeaves_[i] >= 0)
          numberOfLeaves[i] = numberOfLeaves_[i];
        else
          throw "numberOfLeaves_[i] < 0";
      }
    }
  }
}

