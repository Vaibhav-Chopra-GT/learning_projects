#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int x)
{
    for (int i = 2; i < x; i += 1)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x, y, z;
    cout << "Enter Number\n";
    cin >> x;
    bool is_it_prime = is_prime(x);
    cout << is_it_prime;
}