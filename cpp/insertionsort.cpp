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
    int x, y;
    cout << "Enter number of elements";
    cin >> x;
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        cout << "Enter number" << i + 1 << "\n";
        cin >> arr[i];
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    for(int i = 0; i < x; i++)
    cout<<arr[i]<<" ";
    return 0;}