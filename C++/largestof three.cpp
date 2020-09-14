#include<iostream>
using namespace std;

int main()
{
int a, b, c;
cout<<"enter three numbers :";
cin>>a>>b>>c;
if(a>b && a>c)
{
cout<<a<<" is biggest";
}
else if(b>c)
{
cout<<b<<" is greatest";
}
else
{
cout<<c<<" is greatest";
}
}