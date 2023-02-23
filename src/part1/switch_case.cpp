#include <iostream>

using namespace std;

int main()
{
	int input;

	cout << "Lutfen rakam secin : ";
	cin >> input;

	switch(input)
	{
		case 1:
			cout << "1 i sectiniz : " << input << endl; //burada break kullanilmamasi durumunda 2. kosul saglanmasa bile break olmadigi icin alt kosula gecer.
		case 2:
			cout << "2 yi sectiniz : " << input << endl;
			break;
		case 3:
			cout << "3 u sectiniz : " << input << endl;
		default:
			cout << "hicbir islem secilmedi..." << endl;
	}
}
