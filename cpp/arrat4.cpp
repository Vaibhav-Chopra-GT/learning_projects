#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, count = 0;
    cout << "number of elements\n";
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number " << i + 1;
        cin >> arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}