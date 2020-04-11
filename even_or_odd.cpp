#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number: ";
	cin>>n;
/*	if (number%2==0)
	{
		cout<<number<<" is even:"<<endl;

	}
	else
	{
		cout<<number<<" is odd:"<<endl;	
	}
*/
	(n%2==0) ? cout<<n<<" is even."<<endl:cout<<n<<" is odd."<<endl;
}
