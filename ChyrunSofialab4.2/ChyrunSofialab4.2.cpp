// ChyrunSofialab4.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_04_2.cpp
// < ����� ����� >
// ����������� ������ � 4.2
// ��������� �������, ������ ��������: ������� ���� �����
// ������ 18

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, A, B, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
         << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        A = 13,5 - 2 * x;
        if (x <= -1)
            B = exp(0.4 + x);
        else
            if (x >= 1)
                B = cos(x) / (1 + pow(sin(x), 2));
            else
                B = 1 - pow(sin(x), 2);
        y = A - B;
        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << y
             << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}