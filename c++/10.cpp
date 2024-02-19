#include<iostream>

using namespace std;

class student{
	protected:
		
		int sci,math,eng;
		char name[30];
		
		public:
			
			void get_marks(){
			
			cout<<"\n name:";
			cin>>name;
			
				cout<<"\n sci:";
			cin>>sci;
			
				cout<<"\n math:";
			cin>>math;
			
				cout<<"\n eng:";
			cin>>eng;
		}
};


 class sports{
 	protected:
 		
 		int sp_marks;
 		
 		public:
 		
 		void sp_marks(){
 			
 			cout<<"\n sp marks";
 			cin>>sp_marks;
 			
		 }
		 
 	
 	
 };
 
 class result :public student,public sports;{
 	
 	public:
 		
 		int total;
 		
 		void cal_total(){
 			total = sci+math+eng+sp_marks;
		 }
		 
		 void print_result(){
		 	
		 	cout<<"\n name"<<name;
		 	cout<<"\n total"<<total;
		 }
 };
 int main(){
 	
 	result r1;
 	
 	r1.
 	
 	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

