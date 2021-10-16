#include <iostream>
#include <math.h>

using namespace std;
void fibbo(int x)
{
    int sum = 0;
    int sum2 = 1;
    int sum3;
    cout << "01";
    for (int i = 1; i <= x; i++)
    {
        sum3 = sum + sum2;
        sum = sum2;
        sum2 = sum3;
        cout << sum3 << " ";
    }
}
int main()
{
    int y;
    cout << "Enter number ";
    cin >> y;
    fibbo(y);
    return 0;
}