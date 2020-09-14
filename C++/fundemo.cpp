#include<iostream>
using namespace std;

int add(int x, int y);//declaration
int sub(int x, int y);
int mult(int x, int y);
int main()
{
int a,b,c;
cout<<"enter two numbers : ";
cin>>a>>b;

c=add(a,b);// function calling
cout<<"addition is : "<<c;
c=sub(a,b);
cout<<"\nsubtraction is : "<<c;
cout<<"\nmultiplication is : "<<mult(a,b);

}

int add(int x, int y)//fun definition
{
return x+y;
}
int sub(int x, int y)//fun definition
{
return x-y;
}
int mult(int x, int y)//fun definition
{
return x*y;
}
