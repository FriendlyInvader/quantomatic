#include <iostream>

#include "rate_calculator.cpp"

using namespace std;
using namespace calculators;

int main() {
    rate_calculator rc;
    const double pv = 1000;
    const double rate = .03;
    const double fv = 5000;

    cout << "FVc(1|" << pv << "|" << rate << ") = " << rc.compound_fv(pv, rate) << endl;
    cout << "FVc(7|" << pv << "|" << rate << ") = " << rc.compound_fv(pv, rate, 7) << endl;

    cout << "PVc(1|" << fv << "|" << rate << ") = " << rc.compound_pv(fv, rate) << endl;
    cout << "PVc(7|" << fv << "|" << rate << ") = " << rc.compound_pv(fv, rate, 7) << endl;

    return 0;
}
