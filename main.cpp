/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2 Task B

Main function to test and also input.
*/
#include "funcs.h"
#include <iostream>
int main()
{
	print_interval(-5, 10);
	print_interval(1, 8);

	int small,large;
	std::cout << "Please enter L: ";
	std::cin >> small;
	std::cout << "Please enter U: ";
	std::cin >> large;
	print_interval(small, large);

	return 0;
}
