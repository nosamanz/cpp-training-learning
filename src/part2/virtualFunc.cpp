#include <iostream>

using namespace std;

//Burada base class imiz A
//B ve C class lari A dan miras aldilar.
//D class i ise B ve C yi den miras aldi.
//D class indan display func. una erismek istersek compilerin kafasi karisir, (ambiguos(belirsiz) hatasi)
//cunku iki yol vardir(B yolu ve C yolu).
//Bu yuzden burada virtual kullanarak (B ve C de) bunu gideriyoruz.
//ancak 1 tane yol varsa buna gerek yoktur, ornegin B class indan miras alan(sadece B class indan) D class i olsaydi 1 yol old. icin buna gerek yoktu.


class A
{
	public:
		void display()
		{
			std::cout << "Hello!" << std::endl;
		}
};

// class B:public A
class B:virtual public A
{

};


// class C:public A
class C:virtual public A

{

};

class D:public B, public C
{

};

int main()
{
	D imd;

	imd.display();
	return (1);
}
