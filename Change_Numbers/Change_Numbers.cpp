#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    int num1;
    int num2;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    int units1 = num1 % 10;
    int temp1 = num1 / 10 % 10;
    int hundreds1 = num1 / 100 % 10;

    int units2 = num2 % 10;
    int temp2 = num2 / 10 % 10;
    int hundreds2 = num2 / 100 % 10;

    num1 = hundreds1 * 100 + temp2 * 10 + units1;
    num2 = hundreds2 * 100 + temp1 * 10 + units2;

    cout << num1 << " и " << num2 << "\n";
}