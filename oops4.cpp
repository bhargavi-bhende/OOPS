#include <iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class db
{
 int id;
 char name[20];
 char depart[10];
 char dob[10];
 char bg[3];
 char city[10];
 char phone[10];

   public:
   static int stdno;
   static void count()
   {
      cout<<"\nNo. of objects created: "<<stdno;
   }
 void fin()
 {
  cout<<"\nInline Function!";
 }

  db()
   {
     id=1;
     strcpy(name,"Bhargavi");
     strcpy(depart,"HR");
     strcpy(dob,"21/01/2004");
     strcpy(bg,"A");
     strcpy(city,"Pune");
     strcpy(phone,"9921250635");
     ++stdno;
   }
   db(db *ob)
   {
      strcpy(name,ob->name);
      strcpy(dob,ob->dob);
      strcpy(depart,ob->depart);
      strcpy(bg,ob->bg);
      strcpy(city,ob->city);
      strcpy(phone,ob->phone);
      ++stdno;
   }
void getdata()
   {
     cout<<"\nEnter your details : \n";
     cout<<"\nName : ";
     cin>>name;
     cout<<"\nID : ";
     cin>>id;
     cout<<"\nDepartment : ";
     cin>>depart;
     cout<<"\nDate of birth (DD/MM/YYYY) : ";
     cin>>dob;
     cout<<"\nBlood group : ";
     cin>>bg;
     cout<<"\nCity : ";
     cin>>city;
     cout<<"\nPhone no. : ";
     cin>>phone;
   }

   friend void display(db d);

   ~db()
   {
      cout<<"\n\n"<<this->name<<"(Object) is destroyed!\n";
   }
};

void display(db d)
{
cout<<"\n\n---------------------------------------------------------------------------";
cout<<"\nName          : "<<d.name;
cout<<"\nID            : "<<d.id;
cout<<"\nDepartment    : "<<d.depart;
cout<<"\nDate of birth : "<<d.dob;
cout<<"\nBlood group   : "<<d.bg;
cout<<"\nCity          : "<<d.city;
cout<<"\nPhone         : "<<d.phone;
cout<<"\n---------------------------------------------------------------------------\n";
}
int db::stdno;

int main()
{
    int n,i;
    db d1,*ptr[5];
    cout<<"\nDefault values:";
    display(d1);

    d1.getdata();
    display(d1);

    db d2(&d1);
    cout<<"\n\nUse of copy constructor :\n";
    display(d2);


    cout<<"\nHow many objects u want to create?:";
    cin>>n;
    for(i=0;i<n;i++)
    {
     ptr[i]=new db();
     ptr[i]->getdata();
    }
   cout<<"\n-------------------------------------------------------------------------------------------------";
   cout<<"\nDeatils : \n";
   cout<<"\n-------------------------------------------------------------------------------------------------";   //cout<<"\n  Name"<<setw(15)<<"ID"<<setw(8)<<"Department"<<setw(10)<<"dob"<<setw(8)<<"bg"<<setw(5)<<"City"<<setw(10)<<"phone";
   for(i=0;i<n;i++)
     display(*ptr[i]);
   db::count();
   for(i=0;i<n;i++)
   {
     delete(ptr[i]);
   }
   cout<<"\nObjects deleted!" ;
   return 0;
}
