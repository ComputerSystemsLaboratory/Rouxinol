#include <iostream>
using namespace std;
static const int MAX = 25;
static const int NIL = -1;

class Node {
    public:
        int parent, left, right;
        Node();
};
Node::Node() {
    parent = left = right = NIL;
}
Node T[MAX];


// preorder巡回
void preParse(int u) {
    if (u == NIL) return;
    cout << " " << u;
    preParse(T[u].left);
    preParse(T[u].right);
}

// Inorder巡回
void inParse(int u) {
    if (u == NIL) return;
    inParse(T[u].left);
    cout << " " << u;
    inParse(T[u].right);
}

// Postorder巡回
void postParse(int u) {
    if (u == NIL) return;
    postParse(T[u].left);
    postParse(T[u].right);
    cout << " " << u;
}

int main() {
    int n, id, left, right, root;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id >> left >> right;
        T[id].left = left;
        T[id].right = right;
        if (left != NIL) T[T[id].left].parent = id;
        if (right != NIL) T[T[id].right].parent = id;
    }
    for (int i = 0; i < n; i++) {
        if (T[i].parent == NIL) root = i;
    }
    cout << "Preorder" << endl;
    preParse(root);
    cout << endl;
    cout << "Inorder" << endl;
    inParse(root);
    cout << endl;
    cout << "Postorder" << endl;
    postParse(root);
    cout << endl;

    return 0;
}

