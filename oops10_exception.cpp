#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int age,income;
 string city;
 char vc;
 cout<<"\nEnter you age : ";
 cin>>age;
 cout<<"\nEnter your income (in rupees) per month : ";
 cin>>income;
 cout<<"\nEnter your city : ";
 cin>>city;
 cout<<"\nDo you have a 4-wheeler vehicle (Y/N) : ";
 cin>>vc;
 try
 {
  if(age>18 && age<55)
   cout<<"\nValid Age";
  else
   throw age;
 }
 catch(int age)
  {
   cout<<"\nException caught! User should have age between 18 and 55\n";
  }
 try
  {
   if(income>50000 && income<100000)
    cout<<"\nValid income";
   else
    throw income;
  }
 catch(int income)
 {
  cout<<"\nException caught! User should have income beyween Rs 50000 and Rs 100000 per month\n";
 }
 try
 {
  if(city=="mumbai" || city=="pune" || city=="bangalore" || city=="chennai" || city=="Mumbai" || city=="Pune" || city=="Bangalore" || city=="Chennai" || city=="PUNE" || city=="MUMBAI" || city=="BANGALORE" ||city=="CHENNAI")
   cout<<"\nValid city";
 else
  throw city;
 }
 catch(string city)
 {
  cout<<"\nException caught! User should stay in Pune/Mumbai/Bangalore/Chennai\n";
 }
 try
 {
  if(vc=='Y' || vc=='y')
   cout<<"\nValid Vehicle";
  else
   throw vc;
 }
 catch(char vc)
 {
  cout<<"\nException caught! User should have 4 wheeler vehicle\n";
 }
 cout<<"\n"
 return 0;
}
