#pragma once
#include <iostream>
#include "MyBirch.h"

class DwarfBirch : public Birch
{
protected:
  int color;
public:
  DwarfBirch(double height_ = 1, 
    int numberOfBranches = 0, int* numberOfLeaves = nullptr);
  DwarfBirch(const Birch& p);
  DwarfBirch(Birch&& p);
  virtual ~DwarfBirch();

  void SetHeight(double height_);
  virtual int GetNumberOfBranches();
  int GetColor();
};

