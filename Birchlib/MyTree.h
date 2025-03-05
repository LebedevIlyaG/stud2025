#pragma once
#include <iostream>

class Tree
{
protected:
  double height;
  int numberOfBranches;
  int* numberOfLeaves;
public:
  Tree();


  virtual double GetHeight() = 0;
  virtual int GetNumberOfBranches() = 0;
  virtual int* GetNumberOfLeaves() = 0;

  virtual void SetHeight(double height_) = 0;
  virtual void SetNumberOfBranches(int numberOfBranches_) = 0;
  virtual void SetNumberOfLeaves(int* numberOfBranches_) = 0;

  friend std::ostream& operator <<(std::ostream& o, Tree& b);
  friend std::istream& operator >>(std::istream& i, Tree& b);
};

std::ostream& operator <<(std::ostream& o, Tree& b);
std::istream& operator >>(std::istream& i, Tree& b);