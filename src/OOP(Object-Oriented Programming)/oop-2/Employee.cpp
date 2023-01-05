#include "Employee.hpp"

void Employee::showInfos()
{
	std::cout << "Isim: " << Employee::name << std::endl;
	std::cout << "Id: " << Employee::id << std::endl;
	std::cout << "Maas: " << Employee::salary << std::endl;
}
