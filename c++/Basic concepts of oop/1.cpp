#include<iostream>
using namespace std;
class calculater{
public:
		
	int a,b;
		void get_nomber(){
		
		cout<<"\n enter the nomber:";
		cin>>a;
		
		cout<<"\n enter the nomber:";
		cin>>b;
			
	}
	void add(){
		a=a+b;
		cout<<"\n addition : "<<a+b;
		
		
	}
	void sub(){
		a=a-b;
		cout<<"\n subtraction :"<<a-b;
	}
	void mul(){
		a=a*b;
		cout<<"\n multiplication :"<<a*b;
	}
	void div(){
		a=a/b;
		cout<<"\n division :"<<a/b;
	}
		
};
int main(){
	
	calculater s1;
	
	s1.a;
	s1.b;
	s1.get_nomber();
	s1.add();
	s1.sub();
	s1.mul();
	s1.div();
	
}

