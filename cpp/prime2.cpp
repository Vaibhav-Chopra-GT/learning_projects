#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter Number\n";
    cin >> x;

    for (int j = 2; j < x; j += 1)
    {
        bool isprime = true;

        for (int i = 2; i < j; i += 1)
        {

            if (j % i == 0)
            {
                isprime = false;
            }
        }

        if (isprime)
            cout << j << " ";
    }
}