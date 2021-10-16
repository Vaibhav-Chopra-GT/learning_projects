#include <iostream>
#include <math.h>

using namespace std;

void swap(int &x, int &y) {

    int temp = x;
    x = y;
    y = temp;

    cout << x << " " << y << "\n";
}

int main() {

    int x = 10, y = 5;
    cout << x << " " << y << "\n";

    swap(x, y);

    cout << x << " " << y << "\n";
    return 0;
}