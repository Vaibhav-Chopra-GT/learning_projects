#include<iostream>

using namespace std;

int main() {
    
    int y = 0;
    cout << &y << " " << y << "\n";
    int *x;
    x = &y;
    cout << *x << " " << x << " " << &x << endl;
    return 0;
}