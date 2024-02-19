#include<iostream>
using namespace std;
class A{
	
	public:
		
		int a;
	
	A(){
		
		cout<<"\n hello constroctor ";
		
		
	}
	
	void print_a(){
		
		cout<<"\n a"<<a;
		
	}	
};
int main(){
	
	A obj,obj2;
		
		obj.a =10;
		obj.print_a();
		
}
