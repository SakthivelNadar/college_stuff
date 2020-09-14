#include <iostream>
 using namespace std;
 int main() 
{ 
int n,i,j;
cout<<"Enter a number : ";
cin>>n;
for(i=n;i>=1;i--)
  {
    for(j=n;j>n-i;j--)
      {
        cout<<j<<" ";
      }
    cout<<"\n";
  }
return 0;
}
    