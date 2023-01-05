#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>

class Employee
{
	public:
		int id;
		int salary;
		std::string name;
		void showInfos();// bu method bilgileri ekrana yazar.
};

#endif
