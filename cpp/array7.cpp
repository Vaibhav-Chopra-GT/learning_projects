#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y, a;
    cout << "Enter number of elements\n";
    cin >> x;

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number" << i + 1 << "\n";
        cin >> arr[i];
    }
    cout << "Enter number\n";
    cin >> y;
    bool ispresent = false;
    int i = 0;
    while (i < x)
    {
        int mid = ((i + x) / 2);
        if (y < arr[mid])
            x = mid - 1;
        else if (y > arr[mid])
            i = mid + 1;

        else if (y == arr[mid])
        {
            ispresent = true;
            cout << "Number is present";
            break;
        }
    }
    if (ispresent == false)
    {
        cout << "Number is absent";
    }

    return 0;
}