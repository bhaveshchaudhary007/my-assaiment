/*

home work.

*/





#include<iostream>

using namespace std;


class shap{
	

	float pi=3.14,r,l,s,w,area;
	
	
 public:
	

		
		void get_data_circle(){
			cout<<"\n enter a redius of circle:";
			cin>>r;
			
			
		}
		void circle(){
			cout<<"\n Area of circle is :"<<area;
			
	}
	void get_data_rectangle(){
		cout<<"\n enter langth:";
		cin>>l;
		
		cout<<"\n enter width:";
		cin>>w;
	}
	void rectangle(){
		area=l*w;
		cout<<"\n Area of rectangle :"<<area;
	}
	void get_data_squre(){
		cout<<"\n enter side of squre:";
		cin>>s;
	}
	void squre(){
		area=s*s;
		cout<<"\n area of squre:"<<area;
	}
	
		

};
int main(){
	
	
	shap s1,s2,s3;
	
	
    s1.get_data_circle();
    s1.circle();
    
    s2.get_data_rectangle();
    s2.rectangle();
    
    s3.get_data_squre();
    s3.squre();
}


