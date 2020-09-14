#include<iostream>
using namespace std;

int main()
{
int fact, n;
cout<<"\nfactorial of first 5 natural ";
for(n=1;n<=5;n++)
{
   fact=1;
   for(int i=1;i<=n;i++)
   {
     fact=fact*i;
   }
cout<<"\n"<<fact;
}
return 0;
}
 
    