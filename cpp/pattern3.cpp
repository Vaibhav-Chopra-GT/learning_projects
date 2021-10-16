#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x;
    cout << "Enter number of rows:\n ";
    cin >> x;
    for (int i = 1; i <= x; i += 1)
    {
        

        for (int j = x; j > i; j -= 1)
        {
            cout << " ";
        }
        for(int k = 1; k <= i; k += 1)
        {cout<<"*";

        }
    
    cout << "\n";
    }

    return 0;
}