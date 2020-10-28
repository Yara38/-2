
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, sum;
    string c;
    cout << "Введите первое число: " << endl;
    cin >> a;
    cout << "Введите второе число: " << endl;
    cin >> b;
    cout << "Выберите одну из операций: +, -, /, * " << endl;
    cin >> c;
    if (c == "+")
    {
        sum = a + b;
    }
    else if (c == "-")
    {
        sum = a - b;
    }
    else if (c == "/")
    {
        sum = a / b;
    }
    else if (c == "*")
    {
        sum = a * b;
    }
    cout << sum << endl;
    return 0;
}
