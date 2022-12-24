#include<iostream>
using namespace std;

int fact(int);

int main()
{
 int num,ans;
 cout<<"Enter a number : ";
 cin>>num;
 ans=fact(num);
 cout<<"\nFactorial : "<<ans<<endl;
 return 0;
}

int fact(int num)
{
 if(num>1)
  return num * fact(num-1);
 else
  return 1;
}
