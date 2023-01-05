#include <iostream>

using namespace std;

int main(void)
{
	int f_nb, s_nb, res = 0;
	string op;

	cout << "Lutfen ilk sayiyi giriniz : ";
	cin >> f_nb;
	cout << endl;
	cout << "Lutfen operator girin : ";
	cin >> op;
	cout << endl;
	cout << "Lutfen ikinci sayiyi girin : ";
	cin >> s_nb;
	cout << endl;

	if (op == "+")
		res = f_nb + s_nb;
	else if (op == "-")
		res = f_nb - s_nb;
	else if (op == "*")
		res = f_nb * s_nb;
	else if (op == "/")
		res = f_nb / s_nb;
	else if (op == "%")
		res = f_nb % s_nb;
	else
	{
		cout << "Operator Hatali\n";
		return (0);
	}
	cout << "SONUC : " << res << endl;
	return (1);
}
