#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x;
    cout << "ENter numer of elements";
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number" << i + 1 << "\n";
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < x; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;

    return 0;
}