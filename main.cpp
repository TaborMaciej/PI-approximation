#include "Pi.h"
#include <iomanip>

int main()
{
    cout << setprecision(10) << "Estimated value of Pi using Monte Carlo method is = " << Pi::MonteCarloMethod() << endl
        << "Estimated value of Pi using Taylor Series is = " << Pi::TaylorSeriesMethod() << endl;
    return 0;
}