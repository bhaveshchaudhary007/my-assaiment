#include<iostream>
using namespace std;
class fact{
	public:
		
	int a,i,f=1;
	public:
		
	void get_data(){
	cout<<"\n Enter your number ";
	cin>>a;
	}
	void factorail(){
		for(i=a;i>=1;i--){
			f=f*i;
		}
		cout<<"\n factorail is ="<<f;
	}	
};
int main(){
	fact f1;
	f1.get_data();
	f1.factorail();
	
	
}

