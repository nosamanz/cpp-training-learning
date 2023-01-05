#include "Employee.hpp"
//Employee cpp ve hpp olarak ayrimamizin nedeni (hepsini bir yerde de yazabilirdik) daha moduler bir hale getirmek ve buyuk projelerde kontrolu saglamak amaciyla ayiriyoruz...
int main()
{
	Employee employee1;

	employee1.name = "Osman";
	employee1.id = 1;
	employee1.salary = 20000;
	employee1.showInfos();

}
