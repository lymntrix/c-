#include<iostream>
using namespace std;
int main()
{
int n,i,range;
cout<<"\t\t this is a multiplication table"<<endl;
cout<<"enter a number ";
cin>> n ;
cout<<" enter the range ";
cin>>range;
for (i=1;i<=range;i++)
{
cout<<n<<" * "<<i<<" = "<<n*i <<endl;

}
return 0;
}
