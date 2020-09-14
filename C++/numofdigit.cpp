#include <iostream>
 using namespace std;
 int main() 
{ 
int n,c=0;
cout<<"Enter a number : ";
cin>>n;
while(n>0)
{
n=n/10;
c=c+1;
}
cout<<"\nnumber of digits in a number : ";
cout<<c;
return 0;
}
