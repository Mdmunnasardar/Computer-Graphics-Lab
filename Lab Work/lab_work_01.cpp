
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, m;

    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    // Check for vertical line
    if (x1 == x2)
    {
        cout << "Slope is undefined (vertical line)" << endl;
        return 0;
    }

    // Calculate slope
    m = (y2 - y1) / (x2 - x1);

    cout << fixed << setprecision(2);

    cout << "Slope m = " << m;

    // Check slope type
    if (m > 0)
        cout << " (positive)";
    else if (m < 0)
        cout << " (negative)";
    else
        cout << " (zero)";

    // Check absolute slope
    if (abs(m) <= 1)
        cout << ", |m| <= 1" << endl;
    else
        cout << ", |m| > 1" << endl;

    return 0;
}
