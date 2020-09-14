#include<iostream>
using namespace std;

int main()
{
int a=0, b=1, c, n;
cout<<"enter how many terms : ";
cin>>n;
cout << "the fibonacci series is : \n"<<a<<" "<<b;

while(n>2)
{
c=a+b;
a=b;
b=c;
n=n-1;
cout<<" "<<c;
}
return 0;
}

     
    