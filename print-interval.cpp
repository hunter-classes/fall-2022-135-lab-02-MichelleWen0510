#include <iostream>
int main()
{
	int small, large;
	std::cout << "Please enter L: ";
	std::cin >> small;
	std::cout << "Please enter U: ";
	std::cin >> large;
	for(int i = small; i < large; i++)
	{
		std::cout << std::to_string(i)+" ";
	}
}
