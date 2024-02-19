/*
8. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. 
Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each 
student implement using of aggregation
*/


#include<iostream>
#include<string>
using namespace std;
class address{
	public:
		string street,city,state,zipcode,addr;

		void get_address(){
			cin.sync();
			cout<<" Street : ";getline(cin,street);
			cout<<" City : ";getline(cin,city);
			cout<<" State : ";getline(cin,state);
			cout<<" Zipcode : ";getline(cin,zipcode);

			addr = street+", "+city+", "+state+", "+zipcode+".";
		}
};

class student{
	private:
		string name;
		int cls,rollno,marks;
		char grade;
		address Address;
	public:
		student(string name, int a, int b, int c, address& addr){
			this->name=name;
			this->cls=a;
			this->rollno=b;
			this->marks=c;
			this->Address=addr;
		}
		void calculate_grade(){
			if(marks>=90){
				grade = 'A';
			}else if(marks>=80){
				grade = 'B';
			}else if(marks>=70){
				grade = 'C';
			}else if(marks>=60){
				grade = 'D';
			}else{
				grade = 'F';
			}
		}	
		void display_data(){
			cout<<"\n Name : "<<name;
			cout<<"\n Class : "<<cls;
			cout<<"\n Roll no : "<<rollno;
			cout<<"\n Marks : "<<marks;
			cout<<"\n Address : "<<Address.addr;
		}
};

int main(){
	int roll_no,marks,cls;
	string name;
	address addr1,addr2;

	cout<<"\n data of student 1 ";
	cout<<"\n Enter name :";
	cin>>name;
	cout<<" Enter class :";
	cin>>cls;
	cout<<" Enter roll no :";
	cin>>roll_no;
	cout<<" Enter marks :";
	cin>>marks;
	addr1.get_address();
	student student1(name,cls,roll_no,marks,addr1);

	cout<<"\n data of student 2 ";
	cout<<"\n Enter name :";
	cin>>name;
	cout<<" Enter class :";
	cin>>cls;
	cout<<" Enter roll no :";
	cin>>roll_no;
	cout<<" Enter marks :";
	cin>>marks;
	
	addr2.get_address();
	
	student student2(name,cls,roll_no,marks,addr2);

	student1.display_data();
	cout<<"\n";
	student2.display_data();	
}
