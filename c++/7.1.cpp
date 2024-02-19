#include<iostream>

using namespace std;

class student{
	public:
		
	int r_n;
	float per;
	char name[20];
	
	student(){
		cout<<"\n enter your name :";
		cin>>name;
		
		cout<<"\n enter your rollno :";
		cin>>r_n;
		
		cout<<"\n enter your percentage :";
		cin>>per;
		
	}
	
	void print(){
		cout<<"\n name"<<name<<"\n rollno"<<r_n<<"\n percentage"<<per;
	}
	
};

int main(){
	
	student s1;
	
	s1.print();

}

	
	
