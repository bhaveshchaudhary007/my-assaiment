/*
9. Write a Program of Two 1D Matrix Addition using Operator Overloading
*/

#include<iostream>
using namespace std;
class A{
	public:
		int i;
		int m[5];

		void get_mat(){
			for(i=0;i<5;i++){
				cout<<"m["<<i<<"] = ";cin>>m[i];
			}cout<<"\n";
		}
		A operator+(A ob){
			A temp;
			for(i=0;i<5;i++){
				temp.m[i]=m[i]+ob.m[i];
			}
			return(temp);
		}
		void print_data(){
			for(i=0;i<5;i++){
				cout<<" "<<m[i];
			}
		}
};

int main(){
	A m1,m2,sum;

	m1.get_mat();	
	m2.get_mat();

	sum=m1+m2;
	sum.print_data();

}

