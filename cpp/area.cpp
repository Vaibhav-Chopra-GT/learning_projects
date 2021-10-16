#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    cout << "Select Shape\n 1.square\n 2.triangle\n 3.circle\n";
    cin >> num3;
    if (num3 == 1)
    {
        cout << "Enter side\n";
        cin >> num1;
        int res = num1 * num2;
        cout << res;
    }
    else if (num3 == 2)
    {

        cout << "Enter Height\n";
        cin >> num2;
        cout << "Enter Base\n";
        cin >> num4;
        cout << (0.5 * num2 * num4);
    }
    else if (num3 == 3)
    {
        cout << "Enter Radius\n";
        cin >> num5;
        cout << (M_PI * num5 * num5);
    }
    return 0;
}