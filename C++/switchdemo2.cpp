#include<iostream>
using namespace std;

int main()
{
int a;
cout<<"enter a month number:";
cin>>a;

switch(a)
{
case 1:
 {
  cout<<"January";
  break;
 }
case 12:
 { cout<<"December";
   break;
 }
default:{cout<<"not a valid month";break;}

}

}