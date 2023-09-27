#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

struct Node {
    int key;
    Node* prev;
    Node* next;

    Node(int key) : key(key) { }
};

class DoublyLinkedList {
public:
    Node* nil;

    void insert(Node* x) {
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

    void deleteNode(Node* t) {
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

    DoublyLinkedList() {
        nil = (Node *)malloc(sizeof(Node));
        nil->next = nil;
        nil->prev = nil;
    }
};

int main() {
    int n;
    scanf("%d", &n);

    DoublyLinkedList list;
    for (int i = 0; i < n; i++) {
        char c[20];
        scanf("%s", c);
        string command = c;

        if (command == "insert") {
            int key;
            scanf("%d", &key);
            Node* x = new Node(key);
            list.insert(x);
        } else if (command == "delete") {
            int key;
            scanf("%d", &key);
            list.deleteKey(key);
        } else if (command == "deleteFirst") {
            list.deleteFirst();
        } else if (command == "deleteLast") {
            list.deleteLast();
        }
    }

    Node* cur = list.nil->next;
    while (cur != list.nil) {
        if (cur == list.nil->next) {
            printf("%d", cur->key);
        } else {
            printf(" %d", cur->key);
        }

        cur = cur->next;
    }
    printf("\n");

    return 0;
}