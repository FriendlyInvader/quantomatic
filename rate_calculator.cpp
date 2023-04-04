#include <math.h>
#include "rate_calculator.h"

double calculators::rate_calculator::compound_fv(const double& pv, const double& rate, const int& number_of_periods = int{1}) {
    return pv * pow(1 + rate, number_of_periods);
}
