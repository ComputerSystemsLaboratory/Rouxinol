#include <cstdio>
#include <cstdlib>
#include <cstring>

struct Node {
    int key;
    Node *prev, *next;
};

Node *nil;
int size = 0, np = 0, nd = 0;

void init() {
    nil = (Node *) malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

void insert(int key) {
    Node *x = (Node *) malloc(sizeof(Node));
    x->key = key;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
    np++;
    size++;
}

void deleteNode(Node *t) {
    if (t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
    size--;
}

Node *listSearch(int key) {
    Node *cur = nil->next;
    while (cur != nil && cur->key != key) {
        cur = cur->next;
    }
    return cur;
}

void deleteKey(int key) {
    deleteNode(listSearch(key));
    nd++;
}

void deleteFirst() {
    deleteNode(nil->next);
}

void deleteLast() {
    deleteNode(nil->prev);
}

char *df = "deleteFirst";
char *dl = "deleteLast";
char *d = "delete";
char *in = "insert";

int main() {
    int key, N;
    char c[20];
    scanf("%d", &N);
    init();

    for (int i = 0; i < N; i++) {
        scanf("%s%d", c, &key);
        char *cs = c;
        if (strcmp(cs, df) == 0) {
            deleteFirst();
        } else if (strcmp(cs, dl) == 0) {
            deleteLast();
        } else if (strcmp(cs, d) == 0) {
            deleteKey(key);
        } else if (strcmp(cs, in) == 0) {
            insert(key);
        }
    }

    Node *cur = nil->next;
    int f = 0;
    while (1) {
        if (cur == nil) break;
        if (f++ > 0) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
    }
    printf("\n");

    return 0;
}

