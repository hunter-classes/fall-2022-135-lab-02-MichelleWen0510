/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2 Task D

Add the previous two numbers. Starting with 0 and 1.
*/

#include <iostream>
int main()
{
	int fib[60];
	fib[0]=0;
	fib[1]=1;
	
	for(int i=2; i<60; i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	for(int j=0; j<60;j++)
	{
		std::cout << fib[j] << std::endl;
	}

	return 0;
}
