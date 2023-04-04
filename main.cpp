#include <iostream>

#include "rate_calculator.cpp"

using namespace std;
using namespace calculators;

int main() {
    rate_calculator rc;
    const double pv = 1000;
    const double rate = .03;

    cout << "FVc(1|" << pv << "|" << rate << ") = " << rc.compound_fv(pv, rate) << endl;
    cout << "FVc(7|" << pv << "|" << rate << ") = " << rc.compound_fv(pv, rate, 7) << endl;

    return 0;
}
