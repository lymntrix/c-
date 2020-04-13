#include<iostream>
using namespace std;
int main()
{
int a,b,i,gcd;
cout<<"enter the given no :";
cin>> a >> b ;
for(i=1;i<=a and i<=b;i++)
{
if(a%i==0 and b%i==0)
{
gcd=i;
}

}
cout<<gcd;
return 0;
}
