#include<iostream>
using namespace std;
class calculator{
	private:
		//properties-data member
		
		int a,b,c;
		public:
			//methods-member functions
			void get_data(){
				cout<<"\n enter value of a:";
				cin>>a;
				
			    cout<<"\n enter value of b:";
				cin>>b;
		}
		
			void sum(){cout<<"\n sum of a and b:"<<a+b;
			}
			void sub(){cout<<"\n sub of a and b:"<<a-b;
			}
			void mul(){cout<<"\n mul of a and b:"<<a*b;
			}
			void div(){cout<<"\n div of a and b:"<<a/b;
			}
			
};

     int main(){
     	
     	calculator s1,s2,s3,s4;
     	
     	s1.get_data();
     
     	s1.sum();
     	
     	s2.get_data();
     	
     	s2.sub();
     	
     	s3.get_data();
     	
     	s3.mul();
     	
     	s4.get_data();
     	
     	s4.div();
     	
     	
     	
     	
	 }
