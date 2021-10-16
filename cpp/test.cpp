#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y, z = 0;
    cin >> x;
    for (int i = 1; i < x; i *= 10)
    {
        y = (x / i % 10);

        z = y + 10 * z;
    }
    cout << z;

    // int sum = 0;
    // while (x > 0) {
    //     int rem = x % 10;
    //     sum = sum + rem;
    //     // x /= 10;
    //     x = x / 10;
    // }

    // cout << sum << endl;

    return 0;
}