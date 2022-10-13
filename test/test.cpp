#include "test.h"
#include "../index.h"
#include "termcolor.hpp"

#include <iostream>
#include <string>

using namespace std;

void test() {
	struct Option {
			long toBe;
			long startDeposit;
			double annualRate;
			int annualAmount;
			int interestPeriod;
	};

	Option options[] = {
			{
					1105,
					1000,
					0.05,
					12,
					2
			},
			{
					134785,
					100000,
					0.03,
					3,
					10
			},
			{
					212357,
					200000,
					0.02,
					12,
					3
			},
			{
					8812,
					5000,
					0.12,
					1,
					5
			},
			{
					6581326,
					2000000,
					0.06,
					4,
					20
			}
	};

	int optionsLength = sizeof(options) / sizeof(options[0]);

	for (int i = 0; i < optionsLength; i++) {
		Option option = options[i];

		long result = compoundInterest(option.startDeposit, option.annualRate, option.annualAmount, option.interestPeriod);

		cout << endl;

		if (result == options[i].toBe) {
			cout << termcolor::green << "TEST " << "\"" << options[i].startDeposit << " " << options[i].annualRate << " " << options[i].annualAmount << " " << options[i].interestPeriod <<  "\"" << " PASSED! RESULT: " << result;
		} else {
			cout << termcolor::red << "TEST " << "\"" << options[i].startDeposit << " " << options[i].annualRate << " " << options[i].annualAmount << " " << options[i].interestPeriod << "\"" << " FAILED! EXPECTED \"" << options[i].toBe << "\" INSTEAD OF " << "\"" << result << "\"!";
		}

		cout << endl;
	}
}