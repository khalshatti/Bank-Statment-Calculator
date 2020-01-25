#include <iostream>
#include "account.h"

using namespace std;

Account::Account(double balance)
{
	if (balance >= 0.0)
	{
		FinalBalance = balance;
	}
	else
	{
		balance = 0.0;
		FinalBalance = balance;
		cout<<"the Initial balance is invalid"<<endl;
	}
}

bool Account::debit(double withdraw)
{
	if (withdraw > FinalBalance)
	{
		cout<<"Debit amount exceeded account balance"<<endl;
		return 0;	
	}
	else
		FinalBalance-= withdraw;
		return 1;
}

double Account::credit(double amount)
{ 
	FinalBalance += amount;
	return FinalBalance;///cadd final balance to current balance
}

double Account::getBalance()
{
	return FinalBalance;
}
