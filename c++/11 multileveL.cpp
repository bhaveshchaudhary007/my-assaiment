#include<iostream>
using namespace std;

class student{
	
	public:
		
		int rollno,science,maths,english;
		
		void get_marks(int a,int b,int c,int d){
			rollno=a;
			science=b;
			maths=c;
			english=d;
		}
};
class sports:public student{
	public:
		int sp_marks;
		void get_sp_marks(int a){
			
			sp_marks=a;
			
			
		}
};
class result:public sports{
	public:
		int total;
		
		void print_result(){
			
			total=science+maths+english+sp_marks;
			cout<<"\n rollno"<<rollno<<"\n total"<<total;
		}
};


int main(){
	
	result r1;
    
    r1.get_marks(10,50,50,50);
    r1.get_sp_marks(50);
	r1.print_result();
}
