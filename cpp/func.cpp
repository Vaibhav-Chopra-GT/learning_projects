#include<iostream>

using namespace std;

int factorial (int num) {

    if (num < 0) {
        return -1;
    } else if (num == 0) {
        return 1;
    }
    
    int mult = 1;
    for (int i = 1; i <= num; i += 1)
    {
        mult = mult * i;
    }

    return mult;
}
// 1 1 2 3 5 8 13
void add (int a, int b) {
    cout << (a + b);
}

int main () {

    // int n, r;
    // cout << "Enter n\n";
    // cin >> n;
    // cout << "Enter r\n";
    // cin >> r;
    // int ncr = factorial(n) / (factorial(n - r) * factorial(r));
    // cout << ncr;
    int x = factorial(5);
    cout <<x;
    // add(5, 11);
    // pow(3, 4);
    return 0;
}

// return_type name (arguments/parameters) {
// 
// }

