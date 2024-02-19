/*

5. Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.

*/

#include <iostream>
using namespace std;

class Rectangle {
  private:
    int length;
  int width;

  public:
    void setDimensions(int l, int w) {
      length = l;
      width = w;
    }

    int getArea() {
      return length * width;
    }

   int getPerimeter() {
      return 2 * (length + width);
    }
};

int main() {
  Rectangle myRectangle;
  int l, w;

  cout << "Enter the length of the rectangle: ";
  cin >> l;

  cout << "Enter the width of the rectangle: ";
  cin >> w;

  myRectangle.setDimensions(l, w);

  cout << "Area of the rectangle: " << myRectangle.getArea() << endl;
  cout << "Perimeter of the rectangle: " << myRectangle.getPerimeter() << endl;

}
