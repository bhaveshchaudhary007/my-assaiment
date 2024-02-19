#include<iostream>
using namespace std;
class account{
public:
		
		int acc_no,balance,amount;
		
		char name[20],type_acc;
		
		
		
		account(int x, int y , int z, char a, char b){
			
			acc_no=x;
			balance=y;
			amount=z;
			name[20]=a;
			type_acc=b;
			
		}
		
			void print_value(){
				cout<<"\name:"<<name<<"\n acc no:"<<acc_no<<"\nbalance "<<balance<<"\n type_acc"<<type_acc;
			}
			
};
int main(){
	
		    int x,y,z;
		    float a,b;
	
		        cout<<"\n enter the acc_no:";
				cin>>x;
				cout<<"\n enter the balance:";
				cin>>y;
			    cout<<"\n enter the amount:";
				cin>>z;
			    cout<<"\n enter the type of acc";
			    cin>>a;
			    cout<<"\n enter the name";
			    cin>>b;
			    
		
			    
			    account obj(a,b,x,y,z);
			    obj.print_value();
			    
			    
			    
				
}
