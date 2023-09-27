#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Node {
    int key;
    Node *prev, *next;
};

Node *nil;

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

Node* listSearch(int key) {
    Node *cur = nil->next;
    while (cur != nil && cur->key != key) {
        cur = cur->next;
    }
    return cur;
}

void deleteNode(Node *t) {
    if (t == nil) return;
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

void printList() {
    Node *cur = nil->next;
    int isf = 0;
    while (1) {
        if (cur == nil) break;
        if (isf++ > 0) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");
}

int main(void) {
    int n, key, i;
    char com[15];

    init();
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %d", com, &key);
        
        if (com[0] == 'i') insert(key);
        else if (strlen(com) > 6) {
            if (com[6] == 'F') deleteFirst();
            else deleteLast();
        }
        else deleteKey(key);
    }

    printList();

    return 0;
}