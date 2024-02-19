/*

2). Write a program of Addition, Subtraction, Division, Multiplication using
	constructor.
*/

#include<iostream>
using namespace std;

class calculation{
	private: 
		int sum,sub,mul;
		double v1,v2;
		float div;

	public:
		calculation(){
			cout<<"\n first calculation using constructor";

		}
		calculation(int a, int b){
			v1=a;
			v2=b;
			sum = v1+v2;
			sub = v1-v2;
			mul = v1*v2;
			div = v1/v2;
		}

		void print_sum(){
			cout<<"\n sum is "<<sum;
		}
		void print_sub(){
			cout<<"\n substraction is "<<sub;
		}
		void print_mul(){
			cout<<"\n Multiplication is "<<mul;
		}
		void print_div(){
			cout<<"\n Division is "<<div;
		}
};

int main(){
	int x,y;
	calculation c2;

	cout<<"\n Enter first value : ";cin>>x;
	cout<<" Enter second value : ";cin>>y;	

	calculation c1(x,y);
	c1.print_sum();
	c1.print_sub();
	c1.print_mul();
	c1.print_div();	
}
