#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Abstract
{
public:
	virtual Abstract* add(Abstract* a) = 0;
	virtual void PrintName();
};

