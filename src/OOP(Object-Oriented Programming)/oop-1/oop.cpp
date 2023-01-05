//gercek hayattaki objeleri bilgisayara uyarlama denilebilir.
//class bir fabrika gorevi gorerek objeleri olusturmaya yarar.
//class in icindekilere method denir.
#include <iostream>

class Student
{
	public:
		std::string name;
		void tellName()
		{
			std::cout << "tellname: " << name << std::endl; // kendi ozelligi olan name i yazdiracak.
		}
};

int main()
{
	Student student1;
	Student student2;

	student1.name = "Osman";
	student2.name = "Nosamanz";
	//Burada toplam 2 tane nesne olusturmus oldum ve icine degerini atadim.

	std::cout << "1.Student : " << student1.name << std::endl;
	std::cout << "2.Studnet : " << student2.name << std::endl;

	student1.tellName();
}
