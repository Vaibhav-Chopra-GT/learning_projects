#include <iostream>
#include <math.h>

using namespace std;

bool armstrong(int);

bool armstrong(int num)
{
    int y;
    double sum = 0;
    for (int i = 1; i < num; i *= 10)

    {
        y = num / i % 10;

        sum = sum + pow(y, 3);
    }

    if (sum == num)
        return true;
    else
        return false;
}
int main()
{
    int x;
    cout << "Enter number\n";
    cin >> x;
    cout << armstrong(x);

    return 0;
}