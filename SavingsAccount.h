#include "Account.h"

#ifndef SAVINGS_H
#define SAVINGS_H

class SavingsAccount : public Account
{
public:	
	SavingsAccount(double balance, double interestRate); //Constructor
	double calculateInterest();
private:
	double interest;		//the interest rate as a double	
};

#endif
