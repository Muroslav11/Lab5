#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double y(const double x);

// Основна функція main()
int main() 
{
    double fp, fk; // початок і кінець інтервалу
    int n;         // кількість відрізків

    cout << "fp = "; cin >> fp;
    cout << "fk = "; cin >> fk;
    cout << "n = "; cin >> n;

    double df = (fk - fp) / n;

    
    cout << "------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(30) << "y(f/2)+y(f+1)^2+y(2*f)" << " |\n";
    cout << "------------------------------------------" << endl;


    for (double f = fp; f <= fk; f += df)
    {
        double result = y(f / 2) + pow(y(f + 1), 2) + y(2 * f);
        cout << "|" << setw(7) << f << " |" << setw(30) << result << " |\n";
    }
    cout << "------------------------------------------" << endl;
    
    return 0;
}



// Допоміжна функція y(x)
double y(const double x) 
{
    if (abs(x) >= 1)
        return (exp(x) / (1 + exp(x) + sin(x)));
    else 
    {
        double S = 1;      
        double a = 1;      
        for (int j = 1; j <= 8; j++)
        {
            a *= -x * x / ((2 * j - 1) * (2 * j));  // рекурентне співвідношення
            S += a;
        }
        return S;
    }
}
