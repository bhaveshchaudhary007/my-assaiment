/*
8. Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters 
and Function Overloading
*/

#include<iostream>
using namespace std;
class A{
	public:
		void MO(int x, int y){
			cout<<"\n a + b = "<<x+y;
		}
		void MO(double x, int y){
			cout<<"\n a - b = "<<x-y;
		}
		void MO(int x, double y){
			cout<<"\n a * b = "<<x*y;
		}
		void MO(double x, double y){
			cout<<"\n a / b = "<<x/y;
		}
};

int main(){
	A obj;

	obj.MO(10,10);
	obj.MO(10.10,5);
	obj.MO(10,10.10);
	obj.MO(20.20,10.10);
}

