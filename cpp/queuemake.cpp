#include <iostream>
#include <string.h>

using namespace std;
class queue
{
public:
    int arr[10];
    int front;
    int back;
    queue()
    {
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back == 9)
        {
            cout << "Queue overflow";
            return;
        }
        back += 1;
        arr[back] = x;
        if (front == -1)
        {
            front += 1;
            return;
        }
    }
    void pop()
    {
        if (front == -1)
        {
            cout << "Queue empty";
            return;
        }
        front += 1;
    }
    int peek()
    {
        if (front == -1)
        {
            cout << "Queue empty";
            
        }
        return arr[front];
    }
    bool empty() { return front == -1; }
};

int main()
{
    queue st;
    st.push(25);
    st.push(31);
    st.push(32);
    st.pop();
    cout<<st.peek();
    return 0;
}