/*
5. Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/



#include<iostream>
using namespace std;
class student{
	public:
		int roll_no;
		void get_roll_no(){
			cout<<"\n Enter roll no :";cin>>roll_no;
		}
};
class test:public student{
	public:
		int sub1,sub2;
		void get_marks(){
			cout<<"\n Enter marks of subject 1 : ";cin>>sub1;
			cout<<" Enter marks of subject 2 : ";cin>>sub2;
		}
};
class result:public test{
	public:
		int total_marks;
		void marks_sum(){
			total_marks=sub1+sub2;
		}
		void print_data(){
			cout<<"\n Roll number : "<<roll_no;
			cout<<"\n Total obtained marks is :"<<total_marks;
		}
};

int main(){
	result r1;
	r1.get_roll_no();
	r1.get_marks();
	r1.marks_sum();
	r1.print_data();
}
