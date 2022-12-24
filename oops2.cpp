#include<iostream>
#define N 100
using namespace std;

int palin(char [],int);

int i,flag;

int main()
{
 int len=0;
 char str[N];
 cout<<"Enter string : ";
 cin>>str;
 for(i=0;str[i]!='\0';i++)
 {
  len++;
 }
 flag = palin(str,len);
 if(flag==0)
  cout<<"\nGiven string is palindrome\n";
 else
  cout<<"\nGiven string is not palindrome\n";
 return 0;
}

int palin(char str[],int len)
{
 int j;
 flag=0;
 for(i=0,j=(len-1);i<len/2;i++,j--)
 {
  if(str[i] != str[j])
   {
    flag=1;
    break;
   }
 }
 return flag;
}
