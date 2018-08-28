#include <iostream>
#include <math.h>
using namespace std;
 
class bank{
 
int balance,  rate;
 
public:
 
	bank(int balance_, int rate_){
 
		balance = balance_;
		rate = rate_;
	}
 
	void deposit(){
 
		int amount;
		cout<<"Enter amount to be deposited: ";
		cin>>amount;
		balance+=amount;
		cout<<"New balance is: "<<balance;
		menu();
 
	}
 
	void withdraw(){
 
		int amount;
		cout<<"Enter amount to be withdrawn: ";
		cin>>amount;
		balance-=amount;
		menu();
 
	}
 
	void compound(){
 
		int CI, yr;
		cout<<"Enter number of years: ";
		cin>>yr;
		CI=balance*pow((1+rate/100),yr) - balance;
		cout<<CI;
		menu();
 
	}
 
	void dispBal(){
 
		cout<<"Balance is: "<<balance;
		menu();
 
	}
 
void menu(){
 
	int choice;
 
	cout<<endl<<endl;
	cout<<"Please enter your choice"<<endl<<endl;
	cout<<"1. Deposit"<<endl;
	cout<<"2. Withdraw"<<endl;
	cout<<"3. Calculate Compound Interest"<<endl;
	cout<<"4. Get Balance"<<endl<<endl;
 
	cin>>choice;
 
	switch(choice){
 
		case 1: deposit();
		break;
 
		case 2: withdraw();
		break;
 
		case 3: compound();
		break;
 
		case 4: dispBal();
		break;
 
		default:cout<<"Wrong input";
 
	}
 
}
 
 
};
 
 
int main(){
 
	int bal, rate;
	cout<<"Enter initial balance: ";
	cin>>bal;
	cout<<"Enter rate of interest: ";
	cin>>rate;
	bank b(bal, rate);
	b.menu();
 
	return 0;
 
}