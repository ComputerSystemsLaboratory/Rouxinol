#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

struct Node {
    int key;
    Node *prev, *next;
};

Node *nil;
int n;

void init() {
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void insert(int key) {
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

Node *listSearch(int key) {
    Node *cur = nil->next;
    while (cur != nil && cur->key != key) {
        cur = cur->next;
    }
    return cur;
}

void deleteNode(Node *t) {
    if ( t == nil ) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
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

int main() {
    char moji[20];
    int key;
    
    init();
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", moji, &key);
        if ( moji[0] == 'i' ) {
            insert(key);
        } else if ( moji[0] == 'd' ) {
            if ( moji[6] == 'F' ) {
                deleteFirst();
            } else if ( moji[6] == 'L' ) {
                deleteLast();
            } else {
                deleteKey(key);
            }
        }
    }
    
    Node *cur = nil->next;
    int i = 0;
    while (cur != nil) {
        if (i) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
        i++;
    }
    free(cur);
    printf("\n");
    
    return 0;
}