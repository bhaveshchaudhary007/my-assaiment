/*

1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)

*/

#include<iostream>
using namespace std;
class cricketer{
	protected:
		int m1,m2,m3;
		char name[30];
	public:
		void get_data(){
			cout<<"\n Enter name = ";
			cin>>name;
			cout<<"\n Enter run of match 1 : ";
			cin>>m1;
			cout<<" Enter run of match 2 : ";
			cin>>m2;
			cout<<" Enter run of match 3 : ";
			cin>>m3;
		}
};
class batsmen:public cricketer{
	public:
		int total,average;
		void total_run(){
			total=m1+m2+m3;
		}
		void average_run(){
			average=(m1+m2+m3)/3;
		}
		void print_data(){
			cout<<"\n total run = "<<total;
			cout<<"\n Average run = "<<average;
		}
		void performance(){
			if(m1>m2){
				if(m1>m3){
					cout<<"\n best performance score is "<<m1;
				}else{
					cout<<"\n best performance score is "<<m3;
				}
			}else{
				if(m2>m3){
					cout<<"\n best performance score is "<<m2;
				}else{
					cout<<"\n best performance score is "<<m3;
				}
			}
		}
};

int main(){
	batsmen b1;
	b1.get_data();
	b1.total_run();
	b1.average_run();
	b1.print_data();
	b1.performance();
}

