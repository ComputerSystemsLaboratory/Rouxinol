#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>

struct Node {
    Node* prev;
    Node* next;
    long long value;
};

Node* nil;

void init() {
    nil = (Node*) malloc(sizeof(Node));
    nil->prev = nil;
    nil->next = nil;
}

void insertNode (long long value) {
    Node* n = (Node*) malloc(sizeof(Node));
    n->value = value;

    n->next = nil->next;
    nil->next->prev = n;
    nil->next = n;
    n->prev = nil;

}

Node* findNode(long long  value) {
    Node* cur = nil->next;
    while (cur != nil) {
        if (cur->value == value) return cur;
        cur = cur->next;
    }
    return NULL;
}

void deleteNode (Node* n) {
    if (n == NULL) return;
    n->next->prev = n->prev;
    n->prev->next = n->next;
    free(n);
    n = NULL;
}

void deleteFirst() {
    deleteNode(nil->next);
}
void deleteLast() {
    deleteNode(nil->prev);
}

void printList() {
    Node* cur = nil->next;
    while (cur != nil) {
        if (cur->prev != nil) printf(" ");
        printf("%lld", cur->value);
        cur = cur->next;
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);

    init();

    for (int i = 0; i < N; ++i) {
        char c[100];
        long long value;
        scanf("%s", c);
        std::string str = c;
        if (str == "insert") {
            scanf("%lld", &value);
            insertNode(value);
        }
        else if (str == "delete") {
            scanf("%lld", &value);
            deleteNode(findNode(value));
        }
        else if (str == "deleteFirst") {
            deleteFirst();
        }
        else if (str == "deleteLast") {
            deleteLast();
        }
    }

    printList();

    return 0;
}