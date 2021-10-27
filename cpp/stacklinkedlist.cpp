#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node() {}
};
class stack
{
public:
    node *top;
    stack()
    {
        top = NULL;
    }
    void push(int y)
    {
        node *t = new node;
        t->data = y;
        t->next = top;
        top = t;
    }
    void pop()
    {
        if (top == NULL)
            cout << "Stack is empty!";
        node *isdelete = top;
        top = top->next;
        delete isdelete;
    }
    void display()
    {

        node *t = top;
        while (t != NULL)
        {
            cout << t->data << "\n";
        
        t = t->next;}
    }
};
int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.pop();
    s1.display();
    return 0;
}