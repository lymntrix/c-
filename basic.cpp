#include<iostream>  
#include<cstdlib>
#include<typeinfo>
using namespace std; 
  
typedef float FLOAT32;
enum direction {east,west,south,north};  
extern int a,b,c;
extern float f;
int main()
 
{ 
   	int a=3;
	int b=4;
	int c=a+b;
	float f=7.0/3.0;
	FLOAT32 myfloat=6;
	direction dir;
	dir=west;
	
	
	cout<<dir<<endl;
	cout<<"print the value of float :"<<myfloat<<endl; 
	cout<<"size of char :"<<sizeof(wchar_t)<<endl;
	cout<<c<<endl;
	cout<<f<<endl;
	cout<<2345<<endl; // binary literal 	
	cout<<011<<endl; // octal literal
	cout<<0x213A<<'\n'; //hexadecimal integer literal
	cout<<0b101<<endl;
	cout<<typeid(a).name()<<endl;
	return 0;
}

