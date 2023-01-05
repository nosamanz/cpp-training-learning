//Public ve Private kullanilmasinin nedeni birdegeri direkt olarak degistirmeyi engellemektir,
// Ornegin buyuk bir projede birden fazla class olmasi durumunda yanlis deger girmeyi engellemek(kosul koyarak vs.)...
//Biz buna Encapsulation - Kapsülleme diyoruz...
//Kapsulleme detaylari programcidan soyutlayarak gizler ve objenin bozulmasini engeller.
//Burada kumanda ornegini verebiliriz. Kumanda tuslari bizim isimizi gorur fakat donanim kismi gizlenmistir, bunun nedeni de istenmeyen(yanlis) seyleri engellemek...
//sonuc olarak ozellikler private yapilmali...
#include <iostream>

class Employee
{
	private:
		std::string id;
		std::string salary;
		std::string name;
	public:
		void getInfos();
		void showInfos();
};

void Employee::getInfos()
{
	std::cout << "Lutfen Isim Girin : ";
	std::getline(std::cin, Employee::name);
	std::cout << std::endl;
	std::cout << "Lutfen id girin : ";
	std::getline(std::cin, Employee::id);
	std::cout << std::endl;
	std::cout << "Lutfen maas girin : ";
	std::getline(std::cin, Employee::salary);
	std::cout << std::endl;
}

void Employee::showInfos()
{
	std::cout << "Isim : " + Employee::name << std::endl;
	std::cout << "Id : " + Employee::id << std::endl;
	std::cout << "Maas : " + Employee::salary << std::endl;
}

int main()
{
	Employee employee1;

	//employee1.name = "Osman"; PUBLIC olmadigi icin bunlari direkt erisim saglayamayiz yalnizca o classtakiler erisim saglayabilirler...
	//sadece public olanlara erisim saglayabiliriz...
	employee1.getInfos();
	employee1.showInfos();
}
