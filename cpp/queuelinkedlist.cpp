#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class queue
{
public:
    node *back;
    node *front;
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *t = new node();
        t->data = x;
        t->next = NULL;
        if (back == NULL)
        {
            back = t;
            front = t;
        }
        else
        {
            back->next = t;
            back = t;
        }
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue is empty!";
        }
        else
        {
            node *todelete = front;
            front = front->next;
            delete todelete;
        }
    }
    void display()
    {
        node *t;
        t = front;
        // cout << t->data;
        while (t != NULL)
        {
            cout << t->data <<"\n";
            t = t->next;
        }
    }
};

int main()
{
    queue q1;

    q1.push(7);
    q1.push(56);
    q1.push(15);
    q1.push(10);
    // q1.pop();
    // q1.pop();
    q1.display();
    return 0;
}