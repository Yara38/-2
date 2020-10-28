
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int numb;
	cout << "Введите число: ";
	cin >> numb;
	if (numb % 2 != 0)
		cout << "число " << numb << " нечетное" << endl;
	else
		cout << "число " << numb << " четное" << endl;
	return 0;
}
