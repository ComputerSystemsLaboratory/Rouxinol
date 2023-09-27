#include <iostream>
#include <algorithm>
using namespace std;

#define NIL -1

struct Node { int parent, right, left; };
Node T[30];

void preOrder(int u) {
    cout << " " << u;
    if (T[u].left != NIL) { preOrder(T[u].left); }
    if (T[u].right != NIL) { preOrder(T[u].right); }
}

void inOrder(int u) {
    if (T[u].left != NIL) { inOrder(T[u].left); }
    cout << " " << u;
    if (T[u].right != NIL) { inOrder(T[u].right); }
}

void postOrder(int u) {
    if (T[u].left != NIL) { postOrder(T[u].left); }
    if (T[u].right != NIL) { postOrder(T[u].right); }
    cout << " " << u;
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        T[i].parent = T[i].left = T[i].right = NIL;
    }
    for (int i = 0; i < n; ++i) {
        int id, right, left; cin >> id >> left >> right;
        T[id].right = right;
        T[id].left = left;
        if (left != NIL) { T[left].parent = id; }
        if (right != NIL) { T[right].parent = id; }
    }
    int u = 0;
    for (int i = 0; i < n; ++i) { if (T[i].parent == NIL) { u = i; } }
    cout << "Preorder" << endl;
    preOrder(u); cout << endl;
    cout << "Inorder" << endl;
    inOrder(u); cout << endl;
    cout << "Postorder" << endl;
    postOrder(u); cout << endl;

}