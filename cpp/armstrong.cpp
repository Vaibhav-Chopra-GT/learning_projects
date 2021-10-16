#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y;
    double sum = 0;
    cout << "Enter Number\n";
    cin >> x;
    for (int i = 1; i < x; i *= 10)

    {
        y = x / i % 10;

        sum = sum + pow(y, 3);
     } cout<<sum;
    if (sum == x)
        cout << "Number is armstrong";
    else
        cout << "Number is not armstrong";

    return 0;
}