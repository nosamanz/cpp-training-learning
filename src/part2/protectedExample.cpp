#include <iostream>

class Base
{
	protected:
		int x;
	private:
		int y;
	public:
		void setX2(int x);
};

class Derived : public Base
{
	public:
		void setX(int x);
		void setY(int y);// islevsiz method
};

void Derived::setX(int x)
{
	this->x = x;
}

//Base class protected olan x i degistirebilir. Ama direkt (methodsuz) degistiremez.
void Base::setX2(int x)
{
	this->x = x;
}


//Goruldugu gibi private a erisimim yok.
// void Derived::setY(int y)
// {
// 	this->y = y;
// }

int main()
{
	Derived obj;

	obj.setX(10);
	obj.setY(20);

	//Methodsuz protected i degistiremem. (miras almama ragmen).
	// obj.x = 10;

	//base class ta methodsuz protected i degistiremez.
	// Base obj2;
	// obj2.x = 10;

}
