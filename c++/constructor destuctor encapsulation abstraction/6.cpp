/*
6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor
*/

#include<iostream>
using namespace std;
class employee{
	private:
		char name[20],emp_id[20],perf;
		int salary;
	public:
		employee(){
			cout<<" Enter Employee name : ";
			cin>>name;
			cout<<" Enter Employee id : ";
			cin>>emp_id;
			cout<<" performance of Employee  \n (A) Extreamly best  \n (B) Best  \n (C) Good  \n (D) Bad  \n (E) Very bad \n";cin>>perf;
			if(perf=='A'){
				salary = 900000;
			}else if(perf=='B'){
				salary = 80000;
			}else if(perf=='C'){
				salary = 70000;
			}else if(perf=='D'){
				salary = 20000;
			}else if(perf=='E'){
				salary = 10000;
			}else{
				cout<<"\n wrong choise of performance\n salary will show zero\n";
			}
		}
		void print_data(){
			cout<<"\n name :"<<name;
			cout<<"\n employee id :"<<emp_id;
			cout<<"\n salary :"<<salary;
		}
};

int main(){
	employee e1;
	e1.print_data();
	cout<<"\n\n";
	employee e2;
	e2.print_data();
}
