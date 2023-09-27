#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct DoubleLinkedList
{
    struct Node *head;
    struct Node *tail;
    int n;

    void init()
    {
        head = tail = NULL;
    }

    struct Node* find(int x)
    {
        struct Node *curr;
        curr = head;
        while(curr != NULL)
        {
            if(curr->data == x)
                return curr;
            curr = curr->next;
        }
        return NULL;
    }

    bool empty()
    {
        return head == NULL;
    }

    void insert(int x)
    {
        struct Node *t = (struct Node *)malloc(sizeof(Node));
        t->data = x;
        t->prev = NULL;
        if(head == NULL)
            head = tail = t;
        else
        {
            head->prev = t;
            t->next = head;
            head = t;
        }
    }

    void deleteFirst()
    {
        if(head == tail)
            head = tail = NULL;
        else
        {
            struct Node *t = head->next;
            t->prev = NULL;
            head = t;
        }
    }

    void deleteLast()
    {
        if(head == tail)
        {
            head = tail = NULL;
        }
        else
        {
            struct Node *t = tail->prev;
            t->next = NULL;
            tail = t;
        }
    }

    void deleteX(int x)
    {
        struct Node *curr = find(x);
        if(curr)
        {
            if(curr == head)
                deleteFirst();
            else if(curr == tail)
                deleteLast();
            else 
            {
                curr->next->prev = curr->prev;
                curr->prev->next = curr->next;
            }
        }
    }
};

struct DoubleLinkedList l;

int main()
{
    int n;
    string cmd;
    l.init();
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin>>cmd;
        if(!cmd.compare("deleteFirst"))
            l.deleteFirst();
        else if(!cmd.compare("deleteLast"))
            l.deleteLast();
        else if(!cmd.compare("delete"))
        {
            cin>>x;
            l.deleteX(x);
        }
        else if(!cmd.compare("insert"))
        {
            cin>>x;
            l.insert(x);
        }

    }

    struct Node *curr = l.head;
    while(curr != NULL)
    {
        if(curr->next == NULL)
            cout<<curr->data<<endl;
        else
            cout<<curr->data<<" ";
        curr = curr->next;
    }
}
