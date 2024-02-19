/*
7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.
*/

#include<iostream>
using namespace std;
class date{
	private:
		int day,month,year,leap;
		int valid_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

	public:		
		void get_data(){
			cout<<"\n Enter day :";cin>>day;
			cout<<" Enter month : ";cin>>month;
			cout<<" Enter year : "; cin>>year;
		}

		void validate(){			
			leap=leap_year();
			if(leap == 1){
				if(month==2){
					if(day <= valid_day[month]+1){
						cout<<"\n "<<day<<"/"<<month<<"/"<<year;
						cout<<"\n Date is valid";
					}else {
						cout<<"\n Date is not valid";
					}
				}
			}else{
				if(day <= valid_day[month]){
					cout<<"\n "<<day<<"/"<<month<<"/"<<year;
					cout<<"\n Date is valid";
				}
				else {
					cout<<"\n Date is not valid";
				}
			}	
		}

		int leap_year(){
			if((year%4==0  && year%100 != 0) || (year%400 == 0)){
				return 1;
			}else{
				return 0;
			}
		}
};

int main(){
	date d1;
	d1.get_data();
	d1.validate();	
}
