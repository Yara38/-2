

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian"); 
    int a, b, c;
    cout << "Введите число a: "; 
    cin >> a; 
    cout << "Введите число b: "; 
    cin >> b; 
    cout << "Введите число c: "; 
    cin >> c; 
    int min = a; //максмум к х
    if (a < min) 
    {
        min = b; //минимум к y
    }
    if (c < min)
    {
        min = c; //максимум к z
    }
    cout << "Минимальное число: " << min << endl;
    return 0;
}

