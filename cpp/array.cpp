#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter number of rows\n";
    cin >> x;
    cout << "Enter number of columns\n";
    cin >> y;
    int arr[x][y];
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < x; i += 1)
    {
        for (int j = 0; j < y; j += 1)
        {
            cout << "Enter row" << (i + 1) << "number" << (j + 1) << "\n";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < x; i += 1)

    {
        for (int j = 0; j < y; j += 1)
        {
            sum2 = sum2 + arr[i][j];
            // cout << sum2 << " ";
        }
    }
    // cout << sum2;

    return 0;
}