#include<iostream>

using namespace std;

class student{
	
	public:
		
		int rollno;
		float per;
		char name[20];
		
		studant(){
			cout<<"\n enter the roll_no :";
			cin>>rollno;
			
			cout<<"\n enter the percentage:";
			cin>>per;
			
			cout<<"\n enter the name:";
			cin>>name;
			
		}
		
		int print_data(){
			
			cout<<"\n name"<<name<<"\n rollno"<<rollno<<"\n per"<<per;
			
		}
};
int main(){
	
	student s1;
	
	
	
	
	

	
	
	
}
