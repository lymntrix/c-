#include<iostream>
using namespace std;
int main()
{
	int divisor,divident,quotient,remainder;
	cout<<"enter divisor :";
	cin>>divisor;
	cout<<"enter divident :";
	cin>>divident;
	quotient=divident/divisor;
	remainder=divident%divisor;
	cout<<"quotient is :"<<quotient<<'\n';
	cout<<"remainder is :"<<remainder<<endl;;
	return 1;
}
