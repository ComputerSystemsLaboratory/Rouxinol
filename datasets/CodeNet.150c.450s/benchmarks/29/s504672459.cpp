#include <bits/stdc++.h>
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

void printList() {
    Node *cur = nil->next;
    int cnt = 0;
    while (cur != nil) {
        if (cnt != 0) {
            cout << " ";
        }
        cout << cur->key;
        cur = cur->next;
        cnt++;
    }
    cout << endl;
}

void insertKey(int key) {
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;
    // nil Nodeの直後に要素を追加
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

Node* listSearch(int key) {
    Node *cur = nil->next;  // nil Nodeの次のNodeから検索
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

int main() {
    int n, key;
    char com[20];
    cin >> n;
    // cout << "check n = " << n << endl;

    init();

    for (int i = 0; i < n; i++) {
        cin >> com;
        // cout << "process " << i << endl;
        // cout << "com[0] = " << com[0] << endl;
        // Insert key
        if (com[0] == 'i') {
            cin >> key;
            // cout << "key = " << key << endl;
            // cout << "before insert" << endl;
            // cout << "case ins Key" << endl;
            insertKey(key);
        }
        else if (com[0] == 'd') {
            if (strlen(com) > 6) {
                if (com[6] == 'F') {
                    // delete head
                    // cout << "case del First" << endl;
                    deleteFirst();
                }
                else if (com[6] == 'L') {
                    // delete tail
                    // cout << "case del Last" << endl;
                    deleteLast();
                }
            }
            else {
                // delete key matched first
                cin >> key;
                // cout << "key = " << key << endl;
                // cout << "case del Key" << endl;
                deleteKey(key);
            }
        }
        // printList();
        // cout << com << endl;
    }
    printList();
}

