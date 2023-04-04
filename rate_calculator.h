namespace calculators
{

class rate_calculator
{
public:
    inline double compound_fv(const double& pv, const double& rate, const int& number_of_periods);
    inline double compound_pv(const double& fv, const double& rate, const int& number_of_periods);
};

} // namespace calculators


