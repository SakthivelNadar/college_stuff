#include <iostream>
 using namespace std;
 int main() 
{ 
int n,r,rev=0,num;
cout<<"Enter a number : ";
cin>>n;
num=n;
cout<<"\n";
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}

if(rev==num)
{
cout<<"number is palindrome";
}
else
{
cout<<"number is not a palindrome";
}
return 0;
}
