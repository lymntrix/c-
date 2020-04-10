/*
    Primitive Data Types: These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char , float, bool etc. Primitive data types available in C++ are:
        Integer
        Character
        Boolean
        Floating Point
        Double Floating Point
        Valueless or Void
        Wide Character

*/


#include<iostream>
using namespace std;
int main()
{
	cout<<"size of char : "<<sizeof(char)<<" bytes"<<endl;
	cout<<"size of int : "<<sizeof(int)<<" bytes"<<endl;
	cout<<"size of short int : "<<sizeof(short int)<<" bytes"<<endl;
	cout<<"size of long int : "<<sizeof(long int)<<" bytes"<<endl;
	cout<<"size of signed long int : "<<sizeof(signed long int)<<" bytes"<<endl;
	cout<<"size of unsigned long int : "<<sizeof(unsigned long int)<<" bytes"<<endl;
	cout<<"size of float : "<<sizeof(float)<<" bytes"<<endl;
	cout<<"size of double :"<<sizeof(double)<<" bytes"<<endl;	
	cout<<"size of wchar_t : "<<sizeof(wchar_t)<<" bytes"<<endl;
	return 0;
}
