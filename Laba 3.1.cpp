#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;  // вхідний параметр
    double y;  // результат обчислення
    double A;  // стала частина виразу
    double B;  // змінна частина виразу

    cout << "x = ";
    cin >> x;

    // Стала частина виразу
    A = 2 * pow(abs(x), 3);

    // Спосіб 1: розгалуження у скороченій формі
    if (x <= -0.1)
        B = 5 * cos(18 * x);

    if (x > -0.1 && x < 1.2)
        B = atan((x + 2) / 5);

    if (x >= 1.2)
        B = cos(x) / sin(x) + 18;

    y = A - B;

    cout << endl;
    cout << "1) y = " << y << endl;


    // Спосіб 2: розгалуження у повній формі
    if (x <= -0.1)
        B = 5 * cos(18 * x);
    else
        if (x < 1.2)
            B = atan((x + 2) / 5);
        else
            B = cos(x) / sin(x) + 18;

    y = A - B;

    cout << "2) y = " << y << endl;

    return 0;
}