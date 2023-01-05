#include <iostream>

int main()
{
	int a[] = {10, 20, 30, 40, 50};

	for (int item:a)
		std::cout << item << std::endl;

	for (int item:a)
		std::cout << 2*item << std::endl;
}
