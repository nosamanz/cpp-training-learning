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
};

int main()
{
	BasicNumber num1(7);

	std::cout << "num1 : " << num1.n << std::endl;

	BasicNumber num2 = num1;

	std::cout << "num2 : " << num2.n << std::endl;
	return (1);
}
