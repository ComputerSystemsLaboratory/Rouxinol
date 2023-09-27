#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

struct Node{
    int key;
    Node *prev, *next;
};

Node *nil;

void init()
{
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void insert(int key)
{
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;

    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

Node* listSearch(int key)
{
    Node *cur = nil->next;
    while(cur != nil && cur->key != key)
        cur = cur->next;

    return cur;
}

void deleteNode(Node *t)
{
    if (t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst()
{
    deleteNode(nil->next);
}

void deleteLast()
{
    deleteNode(nil->prev);
}

void deleteKey(int key)
{
    deleteNode(listSearch(key));
}

int main(void)
{
    int n;
    char command[20];
    int k;

    init();

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        scanf("%s %d", command, &k);
        if(command[0] == 'i')
            insert(k);
        else if(command[0] == 'd' &&  command[6] == 'F')
            deleteFirst();
        else if(command[0] == 'd' &&  command[6] == 'L')
            deleteLast();
        else if(command[0] == 'd')
            deleteKey(k);
        else
            cout << "Error: unknown command." << endl;
    }

    Node *cur = nil->next;
    cout << cur->key;
    cur = cur->next;
    while(cur != nil)
    {
        cout << " " << cur->key;
        cur = cur->next;
    }
    cout << endl;

    return 0;
}