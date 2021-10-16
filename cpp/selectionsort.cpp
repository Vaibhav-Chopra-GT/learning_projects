#include <iostream>
#include <math.h>

using namespace std;
void swap(int &x, int &y)
{
    int c;
    c = x;
    x = y;
    y = c;
}
int max(int arr[], int len)
{
    int i;
    int max = arr[0];
    int y = 0;
    for (i = 0; i < len; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
            y = i;
        }
    }
    return y;
}
int main()
{
    int x, y;
    cout << "Enter number of elements";
    cin >> x;
    int orig_len = x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number" << i + 1 << "\n";
        cin >> arr[i];
    }
    int i = 0;
    while (i < x)

    {
        y = max(arr, x);
        
        swap(arr[y], arr[x - 1]);
        x = x - 1;
    }
    for (int j = 0; j < orig_len; j++)
        cout << arr[j] << " ";

    return 0;
}
