#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int key) {
    Node *x = root;
    Node *y = NIL;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL) {
        y = x;
        if (z->key < x->key) x = x->left;
        else x = x->right;
    }

    z->parent = y;

    if (y == NIL) root = z;
    else if (z->key < y->key) y->left = z;
    else y->right = z;

    return;
}

bool find(int key) {
    Node *u = root;
    while (u != NIL && u->key != key) {
        if (key < u->key) u = u->left;
        else u = u->right;
    }
    if (u != NIL) return true;
    else return false;
}

void preParse(Node *u) {
    if (u == NIL) return;
    cout << " " << u->key;
    preParse(u->left);
    preParse(u->right);
    return;
}

void inParse(Node *u) {
    if (u == NIL) return;
    inParse(u->left);
    cout << " " << u->key;
    inParse(u->right);
    return;
}

void print() {
    inParse(root);
    cout << "\n";
    preParse(root);
    cout << endl;
    return;
}

int main() {
    int m;
    cin >> m;

    string command;
    int key;
    for (int i = 0; i < m; i++) {
        cin >> command;
        if (command == "insert") {
            cin >> key;
            insert(key);
        } else if(command == "find") {
            cin >> key;
            bool exists = find(key);
            cout << (exists ? "yes" : "no") << endl;
        } else {
            print();
        }
    }

    return 0;
}
