/*

1. Write a program to find the multiplication values and the cubic values usinginlin function.

*/

#include<iostream>

using namespace std;

class A{
	
	public:
		
		void multiplication ( int x){
			
			cout<<"\n multiple value of x:"<<x*x;
			
		}
		
		void cubic( int x){
			
			cout<<"\n cubic value of x:"<<x*x*x;
		}
	
};

int main(){
	
	A m1;
	
	int a,b;
	
	cout<<"\n enter the value and find multification :";
	cin>>a;
	
	m1.multiplication(a);
	
	cout<<"\n enter the value and find cubic :";
	cin>>b;
	
	m1.cubic(b);
	
}
