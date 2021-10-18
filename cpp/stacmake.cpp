#include <iostream>
#include <string.h>
using namespace std;
class stack
{
public:
    int top;
    int arr[10];
    stack()
    {
        top = -1;
    }

    void push(int y)
    {
        if (top == 9)
        {
            cout << "Stack overflowed";
            return;
        }
        top += 1;
        arr[top] = y;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No element in stack";
            return;
        }
        top -= 1;
    }
    void Top()
    {
        if (top == -1)
        {
            cout << "No Element in Stack";
            return;
        }
        cout << arr[top];
    }
    bool empty()
    {
      return top == -1;
    }
};
int main()
{stack s1;
s1.push(25);
s1.push(35);
s1.push(49);
s1.pop();
s1.Top();






    return 0;
}