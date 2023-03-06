// #include <iostream>

// class Base
// {
// 	protected:
// 		int x;
// 		void protectedFunc(){};
// 	private:
// 		int y;
// 	public:
// 		void setX2(int x);
// };

// class Derived : public Base
// {
// 	public:
// 		void setX(int x)
// 		{
// 			this->x = x;
// 		}
// 		//void setY(int y);// islevsiz method
// 		void accessProtectedFunc(){
// 			protectedFunc();
// 		}
// };

// //Base class protected olan x i degistirebilir. Ama direkt (methodsuz) degistiremez.
// void Base::setX2(int x)
// {
// 	this->x = x;
// }


// //Goruldugu gibi private a erisimim yok.
// // void Derived::setY(int y)
// // {
// // 	this->y = y;
// // }

// int main()
// {
// 	Derived obj;

// 	obj.setX(10);

// 	//protectedFunc() a erisime acan method.
// 	obj.accessProtectedFunc();
// 	//Methodsuz protected i degistiremem. (miras almama ragmen).
// 	// obj.x = 10;

// 	//base class ta methodsuz protected i degistiremez.
// 	// Base obj2;
// 	// obj2.x = 10;

// }

//CHATGPT DERLENMEYECEGINI SOYLEDI AMA DERLENDI :)

#include <iostream>
using namespace std;

class Base {
   public:
      void publicFunction() {
         cout << "This is a public function of Base class" << endl;
      }
   protected:
      void protectedFunction() {
         cout << "This is a protected function of Base class" << endl;
      }
};

class Derived : protected Base {
   public:
      void accessProtectedFunction() {
         // alt sınıfın korumalı üyesine erişmek
         protectedFunction();
      }
};

int main() {
   Derived d;
   // alt sınıfın korumalı üyesine erişmek
   d.accessProtectedFunction();
   // bu kod derlenmeyecektir çünkü Base sınıfının public üyesi, alt sınıflar tarafından protected olarak erişilemez.
   // d.publicFunction();
   return 0;
}
