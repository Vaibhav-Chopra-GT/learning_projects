#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter number 1\n";
    cin >> a;
    cout << "Enter number 2\n";
    cin >> b;
    c = a;
    a = b;
    b = c;

    cout << a << b;

    return 0;
}