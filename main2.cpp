#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

int main()
{
	vector<Account*> v;
	
	double interestRate=0.5;
	double balance = 1000.00;
	double fee = 3.00;

	v.push_back(new SavingsAccount(balance,interestRate));
	v.push_back(new SavingsAccount(balance*2,interestRate));
	v.push_back(new CheckingAccount(balance,fee));
	v.push_back(new CheckingAccount(balance*2,fee));	
	//Traverse through vector
	for(vector<Account*>::iterator it=v.begin();it!=v.end();++it)
	{
		double debitAmount, creditAmount;
		cout<<"\nPlease enter amount to debit: ";
		cin>>debitAmount;
		(*it)->debit(debitAmount);
		cout<<"Please enter amount to credit: ";
		cin>>creditAmount;		
		(*it)->credit(creditAmount);
		if( dynamic_cast<SavingsAccount*>((*it)))//Savings
		{
			cout<<"Account Type: Savings"<<endl;
			SavingsAccount* s = dynamic_cast<SavingsAccount*>(*it);
			double interestEarned = s->calculateInterest();
			cout<<"Interest Earned: "<<interestEarned<<endl;
			(*it)->credit(interestEarned);
			
		}
		else
		{
			cout<<"Account Type: Checking"<<endl;
		}
		cout<<"Final Balance: "<<(*it)->getBalance()<<endl;
			
	}
}
