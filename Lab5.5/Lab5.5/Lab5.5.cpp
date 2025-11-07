// Лабораторна робота №5.5

#include <iostream>
#include <cmath>

using namespace std;

// --- Рекурсивна функція ---
double power(double x, int n)
{
    if (n == 0)
        return 1;                        
    else if (n < 0)
        return 1.0 / power(x, abs(n));       
    else
        return x * power(x, n - 1);   
}

int main()
{
    double x;
    int n;

    cout << "x = "; cin >> x;
    cout << "n = "; cin >> n;
    cout << "x^n = " << power(x, n) << endl;

    return 0;
}
