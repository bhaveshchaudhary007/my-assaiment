#include<iostream>
using namespace std;
class cal{

public:
	
	int a,b;
	
	cal(){
		cout<<"\n enter the value of a :";
		cin>>a;
		
		cout<<"\n enter the value of b :";
		cin>>b;
		
	}
	int sum(){
		return a+b;
		
	}
};
int main(){
	
	cal c1;
	cout<<"\n sum of two value is :"<<c1.sum();
}
