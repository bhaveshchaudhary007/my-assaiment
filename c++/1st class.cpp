#include<iostream>
using namespace std;
class student{
	private:
		//properties-data member
		int rollno;
		float per;
		char email[20];
		public:
			//methods-member functions
			void get_data(){
				cout<<"\n enter rollno:";
				cin>>rollno;
				cout<<"\n enter percentage:";
				cin>>per;
				cout<<"\n emter email:";
				cin>>email;
				
			}
			void print_data(){
				cout<<"\n rollno:"<<rollno<<"\n percentage:"<<per<<"\n email";
			}
			
};

int main(){
	
	student s1,s2,s3,s4;
	cout<<"\n hello.....";
	
	s1.get_data();
	s1.print_data();
	
	s2.get_data();
	s2.print_data();
	
	s3.get_data();
	s3.print_data();
	
	s4.get_data();
	s4.print_data();
	
	
}
