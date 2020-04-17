#include<iostream>
using namespace std;
int main()
{
	int num,original,remainder,result=0;
	cout<<" enter the num";
	cin>>num;
	original=num;
	while(original!=0){
		remainder=original%10;
		result+=remainder*remainder*remainder;
		original/=10;
}
if(result==num)
	cout<<" is a amstrong no"<<endl;
else
	cout<<" is not A amstrong no."<<endl;

return 0;


}
