#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

struct Node {
    int key;
    Node *prev;
    Node *next;
};

Node *nil;

void init() {
    nil = (Node *)malloc(sizeof(Node));
    nil->prev = nil;
    nil->next = nil;
}

void insert(int key) {
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;

    x->next = nil->next;
    x->prev = nil;
    nil->next->prev = x;
    nil->next = x;
}

Node* listSearch(int key) {
    Node *cur = nil->next;
    while (cur != nil && cur->key != key) {
        cur = cur->next;
    }
    return cur;
}

void deleteNode(Node *t) {
    if (t == nil) return;
    t->next->prev = t->prev;
    t->prev->next = t->next;
    free(t);
}

void deleteFirst() {
    deleteNode(nil->next);
}

void deleteLast() {
    deleteNode(nil->prev);
}

void deleteKey(int key) {
    deleteNode(listSearch(key));
}

void printList() {
    Node *cur = nil->next;
    while(cur != nil) {
        if(cur != nil->next) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;

    }
    printf("\n");
}

int main(void) {
    int key, n, i;
    char com[20];

    scanf("%d", &n);
    init();
    for(i = 0; i < n; i++){
        scanf("%s%d", com, &key);
        if (com[0] == 'i') insert(key);
        if (com[0] == 'd') {
            if (com[6] == 'F') deleteFirst();
            else if (com[6] == 'L') deleteLast();
            else deleteKey(key);
        }

    }

    printList();

    return 0;
}
