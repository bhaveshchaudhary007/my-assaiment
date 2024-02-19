/*

6. Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables. 

*/

#include <iostream>
using namespace std;

class Person {
  private:
    string name;
    int age;
    string country;

  public:
    void setName(string n) {
      name = n;
    }

    void setAge(int a) {
      age = a;
    }

    void setCountry(string c) {
      country = c;
    }

    string getName() {
      return name;
    }

    int getAge() {
      return age;
    }

    string getCountry() {
      return country;
    }
};

int main() {
  Person myPerson;
  string name, country;
  int age;

  cout << "Enter your name: ";
  getline(cin, name);

  cout << "Enter your age: ";
  cin >> age;

  cout << "Enter your country: ";
  cin.ignore();
  getline(cin, country);

  myPerson.setName(name);
  myPerson.setAge(age);
  myPerson.setCountry(country);

  cout << "Name: " << myPerson.getName() << endl;
  cout << "Age: " << myPerson.getAge() << endl;
  cout << "Country: " << myPerson.getCountry() << endl;

}
