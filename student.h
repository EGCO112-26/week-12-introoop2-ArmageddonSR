#include <iostream>
using namespace std;

class student{
  private:
    string name;
    int age;

  public:
    void set_name(string="Yme");
    void set_age(int);
    int get_age();
    void print_name();
};

void student::set_name( string In_name)
{
    name = In_name;
} 

void student::set_age(int In_age)
{
    age = In_age;
} 

int student::get_age()
{
  return age;
}

void student::print_name()
{
  cout<<name;
}


