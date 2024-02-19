/*
3. Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher 
having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)
*/


#include<iostream>
using namespace std;

class student{
	public:
		float percentage;
		void get_percentage(){
			cout<<" Enter percentage : ";
			cin>>percentage;
		}
		void print_percentage(){
			cout<<"\n Percentage = "<<percentage;
		}
};
class teacher{
	public:
		float salary;
		void get_salary(){
			cout<<" Enter salary : ";
			cin>>salary;
		}
		void print_salary(){
			cout<<"\n Salary = "<<salary;
		}
};
class person:public student, public teacher{
	protected:
		char name[20];
		int age;
	public:
		void get_person_data(){
			cout<<"\n Enter name : ";
			cin>>name;
			cout<<" Enter age : "; 
			cin>>age;
		}
		void print_person_data(){
			cout<<"\n Name : "<<name;
			cout<<"\n Age : "<<age;
		}
};

int main(){
	int a;
	person p1;
	cout<<"\n Select option \n 1). student \n 2). Teacher \n\t";cin>>a;
	p1.get_person_data();
	(a==1)?(p1.get_percentage()):(p1.get_salary());
	p1.print_person_data();
	(a==1)?(p1.print_percentage()):(p1.print_salary());
}
