/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2 Task B

Create a void function to list out numbers.
*/

#include "funcs.h"
#include <iostream>

void print_interval(int L, int U)
{
	for(int i = L; i < U; i++)
	{
		std::cout << std::to_string(i)+" ";
	}
	std::cout << "" << std::endl;
}
