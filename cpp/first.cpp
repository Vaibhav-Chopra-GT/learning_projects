#include <iostream>
using namespace std;

// main
int main()
{

    int num1, num2, z;
    cout << "Enter number 1\n";
    cin >> num1;
    cout << "Enter number 2\n";
    cin >> num2;
    cout << "Enter option\n1. Add\n2. subtract\n3. multiply\n4. divide\n";
    cin >> z;
    if (z == 1) {
        int ans = num1 + num2;
        cout << "The answer is: " << ans;
    }
    else if (z == 2)

        cout << (num1 - num2);
    else if (z == 3)
        cout << (num1 * num2);
    else if (z == 4)
        cout << (num1 / num2);
    
    // cin>>x
    // cout<<"Enter option\n1. Add\n2. Subtract\n";
    // cin>>z;
    // if (z == 0) {
    //     cout<<"z is 0";
    // } if (z == 1) {
    //     cout<<"z is 1";
    // }

    return 0;
}
