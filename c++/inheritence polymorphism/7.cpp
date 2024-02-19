/*
7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
*/

#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"\n class A";
		}
		A(int x, int y){
			cout<<"\n X + Y : "<<x+y<<"\t constructor in A ";
		}
};
class B:public A{
	public:
		B(){
			cout<<"\n class B";
		}
		
		B(int z,int x, int y):A(x,y){
			cout<<"\n Z = "<<z<<"\t\t constructor in B";
		}	
};
class C:public B{
	public:
		C(){
			cout<<"\n class C";
		}
	
		C(int x, int y, int z):B(x,y,z){
			cout<<"\n constructor in C";
		}
};

int main(){

	C obj1;


	B obj2(10,20,30);
	cout<<"\n";
	C obj3(1,2,3);

}
