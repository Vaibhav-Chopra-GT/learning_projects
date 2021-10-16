#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y;
    
    cout << "Enter number";
    cin >> x;
    bool arr[x+1];
    for (int i = 0; i<x; i++)
    arr[i] = true;
    for (int i = 2; i * i <= x; i += 1)
    {
        for (int j = 2 * i; j < x; j += i)
          { arr[j] = false;}

        
            
    }
for (int i = 0; i < x; i++)
cout << arr[i] << endl;
    return 0;
}