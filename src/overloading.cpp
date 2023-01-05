//cpp de ayni fonksiyon ismiyle yeni bir fonksiyon olusturabilirz fakat parametreleri farkli olmali.
#include <iostream>

void print()
{
	std::cout << "Merhaba" << std::endl;
}

void print(std::string str)
{
	std::cout << str << std::endl;
}

int main()
{
	std::string str = "Hello";
	print();
	print(str);
}
