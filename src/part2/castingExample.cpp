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

class M4:public Weapon
{
	public:
		std::string dipcik;
};

class Pistol:public Weapon
{
	public:
		unsigned int weight;
};

void display(Weapon *objPtr)
{
	std::cout << objPtr->name << std::endl;
}

int main()
{
	Ak47 ak47;
	ak47.name = "kingdom";

	M4 m4;
	m4.name = "ddpat";

	Pistol pistol;
	pistol.name = "candyapple";

	display(&ak47);
	display(&m4);
	display(&pistol);

	return (1);
}
