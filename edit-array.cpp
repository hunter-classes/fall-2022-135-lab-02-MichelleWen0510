/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2 Task C

Create an arry and allow user to edit.
*/

#include <iostream>
int main()
{
	int myData[10];
	for(int i=0; i<10; i++)
	{
		myData[i]=1;
	}
	for(int i=0; i<sizeof(myData)/sizeof(int); i++)
	{
		std::cout << std::to_string(myData[i])+" ";
	}
	std::cout<< "" << std::endl;
	
	int ind=0;
	do {
		int val;
		std::cout << "Input index: ";
		std::cin >> ind;
		std::cout << "Input value: ";
		std::cin >> val;
		myData[ind]=val;
		for(int i=0; i<sizeof(myData)/sizeof(int); i++)
        	{
                	std::cout << std::to_string(myData[i])+" ";
        	}
        	std::cout<< "" << std::endl;			
	} while (ind>=0 && ind<(sizeof(myData)/sizeof(int)));	

	std::cout << "Index out of range. Exit." << std::endl;

	return 0;
}
