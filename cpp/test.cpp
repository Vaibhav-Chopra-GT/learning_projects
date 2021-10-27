#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int *y;
    y = new int(10);
    int *x = y;
    cout<<x;
    return 0;
}