/*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a small calculator that takes as input one of the four arithmetic operations, the two
               arguments to those operations, and then prints out the result
 ==============================================================================================================================
 */
 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int add(int n, int m)
{
	return n+m;
}
int sub(int n, int m)
{
	return n-m;
}
int mul(int n, int m)
{
	return n*m;
}
int divi(int n, int m)
{
	return (n/m);
}
int mod (int n, int m)
{
	return n%m;

}
void calculator(int n1, int n2, char c)
{
	if (c=='+')
		cout << add(n1, n2) <<endl;
	if (c=='-')
		cout << sub(n1, n2)<<endl;
	if (c=='*')
		cout << mul(n1, n2)<<endl;
	if (c=='/')
		cout << divi(n1, n2)<<endl;
	if (c=='%')
		cout << mod (n1, n2)<<endl;
}
int main()
{
	int arg1,arg2;
	char operation;
	
	while(1)
	{
	cout<<"Enter your two numbers that you want to calculate:"<<endl;
	cin>>arg1;
	cin>>arg2;
	cout<<"Enter the arithmetic operation you want to carry out: "<<endl;
	cin>> operation;
	calculator(arg1,arg2,operation);
	}

system("pause");
	return 0;	
}
