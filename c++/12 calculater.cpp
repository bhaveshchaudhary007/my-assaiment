

// hirachical inheritence

#include<iostream>

using namespace std;

class val{
	
	protected:
		
		int a,b;
		
		public:
			
			void get_data(int x,int y){
				a=x;
				b=y;
			}
};

class sum:public val{
	public:
		void print_sum(){
			cout<<"\n a+b :"<<a+b;
			
		}
	};
		
class sub:public val{
	public:
		void print_sub(){
			
			cout<<"\n a-b :" <<a-b;
		}
		
};
class mul:public val{
	
	public:
		void print_mul(){
			
			cout<<"\n a*b :"<<a*b;
			
		}
};

class div:public val{


public:
	
	void print_div(){
		
		cout<<"\n a/b :"<<a/b;
	}
};

int main(){
	
	sum r1;
	
	r1.get_data(50,30);
    r1.print_sum();
    
    sub s1;
    
    s1.get_data(50,30);
    s1.print_sub();
    
    mul b1;
    
    b1.get_data(5,9);
    b1.print_mul();
	
	div c1;
	
	c1.get_data(90,30);
	c1.print_div();

	
	
}

