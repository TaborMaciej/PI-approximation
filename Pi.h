#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class Pi
{
public:
	static double MonteCarloMethod();
	static double TaylorSeriesMethod();
private:
	static constexpr int precision = 3000000;
};

