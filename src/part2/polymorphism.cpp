#include <iostream>

class Weapon
{
	public:
		std::string name;
		std::string color;
		virtual void ates(){
			std::cout << "ses yok\n";
		}
};

class Ak47:public Weapon
{
	public:
		double mermiTipi;
		int mermiKapasitesi;
		void ates(){
			std::cout << "dum dum\n";
		}
};

class M4:public Weapon
{
	public:
		std::string dipcik;
		void ates(){
			std::cout << "tirrt tirrt\n";
		}
};

class Pistol:public Weapon
{
	public:
		unsigned int weight;
		void ates(){
			std::cout << "tak tak\n";
		}
};

void atesEt(Weapon *objPtr)
{
	objPtr->ates();
}

int main()
{
	Ak47 ak47;
	M4 m4;
	Pistol pistol;

	// ates() methodu farkli bicimlerde var. ancak bunu yapabilmemiz icin base class taki methodun virtual olmasi gerek.
	atesEt(&ak47);

	return (1);
}
