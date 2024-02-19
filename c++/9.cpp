#include<iostream>

using namespace std;

class student{
	public:
		
		int roll_no;
		float per;
		
		student(int x,float y){
			roll_no=x;
			per=y;
			
		}
		
void print(){
	cout<<" \n rollno"<<roll_no;
	cout<<"\n percentage"<<per;
	
}

 
};

int main(){
	
	int a;
	float b;
	
	cout<<" roll no :";
	cin>>a;
	cout<<"\n percentage :";
	cin>>b;
	
	student obj(a,b);
	obj.print();
}
	
	

