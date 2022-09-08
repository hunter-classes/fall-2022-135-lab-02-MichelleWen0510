/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2 Task A

Square any number between 0 and 100.
*/

#include <iostream>
int main()
{
	int x;
	std::cout << "Please enter an integer: ";
	std::cin >> x;

	while (x<=0 || x>=100)
	{ 
	std::cout << "Please re-enter: ";
	std::cin >> x;
	}

	int sq = x*x;
	std::cout << "Number squared is "+ std::to_string(sq) << std::endl;
	return 0;
}
