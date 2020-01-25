#include "Account.h"

#ifndef CHECKING_H
#define CHECKING_H

class CheckingAccount : public Account
{
public:
	CheckingAccount(double balance,double f);
	//redefining debit and credit methods to deduct fee as well.
	virtual bool debit(double withdraw);
	virtual double credit(double amount);
private:
	double fee;		//fee per transaction is a constant double
};

#endif
