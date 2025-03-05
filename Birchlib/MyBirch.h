#pragma once

#include <MyTree.h>

class Birch : public Tree
{
protected:
  int*& nol;
public:
  Birch();
  Birch(double height_);
  Birch(double height_, int numberOfBranches, const int* numberOfLeaves = nullptr);
  Birch(const Birch& p);
  Birch(Birch&& p);
  virtual ~Birch();

  virtual double GetHeight();
  virtual int GetNumberOfBranches();
  virtual int* GetNumberOfLeaves();

  virtual void SetHeight(double height_);
  virtual void SetNumberOfBranches(int numberOfBranches_);
  virtual void SetNumberOfLeaves(int* numberOfBranches_);
};


