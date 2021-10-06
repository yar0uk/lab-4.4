#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double x, y, xp, xk, dx, R1,R2;

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
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
        if (x <= -2 * R1)
            y = R1 - (R1 * (x + 1 + (2 * R1)));
        if (-2 * R1 <= x && x <= 0)
            y = sqrt((R1 * R1) - ((x + R1) * (x + R1)));
        if (0 < x && x <= 2 * R2)
            y = sqrt((R2 * R2) - ((x - R2) * (x - R2)));
        if (-2 * R1 <= x && x <= 6)
            y = (x - (2 * R2)) / (6 - (2 * R2));
        if (x > 6)
            y = -1;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}
