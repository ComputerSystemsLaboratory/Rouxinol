#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Node {
    int value;
    Node *prev, *next;
};

Node *nil;

void init() {
    nil = new Node;
    nil->next = nil;
    nil->prev = nil;
}

void insert(int value) {
    Node *node = new Node;
    node->value = value;
    node->next = nil->next;
    nil->next->prev = node;
    nil->next = node;
    node->prev = nil;
}

Node* listSearch(int value) {
    Node *cur = nil->next;
    while (cur != nil && cur->value != value) {
        cur = cur->next;
    }
    return cur;
}

void deleteNode(Node *t) {
    if (t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    delete t;
}

void deleteFirst() {
    deleteNode(nil->next);
}

void deleteLast() {
    deleteNode(nil->prev);
}

void deleteValue(int value) {
    deleteNode(listSearch(value));
}

void print() {
    Node *cur = nil->next;
    int first = 0;
    while (1) {
        if (cur == nil) break;
        if (first > 0) printf(" ");
        ++first;
        printf("%d", cur->value);
        cur = cur->next;
    }
    printf("\n");
}

int main() {

    int n;
    cin >> n;
    init();
    for (int i = 0; i < n; ++i) {
        char command[32];
        cin >> command;
        if (command[0] == 'i') {
            int value;
            cin >> value;
            insert(value);
        } else if (command[0] == 'd') {
            if (strlen(command) > 6) {
                if (command[6] == 'F') deleteFirst();
                else if (command[6] == 'L') deleteLast();
            } else {
                int value;
                cin >> value;
                deleteValue(value);
            }
        }
    }

    print();
    return 0;
}