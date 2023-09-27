#include <cstdio>
#include <cstring>
#include <cstdlib>
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
    if (t == nil) {
        return;
    }
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

void output() {
    Node* node = nil->next;
    int cnt = 0;
    while (node != nil) {
        if (cnt > 0) {
            printf(" ");
        }
        printf("%d", node->key);
        node = node->next;
        cnt++;
    }
    printf("\n");
}

int main () {
    int n;
    scanf("%d", &n);
    init();

    char cmd[20];
    int key;
    for (int i = 0; i < n; i++) {
        scanf("%s%d", cmd, &key);
        if (cmd[0] == 'i') {
            insert(key);
        } else if (cmd[0] == 'd') {
            if (strlen(cmd) == 6) {
                deleteKey(key);
            } else {
                if (cmd[6] == 'F') {
                    deleteFirst();
                } else if (cmd[6] == 'L') {
                    deleteLast();
                }
            }
        }
    }
    output();

    return 0;
}