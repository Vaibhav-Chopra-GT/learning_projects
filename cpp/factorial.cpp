#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num1;
    cout << "Enter Number\n";
    cin >> num1;
    int mult = 1;
    for (int i = 1; i <= num1; i += 1)
    {

        mult = mult * i;
    }
    cout << mult;
}