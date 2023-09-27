#include <stdio.h>

int N;
char inst[12];

class Node {
public:
    Node();
    int key;
    Node* p;
    Node* n;
};

Node::Node()
{
    p = NULL;
    n = NULL;
}

class LinkedList {
public:
    LinkedList();
    void insertKey(int key);
    void deleteKey(int key);
    void deleteFirst(void);
    void deleteLast(void);
    void print(void);
    Node* nil;
};

LinkedList::LinkedList()
{
    nil = new Node;
    nil->p = nil;
    nil->n = nil;
}

void LinkedList::insertKey(int key)
{
    Node* node = new Node;
    node->key = key;
    
    node->n = nil->n;
    nil->n->p = node;
    nil->n = node;
    node->p = nil;
}

void LinkedList::deleteKey(int key)
{
    Node* c = nil->n;
    bool is_found = false;
    while(c != nil) {
        if (key == c->key) {
            is_found = true;
            break;
        }
        c = c->n;
    }
    if (is_found) {
        c->n->p = c->p;
        c->p->n = c->n;
    }
}

void LinkedList::deleteFirst(void)
{
    Node* c = nil->n;
    c->n->p = c->p;
    c->p->n = c->n;
}

void LinkedList::deleteLast(void)
{
    Node* c = nil->p;
    c->n->p = c->p;
    c->p->n = c->n;
}

void LinkedList::print(void)
{
    Node* c = nil->n;
    while (c != nil) {
        printf("%d", c->key);
        c = c->n;
        if (c != nil) printf(" ");
    }
}

int main(void)
{
    LinkedList ll;
    //freopen("in.txt", "r", stdin);
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%s", inst);
        int k;
        if (inst[0] == 'i') { // insert
            scanf("%d", &k);
            ll.insertKey(k);
        } else {
            if (inst[6] == 'F') { // deleteFirst
                ll.deleteFirst();
            } else if (inst[6] == 'L') { // deleteLast
                ll.deleteLast();
            } else { // delete
                scanf("%d", &k);
                ll.deleteKey(k);
            }
        }
    }
    ll.print();
    printf("\n");
    return 0;
}