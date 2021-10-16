#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y, z;
    cout << "number of rows\n";
    cin >> x;
    for (int i = 1; i <= x; i += 1)
    {
        cout << "\n";
        for (int j = 1; j <= i; j += 1)
        {
            cout << "*";
        }
    }

    return 0;}