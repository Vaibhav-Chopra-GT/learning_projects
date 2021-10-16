#include <iostream>
#include <math.h>

using namespace std;
int add(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
int divide(int x, int y)
{
    return x / y;
}
int main()
{
    int x, y, z;
    cout << "Enter number 1\n";
    cin >> x;
    cout << "Enter number 2\n";
    cin >> y;
    cout << "1. Add\n"
         << "2. subtract\n"
         << "3. multiply\n"
         << "4. divide\n";
    cin >> z;
    switch (z)
    {
    case 1:
        cout << add(x, y);
        break;
    case 2:
        cout << subtract(x, y);
        break;
    case 3:
        cout << multiply(x, y);
        break;
    case 4:
        cout << divide(x, y);
        break;
    }
    return 0;
}