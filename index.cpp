#include <iostream>
#include <string>
#include <cmath>

long compoundInterest(long startDeposit, double annualRate, int annualAmount, int interestPeriod) {
	return round(startDeposit * pow(1 + annualRate / annualAmount, annualAmount * interestPeriod));
}
