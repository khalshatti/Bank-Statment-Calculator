#include "Account.h"
#include "CheckingAccount.h"

//Constructor
CheckingAccount::CheckingAccount(double balance,double f):Account(balance)//calling account constructor to initialize finalbalance
{
	fee=f;
}

			
	
//Redefining debit and credit methods
bool CheckingAccount::debit(double withdraw)
{
	bool deducted = Account::debit(withdraw); //calling parent class method
	if(deducted == 1)//if amount was less than balance that means it is deducted, only then deducted fee
	{
		FinalBalance-=fee;
		return 1;
	}
	else
		return 0; //else dont do anything
}

double CheckingAccount::credit(double amount)
{ 
	Account::credit(amount-fee);//calling parent class method with deducted fee
	return FinalBalance;///add final balance to current balance
}
