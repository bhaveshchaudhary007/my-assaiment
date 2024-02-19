#include<iostream>
using namespace std;
class account{
public:
		//properties-data member
		int acc_no,balance,amount;
		
		char name[20],type_acc;
		
			//methods-member functions
			void get_value(){
			
				cout<<"\n enter the acc_no:";
				cin>>acc_no;
				cout<<"\n enter the balance:";
				cin>>balance;
			    cout<<"\n enter the amount:";
				cin>>amount;
			    cout<<"\n enter the type of acc";
			    cin>>type_acc;
			    cout<<"\n enter the name";
			    cin>>name;
				
			}
			void deposit(){
				balance=balance+amount;
				
			}
			void witrowel(){
				
				if(amount>balance){
					cout<<"\n no balance";
					
				}else{
					balance=balance-amount;
				
				}
			}
			
			
			void print_value(){
				cout<<"\name:"<<name<<"\n acc no:"<<acc_no<<"\nbalance "<<balance<<"\n type_acc"<<type_acc;
			}
			
};

   int main(){
   	
   	 account s1;
   	 
   	 
   	 s1.get_value();
   	 s1.deposit();
   	 s1.print_value();
   	 s1.witrowel();
   	 s1.print_value();
		
		}




