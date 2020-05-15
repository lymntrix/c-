#include<iostream>  
#include<cmath>

using namespace std;
int main()
{
  float base,exponent,result;
  cout<<"enter the base and exponent respectively :";
  cin>>base>>exponent;
  result=pow(base,exponent);
  cout<<result;
  return 0;

}