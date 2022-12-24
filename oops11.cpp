#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class db
{
 int roll,year;
 float sem1,sem2;
 char name[15],depart[15],div,dob[10];
 long long int phone;

 public:
  static int obj;
  static void count()
   {
    cout<<"\nNo. of objects created : "<<obj;
   }
 inline float fin(float sem1,float sem2)
  {
   float avg;
   cout<<"\nInline function!";
   avg=(sem1+sem2)/2;
   return avg;
  }
 db()
 {
  roll=53;
  strcpy(name,"Bhargavi");
  strcpy(depart,"CSBS");
  year=2;
  div='C';
  strcpy(dob,"21/01/2004");
  phone=9921250635;
  sem1=9.87;
  sem2=9.98;
  obj++;
 }
 db(db *ob)
  {
   roll=ob->roll;
   strcpy(name,ob->name);
   strcpy(depart,ob->depart);
   year=ob->year;
   div=ob->div;
   strcpy(dob,ob->dob);
   phone=ob->phone;
   sem1=ob->sem1;
   sem2=ob->sem2;
   obj++;
  }

  void getdata()
  {
   cout<<endl<<"----------------------------------------------------------------------";
   cout<<endl<<"Enter Details : ";
   cout<<endl<<"Roll No. : ";
   cin>>roll;
   cout<<endl<<"Name : ";
   cin>>name;
   cout<<endl<<"Department : ";
   cin>>depart;
   cout<<endl<<"Year : ";
   cin>>year;
   cout<<endl<<"Division : ";
   cin>>div;
   cout<<endl<<"Phone no. : ";
   cin>>phone;
   cout<<endl<<"Semester 1 cgpa : ";
   cin>>sem1;
   cout<<endl<<"Semester 2 cgpa : ";
   cin>>sem2;
   cout<<endl<<"----------------------------------------------------------------------";
  }
  friend void display(db d);

  ~db()
  {
   cout<<endl<<endl<<this->name<<"(Object) is destroyed!";
  }
};

void display(db d)
  {
   float avg;
   cout<<endl<<"----------------------------------------------------------------------";
   cout<<endl<<"Roll No. : "<<d.roll;
   cout<<endl<<"Name : "<<d.name;
   cout<<endl<<"Department : "<<d.depart;
   cout<<endl<<"Year : "<<d.year;
   cout<<endl<<"Division : "<<d.div;
   cout<<endl<<"Phone no. : "<<d.phone;
   avg = d.fin(d.sem1,d.sem2);
   cout<<endl<<"Total CGPA : "<<avg;
   cout<<endl<<"---------------------------------------------------------------------- ";
  }
int db::obj;

int main()
{
 int i,n;
 db d1,*ptr[5];
 cout<<"Default values (Default Constructor) : ";
 display(d1);

 d1.getdata();
 display(d1);

 db d2(&d1);
 cout<<endl<<"Copy Constructor";
 display(d2);

 cout<<endl<<"Enter no. of objects to create : ";
 cin>>n;
 for(i=0;i<n;i++)
 {
  ptr[i]=new db();
  ptr[i]->getdata();
 }
 cout<<endl<<"---------------------------------------------------------------------- ";
 cout<<endl<<"\t\t\t\t\tDetails";
 cout<<endl<<"---------------------------------------------------------------------- ";
 for(i=0;i<n;i++)
 {
  display(*ptr[i]);
 }
 db::count();
 for(i=0;i<n;i++)
 {
  delete ptr[i];
 }
 cout<<endl<<"Objects deleted!";
 return 0;
}
