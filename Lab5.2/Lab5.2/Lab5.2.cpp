#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Прототипи функцій
// Функція для обчислення суми ряду S
void S(const double x, const double eps, int& n, double& s);
// Функція для обчислення наступного доданка A (використовуючи рекурентне співвідношення)
void A(const double x, const int n, double& a);


int main()
{
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;

    // Заголовок таблиці
    cout << "--------------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(15) << "Arctanh(x)" << " |"
        << setw(15) << "S" << " |"
        << setw(10) << "n" << " |"
        << endl;
    cout << "--------------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (abs(x) >= 1.0) {
            cout << "|" << setw(7) << setprecision(2) << x << " |"
                << setw(15) << "undefined" << " |"
                << setw(15) << "---" << " |"
                << setw(10) << "---" << " |"
                << endl;
            x += dx;
            continue;
        }

        // Обчислення суми S та кількості доданків n
        S(x, eps, n, s);

        // Виведення результатів
        // Функція atanh(x) у C++ обчислює арктангенс гіперболічний
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(15) << setprecision(10) << atanh(x) << " |"
            << setw(15) << setprecision(10) << s << " |"
            << setw(10) << n << " |"
            << endl;

        x += dx;
    }

    cout << "--------------------------------------------------------" << endl;
    return 0;
}


void S(const double x, const double eps, int& n, double& s)
{
   
    n = 0;
    double a = x;
    s = a;

    do { 
        A(x, n, a);

        s += a; 

        n++;

    } while (abs(a) >= eps); // Умова зупинки
}

void A(const double x, const int n, double& a)
{
    double R = (x * x) * (2.0 * n + 1.0) / (2.0 * n + 3.0);

    a *= R;
}