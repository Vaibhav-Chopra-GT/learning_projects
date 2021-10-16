#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x;
    cout << "Enter number of elements";
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number" << i + 1 << "\n";
        cin >> arr[i];}
    cout<<arr[x];
    // for (int i = 0; i < x; i++)
    // {
    //     // cout << arr[i] <<"\n";
    //     if (i % 2 == 0)
            
    //    { cout << arr[i] << "\n";}
    // }

    return 0;
}