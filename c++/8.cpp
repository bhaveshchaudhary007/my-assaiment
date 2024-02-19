#include<iostream>
using namespace std;
class value{
	
	public:
		int x;
	
	value(int a){
		x=a;
		
	}
	
	int squre(){
		return x*x;
	}
	
	int queb(){
		return x*x*x;
	}
};
int main(){
	
	value obj(10);
	
	cout<<"\n squre"<<obj.squre();
	cout<<"\n queb"<<obj.queb();
	
}
