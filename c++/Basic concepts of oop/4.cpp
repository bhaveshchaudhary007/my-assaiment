/*

4. Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference. 

*/

#include <iostream>
using namespace std;

class Circle {
  private:
    int radius;

  public:
    void setRadius(int r) {
      radius = r;
    }

 int getArea() {
      return 3.14159 * radius * radius;
    }

 int getCircumference() {
      return 2 * 3.14159 * radius;
    }
};

int main() {
  Circle myCircle;
int r;

  cout << "Enter the radius of the circle: ";
  cin >> r;

  myCircle.setRadius(r);

  cout << "Area of the circle: " << myCircle.getArea() << endl;
  cout << "Circumference of the circle: " << myCircle.getCircumference() << endl;

 
}
