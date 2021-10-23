#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *t;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void insert(int y, node *&h)
{
    node *t;
    node *n = new node(y);
    // n->data = y;

    if (h == NULL)
    {
        h = n;
        return;
    }

    t = h;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = n;
}
void display(node *h)
{
    node *t = h;
    while (t != NULL)
    {
        cout << t->data << "\n";
        t = t->next;
    }
}
void deletion(node *h, int y)
{
    node *t = h;
    while (t->next->data != y)
    {
        t = t->next;
    }
    node *deleted = t->next;
    t->next = t->next->next;
    delete deleted;
}
void deletehead(node *h)
{node* deleted = head;
head=head->next;
delete deleted;


}
void deletelast(node *h)
{}
int main()
{

    node *h = NULL;

    insert(0, h);
    insert(1, h);
    insert(5, h);
    // deletion(h, 3);
    display(h);
    return 0;
}