/*
3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
*/

#include<iostream>
using namespace std;
class car{
	private:
		char company[20],model[20];
		int year;
	public:
		void get_data(){
			cout<<"\n Enter company name : ";
			cin>>company;
			cout<<" Enter model name : ";
			cin>>model;
			cout<<" Enter year : ";
			cin>>year;
		}
		void print_data(){
			cout<<"\n company :"<<company;
			cout<<"\n model : "<<model;
			cout<<"\n year : "<<year;
		}
};
int main(){
	car c1;
	c1.get_data();
	c1.print_data();	
}
