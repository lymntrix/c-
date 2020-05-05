#include <iostream>
#include <string>
using namespace std;
int main() {
   int n,i;
   cout<<"enter a series of number";
   cin>>n;
   for( i=1;i<=n;i++)
   {
      if(i==2 || i==4)
      {
         continue;
      }
     cout<<"numbers are "<<i<<endl;

   }
   return 0;
   
}
