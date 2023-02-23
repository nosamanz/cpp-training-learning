// constructor ve destructor lar yapici ve yikici methodlardir.

#include <iostream>

class Employee
{
	private:
		std::string name;
		int salary;
	public:
		Employee(std::string name, int salary)// obje olusturulurken calisir.
		{
			this->name = name; // this yerine direkt name de yazilabilirdi fakat cpp bunu ayn isim olarak gorecegi icin hata verirdi.
			this->salary = salary;
			std::cout << "constructor cagirildi" << std::endl;
		}
		~Employee()//olusturulan objeyi siler (delete kullanildiginda oto. calisir.)
		{
			std::cout << "destructor cagirildi" << std::endl;
		}
};

int main()
{
	Employee *employee = new Employee("Osman", 20000);

	delete employee;
}
