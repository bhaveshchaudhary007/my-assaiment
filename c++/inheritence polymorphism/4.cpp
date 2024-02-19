/*
4. Write a C++ Program display Student Mark sheet using Multiple inheritance
*/


#include<iostream>
#include<string.h>
using namespace std;
class student{
	protected:
		char name[20];
		string school_name;
		int standard,roll_no;

	public:
		void get_student_data(){
			cout<<"\n Enter name of Student : ";cin>>name;
			cout<<" Eter roll no :";cin>>roll_no;
			cin.sync();
			cout<<" Enter school name : "; 
			getline(cin, school_name);	
			cout<<" Enter standard : ";
			cin>>standard;
		}
};
class marks{
	protected:
		int maths,science,english;
	public:
		void get_marks(){
			cout<<"\n Enter marks obtained in maths : ";
			cin>>maths;
			cout<<" Enter marks obtained in science : ";
			cin>>science;
			cout<<" Enter marks obtained in english : ";
			cin>>english;
		}
};
class print_mark_sheet:public student,public marks{
	public:
		void print_marksheet( ){
			cout<<"\n Name : "<<name;
			cout<<"\n Roll no :"<<roll_no;
			cout<<"\n School name : "<<school_name;
			cout<<"\n Standard : "<<standard;
			cout<<"\n\n maths : "<<maths<<"\n science : "<<science<<"\n english : "<<english;
			cout<<"\n\n total marks : "<<maths+science+english;
			cout<<"\n percentage : "<<(maths+science+english)/3<<"%";
		}
};

int main(){
	print_mark_sheet m1;
	m1.get_student_data();
	m1.get_marks();
	m1.print_marksheet();
}
