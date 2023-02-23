#include <iostream>

int main()
{
	// int a = 10;
	// int b = 0;


	// try
	// {
	// 	int c = a / b;
	// }
	// catch(std::exception &ex)
	// {
	// 	std::cerr << ex.what() << std::endl;
	// }
	///////////////////
	int c = 6;

	try
	{
		if (c > 5)
			throw("its greater than five"); // throw kullanarak bunu firlatip catch ile yakalayabiliriz.

	}
	catch (const char *txtException) // const char * olmasi gerekli  cunku throw dan firlatilan deger cons char * (terminate called after throwing an instance of 'char const*' Aborted)
	{
		std::cout << "Exception: " << txtException << std::endl;
	}


	try
	{
		if (c > 5)
			throw 101;

	}
	catch (int nbEx) // int olarak tutmak icin
	{
		std::cout << "Exception: " << nbEx << std::endl;
	}
	catch (...)// herhangi bir parametre verilmedi ise default handler calisir
	{
		std::cout << "Default handler " << std::endl;
	}
	return (1);
}
