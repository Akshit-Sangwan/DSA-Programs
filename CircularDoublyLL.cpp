#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next!=NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

int main()
{
    node *first = new node(3);
    return 0;
}