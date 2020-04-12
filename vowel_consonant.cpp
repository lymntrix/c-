#include<iostream>
using namespace std;
int main()
{
	char c;
	int lower,upper;
	cout<<"enter a character : ";
	cin>>c;
	lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(lower or upper)
	{
	cout<< c<<" character is vowel :"<<endl;
	}
	else
	{
	cout<< c << " character is consonant"<<endl;	
	}
return 0;
}
