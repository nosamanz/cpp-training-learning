#include <iostream>
 #include <string>

class Youtube
{
	public:
		int sub;
		std::string name;
		Youtube(std::string name, int sub);

};

Youtube::Youtube(std::string name, int sub)
{
	std::cout << "Constructor called" << std::endl;
	this->name = name;
	this->sub = sub;
}

// void operator<<(std::ostream& COUT, Youtube &ch)
// {
//     COUT << "OP" << std::endl;
//     COUT << "Channel name:" << ch.name << std::endl;
//     COUT << "Channel sub:" << ch.sub << std::endl;
// }

std::ostream &operator<<(std::ostream& COUT, Youtube& ch)
{
	COUT << "OP2" << std::endl;
	COUT << "Channel name:" << ch.name << std::endl;
	COUT << "Channel sub:" << ch.sub << std::endl;
	return (COUT);
}

int main()
{
	Youtube ch("myTube", 75000);
	Youtube ch2("mySecondChannel", 80000);

	//std::cout << ch; tekli yazarken yukaridaki void hali ile kullanabiliriz.

	//eger birden fazla yazdirmak istersek
	std::cout << ch << ch2;

	//diger kullanim sekli
	operator<<(std::cout, ch);
}
