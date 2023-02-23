#include <iostream>

using namespace std;

void change(int &ref)
{
	ref = 20;
}

int main()
{
	int a = 10;
	int &ref = a;
	// int *ptr;  Pointerlarda boyle atama yapabilirz fakat referanslarda tanimi yaptiktan hemen sonra degeri atamamiz gerekir.
	// ptr = &a;

	int b = 10;
	change(b);
	cout << "B nin degisen degeri : " << b << endl;
}
