#include <iostream>
#include <math.h>

using namespace std;
int swap(int &x, int &y)
{
    int c;
    c = x;
    x = y;
    y = c;
}
int main()
{
    int x;
    cout << "Enter number of elements";
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number" << i + 1 << "\n";
        cin >> arr[i];
    }
    for (int i = 0; i <= x; i++)
    {
        for (int i = 0; i < (x-1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    for (int i = 0; i < x; i++)
        cout << arr[i];

    return 0;
}