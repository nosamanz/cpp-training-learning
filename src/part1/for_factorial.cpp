#include <iostream>

using namespace std;

int main(void)
{
	int input;
	int fact = 1;

	cout << "Lutfen Faktoriyelini Hesaplamak Istediginiz Sayiyi Giriniz : ";
	cin >> input;
	for (int i = 1 ; i <= input; i++) // burada tanimladigimiz i cpp nin ozelligi olup for dongusu haricinde kullanamayiz.
	{
		fact *= i;
	}
	cout << input << "'nin faktoriyeli : " << fact << endl;
	return (1);
}
