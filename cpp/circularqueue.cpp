#include <iostream>
#include <string.h>

using namespace std;
class queue
{
public:
    int arr[5];
    int front;
    int back;
    queue()
    {
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (front == 0 && back == 4)
        {
            cout << "Que overflow";
        }
        back = (back + 1) % 5;
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
        front = (front + 1) % 5;
    }
    int peek()
    {
        if (front == -1)
        {
            cout << "Queue empty";
        }
        return arr[front];
    }
    void display()
    {
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
    }
    bool empty() { return front == -1; }
};

int main()
{
    queue st;
    st.push(25);
    st.push(31);
    st.push(32);
    st.push(45);
    st.push(38);
    st.pop();
    st.pop();
    st.push(46);
    st.display();
    cout << st.peek();
    return 0;
}