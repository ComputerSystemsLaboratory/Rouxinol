/* ALDS1_3_C: Doubly Linked List */

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

/* A node of linked list. */
struct Node
{
    const int key;
    Node *next, *prev;

    public:
        Node(int);
};

Node::Node(int k) : key(k) {};

/* A doubly linked list. */
class DlList
{
    Node *guard;
    void remove(Node*);

    public:
        DlList();
        ~DlList();
        void insert(int);
        void delete_node(int);
        void delete_first();
        void delete_last();
        void print();
};

DlList::DlList()
{
    guard = new Node(-1);
    guard->next = guard->prev = guard;
}

DlList::~DlList()
{
    Node *tmp, *node = guard->next;
    while(node != guard) {
        tmp = node;
        node = node->next;
        delete tmp;
    }
    delete guard;
}

void DlList::insert(int key)
{
    Node *node = new Node(key);
    node->next = guard->next;
    guard->next->prev = node;
    guard->next = node;
    node->prev = guard;
}

void DlList::delete_node(int key)
{
    Node *node = guard->next;
    while( node->key != key && node != guard )
        node = node->next;
    remove(node);
}

void DlList::delete_first()
{
    remove(guard->next);
}

void DlList::delete_last()
{
    remove(guard->prev);
}

void DlList::remove(Node *node)
{
    if (node != guard) {
        node->next->prev = node->prev;
        node->prev->next = node->next;
        delete node;
    }
}

void DlList::print()
{
    Node *node = guard->next;
    if (node == guard)
        return;

    printf("%d", node->key);
    node = node->next;
    while( node != guard ) {
        printf(" %d", node->key);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    DlList list;

    int n_commands;
    cin >> n_commands;

    char command[15];
    int key;
    for (int i = 0; i < n_commands; i++) {
        scanf("%s %d\n", command, &key);
        if (command[0] == 'i') {
            list.insert(key);
        }
        else if (command[0] == 'd') {
            switch( strlen(command) ) {
                case 6:
                    list.delete_node(key); break;
                case 11:
                    list.delete_first(); break;
                case 10:
                    list.delete_last(); break;
            }
        }
    }
    list.print();
    return 0;
}