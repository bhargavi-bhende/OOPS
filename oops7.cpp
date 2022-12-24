#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
double x,y;

public:
complex()
{
}
complex(int t) // int to complex
{
cout<<"int to complex\n";
x=t/2;
y=t/2;
}
complex(double y)// double to complex
{
cout<<"double to complex\n";
x=y+1.5;
y=y-1.5;
}
operator double()//complex to double
{
cout<<"complex to double\n";
double sum=0;
sum=x*y;
return sum;}
void get();
void display();
complex operator+(complex d);
complex operator-(complex d);
complex operator*(complex d);
};
void complex::get()
{
cout<<"\nenter real and imaginary part of a complex no";
cin>>x>>y;
}
complex complex::operator+(complex d)
{
complex temp;
temp.x=x+d.x;
temp.y=y+d.y;
return temp;
}
complex complex::operator-(complex d)
{
complex temp;
temp.x=x-d.x;
temp.y=y-d.y;
return temp;
}
complex complex::operator*(complex d)
{
complex temp;
temp.x=x*d.x;
temp.y=y*d.y;
return temp;
}
void complex::display()
{
cout<<"\nthe complex no is"<<x<<"+"<<y<<"j\n";
}
int main()
{
complex a,b,c;
double d1,d2; int s1;
a.get();
b.get();
c=a+b;
c.display();
c=a-b;
c.display();
c=a*b;
c.display();
cout<<"\n enter an integer";
cin>>s1;
complex q=s1;
q.display();
cout<<"\n enter a double value";
cin>>d1;
complex w=d1;
w.display();
d2=a;
cout<<d2;
return 0;
}
