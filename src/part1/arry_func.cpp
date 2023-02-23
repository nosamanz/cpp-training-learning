#include <iostream>

using namespace std;

//             int ptr yerine arry[] de yazilabilir.
void printArry(int *ptr, int size)
{
	for(int i = 0; i < size; i++)
		cout << ptr[i] << endl;
}

int main()
{
	int arry[] = {10, 20, 30, 40};

	printArry(arry, 4);
}
