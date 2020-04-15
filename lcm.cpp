#include<iostream>
using namespace std;
int main()
{
	int a,b,L;
	cout<<" enter two number"<<endl;
	cin>>a>>b;
	for (L=1;L<=a*b;L++)
	{
		if(L%a==0 and L%b==0)
		break;
	}
	cout<<" lcm is :"<<L;
	return 0;
}
