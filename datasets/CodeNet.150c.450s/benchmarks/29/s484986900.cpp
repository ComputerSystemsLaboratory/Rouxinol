#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
using namespace std;

class mp
{
public:
    struct Node
    {
        int key;
        Node *prev, *next;
    };

    Node *nil;
    mp()
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

    Node *listSearch(int key)
    {
        Node *cur = nil->next;
        while (cur != nil && cur->key != key)
        {
            cur = cur->next;
        }
        return cur;
    }
    void deleteNode(Node *t)
    {
        if (t == nil)
            return;
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
};

void printList(mp p)
{
    mp::Node *cur = p.nil->next;
    int isf = 0;
    while (1)
    {
        if (cur == p.nil)
            break;
        if (isf++ > 0)
            printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");
}

#define MAX_PROC 2000005

int main()
{

    int key, n, c;
    int size = 0;
    char com[20];
    int np = 0, nd = 0;
    mp p;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d", com, &key);
        switch (com[0])
        {
        case 'i':
            p.insert(key);
            np++;
            size++;
            break;
        case 'd':
            if (strlen(com) > 6)
                switch (com[6])
                {
                case 'F':
                    p.deleteFirst();
                    break;
                case 'L':
                    p.deleteLast();
                    break;
                }
            else
            {
                p.deleteKey(key);
                nd++;
            }
        default:
            break;
        }
    }
    printList(p);
    return 0;
}
