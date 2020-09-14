#include <iostream>
 using namespace std;
 int main() 
{ 
int n,r,rev=0;
cout<<"Enter a number : ";
cin>>n;
cout<<"\n"<<"reverse of a number ";
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
cout<<rev;
return 0;
}
