#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *next, *prev;
};

Node *nil;

Node* listSearch(int key)
{
    Node *cur = nil->next;
    while (cur != nil && cur->key != key )
    {
        cur = cur->next;
    }
    return cur;
}

void init()
{
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void printList()
{
    Node *cur = nil->next;
    int isf = 0;
    while (true)
    {
        if (cur == nil) break;
        if (isf++ > 0) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");
}

inline void deleteNode(Node *t)
{
    if (t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

inline void deleteFirst()
{
    deleteNode(nil->next);
}

inline void deleteLast()
{
    deleteNode(nil->prev);
}

inline void deleteKey(int key)
{
    deleteNode(listSearch(key));
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

int main()
{
#ifdef local
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
#endif
    char buf[20];
    int n;
    scanf("%d", &n);
    init();
    for (int i = 0; i < n; ++i)
    {
        int key;
        scanf("%s", buf);
        if (buf[0] == 'i')
        {
            scanf("%d", &key);
            insert(key);
        }
        else
        {
            if(strlen(buf) > 6)
            {
                if (buf[6] == 'F') deleteFirst();
                else deleteLast();
            }
            else
            {
                scanf("%d", &key);
                deleteKey(key);
            }
        }
    }
    printList();
    return 0;
}
