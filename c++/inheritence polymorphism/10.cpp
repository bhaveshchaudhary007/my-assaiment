/*
10.Write a program to concatenate the two strings using Operator Overloading
*/

#include<iostream>
#include<string>
using namespace std;
class strings{
	public:
		string A;

		void get_data(){
			cout<<"\n Enter string :";
			getline(cin,A);
		}
		strings operator+(strings ob){
			strings temp;
			temp.A=A+" "+ob.A;
			return(temp);
		}
		void print_data(){
			cout<<"\n "<<A;
		}
};

int main(){
	strings s1,s2,sum;

	s1.get_data();
	s2.get_data();

	sum=s1+s2;
	sum.print_data();
}
