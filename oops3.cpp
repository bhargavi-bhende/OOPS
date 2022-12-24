#include<iostream>
using namespace std;


int main()
{
 char op;
 float n1,n2,ans;
 cout<<"\nEnter operator (+ , - , * , /) : ";
 cin>>op;
 cout<<"\n Enter operands : ";
 cin>>n1>>n2;
 switch(op)
 {
  case '+' : ans=n1+n2;
             cout<<"\nAnswer : "<<ans;
             cout<<"\n";
             break;

 case '-' : ans=n1-n2;
            cout<<"\nAnswer : "<<ans;
            cout<<"\n";
            break;

 case '*' : ans=n1*n2;
            cout<<"\nAnswer : "<<ans;
            cout<<"\n";
            break;

 case '/' : ans=n1/n2;
            cout<<"\nAnswer : "<<ans;
            cout<<"\n";
            break;

 default : cout<<"\nWrong operator selected";
 }
 return 0;
}
