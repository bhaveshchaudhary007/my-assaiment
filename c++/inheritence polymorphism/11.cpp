/*
11.Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
Rectangle: Area * breadth, Triangle: ½ *Area* breadth, Circle:Pi * Area *Area
*/
//circle 		A =	pi * r * r
//rectangle 	A =	length × width
//triangle 		A = (1/2) × base × height

#include<iostream>
using namespace std;
class A{
	public:
		void area(double x,int y){
			cout<<" Area of circle : "<<x*y*y;
		}
		void area(int x, int y){
			cout<<" Area of rectangle : "<<x*y;
		}
		void area(double x, int y, int z){
			cout<<" Area of triangle : "<<x*y*z;
		}
};

int main(){
	int radious,length,width,base,height;
	A x1;
	cout<<"\n Enter radious to find area of circle :";cin>>radious;
	x1.area(3.14,radious);

	cout<<"\n\n Enter length and width to find area of rectangle :";cin>>length>>width;
	x1.area(length,width);

	cout<<"\n\n Enter base and height to find area of triangle :";cin>>base>>height;
	x1.area(0.5,base,height);
}

