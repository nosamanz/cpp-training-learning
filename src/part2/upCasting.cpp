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
	Ak47 ak47;
	ak47.name = "kingdom";
	ak47.color = "yellow";
	ak47.mermiTipi = 7.62;
	ak47.mermiKapasitesi = 42;

	std::cout << "pointer dan once\n";
	std::cout << ak47.name << std::endl;
	std::cout << ak47.color << std::endl;
	std::cout << ak47.mermiKapasitesi << std::endl;
	std::cout << ak47.mermiTipi << std::endl;

	Weapon *wpPtr = &ak47;

	wpPtr->name = "anubis";
	wpPtr->color = "purple";

	//wpPtr assagidaki ozelliklere erisemez cunku o pointeri Weapon class inda olusturduk!!!.
	// wpPtr->mermiTipi = 5.56;
	// wpPtr->mermiKapasitesi = 32;

	std::cout << "pointer dan sonra\n";
	std::cout << ak47.name << std::endl;
	std::cout << ak47.color << std::endl;
	std::cout << ak47.mermiKapasitesi << std::endl;
	std::cout << ak47.mermiTipi << std::endl;
	return (1);
}
