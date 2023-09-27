#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int key;
    Node *prev, *next;
};

Node* NIL;

void init() {
    NIL = new Node();
    NIL->prev = NIL;
    NIL->next = NIL;
}

void insert(int key) {
    Node *x = new Node();
    x->key = key;
    x->next = NIL->next;
    NIL->next->prev = x;
    NIL->next = x;
    x->prev = NIL;
}

Node* listSearch(int key) {
    Node* cur = NIL->next;
    while (cur->key != key && cur != NIL) {
        cur = cur->next;
    }
    return cur;
}

void deleteNode(Node* tmp) {
    if (tmp == NIL) return;
    tmp->next->prev = tmp->prev;
    tmp->prev->next = tmp->next;
    delete tmp;
}

void deleteFirst() {
    deleteNode(NIL->next);
}

void deleteLast() {
    deleteNode(NIL->prev);
}

void deleteKey(int key) {
    deleteNode(listSearch(key));
}

void print() {
    Node* cur = NIL->next;
    while (cur != NIL) {
        if (cur != NIL->next) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");
}

int main() {
    int n;
    char S[20];
    int key;
    
    init();
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", S, &key);
        if (S[0] == 'i') insert(key);
        if (S[0] == 'd') {
            if (S[6] == 'F') deleteFirst();
            else if (S[6] == 'L') deleteLast();
            else deleteKey(key);
        }
    }
    
    print();
    return 0;
}