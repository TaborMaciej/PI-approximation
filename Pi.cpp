#include "Pi.h"
double Pi::MonteCarloMethod()
{
	srand(time(NULL));
	double a, b;
	int amountIn = 0, i = 1;

	for (; i <= Pi::precision; i++)
	{
		a = (double)rand() / RAND_MAX;
		b = (double)rand() / RAND_MAX;
		if (a*a + b*b <= 1)
			amountIn++;
	}
	return 4 * (double)amountIn / (i-1);
}


double Pi::TaylorSeriesMethod()
{
	double pi = 0;
	for (int i = 0; i < Pi::precision; i++)
		pi += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);

	return 4 * pi;
}