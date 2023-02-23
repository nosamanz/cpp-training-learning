#include <iostream>

class Weapon
{
	public:
		std::string name;
		std::string color;
		void ates(){
			std::cout << "ses yok\n";
		}
		//virtual void ates() = 0;
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

	//bu sekilde tek tek cagirinca herhangi bir sorun teskil etmiyor.
	//ak47.ates(); -> dum dum ciktisi verir.

	//ancak upcasting yaparak bunu tek bir fonk. yapmak isteseydim.
	atesEt(&ak47);
	//goruldugu gibi ses yok ciktisini verdi.
	//bunu engellemek ve base class in degil class imizdaki methodun calismasini istiyorsak sanallastirma yapmamiz gerekir (virtual eklenerek).
	//POINTER ILE CALISIYORSAK VIRTUAL MECBURIDIR.
	return (1);
}
