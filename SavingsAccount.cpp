#include "SavingsAccount.h"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount(double balance, double interestRate):Account(balance)//calling account constructor to initialize finalbalance
{
	interest = interestRate;
}

double SavingsAccount::calculateInterest()//FinalBalance is inherited
{
	double InterestEarned;
	InterestEarned = FinalBalance * interest; 	//calculation for the interest earned
	return (InterestEarned);
}
