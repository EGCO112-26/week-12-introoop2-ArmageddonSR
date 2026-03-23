#include <iostream>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  student s1,s2;

//  s1.set_name("Amy"); s1.set_age(20);
//  s2.set_name("James");
//  s2.set_age(17);
 //s1.get_age()>s2.get_age() ? s1.print_name():s2.print_name(); 
 //cout <<" is older \n";

  student a[N];
  student b[N];
  // Set age and set name for the first two ppl
  int i,age;
  string n;

   // 1. Ask for N names and N age using cin

  // for(int n = 0 ; n < N ; n++)
  // {
  //   string InName = cin>>age;
  //   int InAge = cin>>age;
    
  //   b[n].set_age(InName);
  //   b[n].set_name(InAge);
  // }


 for(int i =1 , n = 0 ; i<argc ; i+=2 , n++)
    {
        a[n].set_name(argv[i]);
        a[n].set_age(atoi(argv[i+1]));
    }

  //2. Print name and age of all N ppl

  for(int n = 0 ; n < N ; n++)
  {
      //a[n].print_name();
      //cout<<" "<<a[n].get_age()<<"\n";
  }
  
  
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
  
  // Print all info for the yougest person
  
  int youngest = 0;
  for(int n = 0; n < N ; n++)
  {
    if(a[n].get_age()<a[youngest].get_age())
    {
      youngest = n;
      //cout<<a[n].get_age()<<"\n";
    }
  }

  cout<<"Youngest student"<<"\n";
  for(int n = 0; n < N ; n++)
  {
    if(a[n].get_age()==a[youngest].get_age())
    {
      cout<<"Name: ";
      a[n].print_name();
      cout<<"\n"<<"Age: "<<a[n].get_age();
      cout<<"\n";
    }
  }

  
  
  
  //4. Change input from cin to argv


  
 return 0;

    
  }
  
  


