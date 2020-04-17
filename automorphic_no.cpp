#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n,sqr,copy,c=0;
   cout<<"enter a no."<<endl;
   cin>>n;
   sqr=n*n;
   copy=n;
   while(copy>0)
   {
       c++;
       copy=copy/10;
   }
   int end=sqr%(int)pow(10,c);
   if(n==end)
   {
       cout<<"it is automorphic";
   }
   else
   {
       cout<<"it is not automorphic";
   }
 return 0;  
}