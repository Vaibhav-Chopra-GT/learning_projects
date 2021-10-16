#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y, a;
    cout << "Enter number of elements\n";
    cin >> x;
    int z = x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number" << i + 1 << "\n";
        cin >> arr[i];
    }

    for (int i = 0; i < x/2; i++)
    {
        z -= 1;
        y = arr[i];
        arr[i] = arr[z];

        arr[z] = y;

        
        
            
        
        
    }
    for (int i = 0; i < x; i++)
    {
        cout << arr[i];
    }

    return 0;
}