#include<iostream>
#include<string.h>
#include<conio.h>
#include<iomanip>
using namespace std;

class personal
{
 protected :
  char name[15],gender[15],dob[15];
  int age;
 public :
  void get_personal();
};

class pro
{
 protected:
  int id;
  string depart,desig;
  char join[15];
 public :
  void get_pro();
};

class aca
{
 protected :
  char branch[15];
  int y;
  float cgpa;
 public :
  void get_aca();
};

class biodata: public personal,public pro,public aca
{
 public :
  void display();
};

void personal::get_personal()
{
 cout<<endl<<"Name : ";
 cin>>name;
 cout<<endl<<"Age : ";
 cin>>age;
 cout<<endl<<"DOB(dd/mm/yyyy) : ";
 cin>>dob;
 cout<<endl<<"Gender : ";
 cin>>gender;
}

void pro::get_pro()
{
 cout<<endl<<"Employee ID : ";
 cin>>id;
 cout<<endl<<"Date of joining (dd/mm/yyyy): ";
 cin>>join;
 cin.get();
 cout<<endl<<"Department : ";
 getline(cin,depart);
 cout<<endl<<"Designation : ";
 getline(cin,desig);
}

void aca::get_aca()
{
 cout<<endl<<"Branch : ";
 cin>>branch;
 cout<<endl<<"Year of passing : ";
 cin>>y;
 cout<<endl<<"CGPA : ";
 cin>>cgpa;
}

void biodata::display()
{
 cout<<endl<<"Personal details : ";
 cout<<endl<<"Name : "<<name;
 cout<<endl<<"Age : "<<age;
 cout<<endl<<"DOB(dd/mm/yyyy) : "<<dob;
 cout<<endl<<"Gender : "<<gender<<endl;
 cout<<endl<<"Professional details : ";
 cout<<endl<<"Employee ID : "<<id;
 cout<<endl<<"Date of joining (dd/mm/yyyy): "<<join;
 cout<<endl<<"Department : "<<depart;
 cout<<endl<<"Designation : "<<desig<<endl;
 cout<<endl<<"Academic Details : ";
 cout<<endl<<"Branch : "<<branch;
 cout<<endl<<"Year of passing : "<<y;
 cout<<endl<<"CGPA : "<<cgpa<<endl;
}

int main()
{
 biodata b;
 b.get_personal();
 b.get_pro();
 b.get_aca();
 b.display();
 return 0;
}
