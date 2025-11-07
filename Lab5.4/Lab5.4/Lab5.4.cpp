// Лабораторна робота №5.4
#include <iostream>
#include <cmath>

using namespace std;

// 1) ІТЕРАЦІЙНИЙ спосіб
double P0(const int N)
{
    double p = 1;
    for (int i = N; i <= 16; i++)
        p *= (1.0 * i * N) / (i * i + N * N);
    return p;
}

// 2) РЕКУРСІЯ — спуск, i зростає
double P1(const int N, const int i)
{
    if (i > 16)
        return 1;
    else
        return ((1.0 * i * N) / (i * i + N * N)) * P1(N, i + 1);
}

// 3) РЕКУРСІЯ — спуск, i спадає
double P2(const int N, const int i)
{
    if (i < N)
        return 1;
    else
        return (1.0 * i * N) / (i * i + N * N) * P2(N, i - 1);
}

// 4) РЕКУРСІЯ — підйом, i зростає
double P3(const int N, const int i, double t)
{
    t *= (1.0 * i * N) / (i * i + N * N);
    if (i >= 16)
        return t;
    else
        return P3(N, i + 1, t);
}

// 5) РЕКУРСІЯ — підйом, i спадає
double P4(const int N, const int i, double t)
{
    t *= (1.0 * i * N) / (i * i + N * N);
    if (i <= N)
        return t;
    else
        return P4(N, i - 1, t);
}

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    cout << "(iter)        P0 = " << P0(N) << endl;
    cout << "(rec up ++)   P1 = " << P1(N, N) << endl;
    cout << "(rec up --)   P2 = " << P2(N, 16) << endl;
    cout << "(rec down ++) P3 = " << P3(N, N, 1) << endl;
    cout << "(rec down --) P4 = " << P4(N, 16, 1) << endl;

    return 0;
}
