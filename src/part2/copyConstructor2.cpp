#include <iostream>

class BasicNumber
{
	private :
	public :
		int n;
		BasicNumber(int set_n)
		{
			n = set_n;
		}
		//default copy constructor
		// BasicNumber(const BasicNumber &basic_number)
		// {
		// 	std::cout << "copyconstructor is runing..." << std::endl;
		// 	n = basic_number.n;
		// }
		//other copy constructor
		BasicNumber(const BasicNumber &basic_number)
		{
			std::cout << "copyconstructor is runing..." << std::endl;
			n = basic_number.n * 2;
		}
};

int main()
{ 
	//BasicNumber num1 = 7;
	BasicNumber num1(7); // yukaridaki ile ayni

	std::cout << "num1 : " << num1.n << std::endl;

	//BasicNumber num2 = num1;
	BasicNumber num2(num1); // yukardaki ile ayni.

	std::cout << "num2 : " << num2.n << std::endl;
	return (1);
}
