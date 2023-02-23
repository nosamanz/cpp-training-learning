//do, while icin deki kosulun ilk basta ne olursa olsun calismasini saglar.
#include <iostream>

using namespace std;

int main(void)
{
	string password = "123654";
	string input;
	int x = 3;

	do {
		cout << "Lutfen Parolanizi girin : ";
		cin >> input;
		x--;
		if (input != password)
			cout << "Parola Yanlis ! Deneme Hakkiniz : " << x << " kaldi." << endl;
	}while (input != password && x != 0);

	if (input == password)
		cout << "Hosgeldiniz !" << endl;
	else
		cout << "BYE!" << endl;
}
