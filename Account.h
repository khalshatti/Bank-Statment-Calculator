
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(double balance);//constructor
	//Making credit and debit virtual functions to allow polymorphism
	virtual double credit(double amount);
	virtual bool debit(double withdraw); 
	double getBalance();		//return balance

protected:
	double FinalBalance;
};

#endif
