#include <iostream>
#include <string>
#include <cmath>

long compoundInterest(long startDeposit, double annualRate, int annualAmount, int interestPeriod) {
	double annualResult = ((annualRate / annualAmount) + 1);
	double degree = annualAmount * interestPeriod;
	return round(pow(annualResult, degree) * startDeposit);
}
