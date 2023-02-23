#include <iostream>

class Weapon
{
	public:
		std::string name;
		std::string color;
};

class Ak47:public Weapon
{
	public:
		double mermiTipi;
		int mermiKapasitesi;
};

int main()
{
	Weapon wp;

	wp.name = "silah1";
	wp.color = "mor";

	//Ak47 *ak47Ptr = &wp; //boyle yapinca hata oldugunu zaten soyler. cunku yukarida herhangi bir ak47 objesi olusturmadik.
	Ak47 *ak47Ptr = (Ak47 *) &wp;

	std::cout << ak47Ptr->mermiKapasitesi << std::endl;//goruldugu gibi yanlis deger verdi.
	//yukarida ak47 objesi olusturulsaydi dogru bir downcasting yapilmis olurdu...
	return (1);
}
