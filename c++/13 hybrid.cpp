#include<iostream>

using namespace std;

class a{
	
	public:
		
		void printa(){
			
			cout<<" \n class a";
		}
};

class b: virtual public a{
	
	public:
	void printb(){
		
		cout<<"\n class b";
	}
};

class c: virtual public a{
	
	public:
	void printc(){
		
		cout<<"\n class c";
	}
};

class d:public a,public b{
	
	public:
	void printb(){
		
		cout<<"\n class d";
	}
};

int main(){
	

	
	
}
