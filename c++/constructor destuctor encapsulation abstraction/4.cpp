/*
4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.
*/

#include<iostream>
using namespace std;
class Bank_account{
	private:
		int ac_number,amount;
		float balance;
	public:
		void get_data(){
			cout<<"\n Enter account numebr : ";
			cin>>ac_number;
			cout<<" Enter opening balance : ";
			cin>>balance;
		}
		void deposite(){
			cout<<"\n Enter amount to deposit :";
			cin>>amount;
			balance=balance+amount;
			cout<<"\n You deposited Rs. "<<amount<<"\n Available balance is :"<<balance;
		}
		void withdraw(){
			cout<<"\n Enter amount to withdraw :";
			cin>>amount;		
			if(amount<balance){
				balance=balance-amount;
				cout<<"\n You withdraw Rs. "<<amount<<"\n Available balance is :"<<balance;
			}else{
				cout<<"\n unsufficient balance";
			}
		}
};

int main(){
	Bank_account b1;
	b1.get_data();
	b1.deposite();
	b1.withdraw();
}

