#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	char a = 'a', b = 'b', c = 'c';
	cout << "Merhaba dunya" << endl;
	cout << (char)toupper(a) << endl;
	cout << (char)toupper(b) << endl;
	cout << (char)toupper(c) << endl;

	int nb;

	nb = 10;
	cout << nb << endl;
	nb += 452;
	cout << "nb degeri: " << nb << " dir." << endl;

	int nb2 = 2;
	cout << "nb - nb2 = " << nb - nb2 << endl;

	return (1);
}
