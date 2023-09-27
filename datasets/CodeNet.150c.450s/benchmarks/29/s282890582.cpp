#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
struct Node {
    int key;
    Node *next, *prev;
};
static string INSERT = "insert";
static string DELETE = "delete";
static string DELETE_FIRST = "deleteFirst";
static string DELETE_LAST = "deleteLast";

Node* nil;
void print()
{
    Node* n = nil->next;
    while (n != nil) {
        cout << n->key;
        n = n->next;
        if (n != nil) {
            cout << " ";
        }
    }
    cout << endl;
}

void init()
{
    nil = (Node*)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void insertN(int key)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->key = key;
    n->next = nil->next;
    n->prev = nil;
    nil->next->prev = n;
    nil->next = n;
}
void deleteN(int key)
{
    Node* n = nil->next;
    while (n != nil) {
        if (key == n->key) {
            n->prev->next = n->next;
            n->next->prev = n->prev;
            free(n);
            break;
        }
        n = n->next;
    }
}
void deleteLastN()
{
    Node* n = nil->prev;
    n->prev->next = nil;
    nil->prev = n->prev;
    free(n);
}
void deleteFirstN()
{
    Node* n = nil->next;
    n->next->prev = nil;
    nil->next = n->next;
    free(n);
}

int main()
{
    init();
    int N = 0;
    scanf("%d", &N);
    char command[20];
    int key = 0;
    for (int i = 0; i < N; i++) {
        cin >> command;
        if (INSERT == command) {
            cin >> key;
            insertN(key);
        } else if (DELETE == command) {
            cin >> key;
            deleteN(key);
        } else if (DELETE_FIRST == command) {
            deleteFirstN();
        } else if (DELETE_LAST == command) {
            deleteLastN();
        }
    }
      print();
    return 0;
}