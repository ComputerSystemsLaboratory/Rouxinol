#include <iostream>
using namespace std;
#define MAX 10000
#define NIL -1

struct Node {
    int parent, left, right;
};

void preParse(int u, Node tree[]) {
    if (u == NIL ) return;
    cout << " " << u;
    preParse(tree[u].left, tree);
    preParse(tree[u].right, tree);
}

void inParse(int u, Node tree[]) {
    if (u == NIL ) return;
    inParse(tree[u].left, tree);
    cout << " " << u;
    inParse(tree[u].right, tree);
}

void postParse(int u, Node tree[]) {
    if (u == NIL ) return;
    postParse(tree[u].left, tree);
    postParse(tree[u].right, tree);
    cout << " " << u;
}

int main() {
    Node tree[MAX];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        tree[i].parent = NIL;
    }

    int v, l, r, root = 0;
    for (int i = 0; i < n; i++) {
        cin >> v >> l >> r;
        tree[v].left = l;
        tree[v].right = r;
        if (l != NIL) tree[l].parent = v;
        if (r != NIL) tree[r].parent = v;
    }

    for (int i = 0; i < n; i++) {
        if (tree[i].parent == NIL) {
            root = i;
            break;
        }
    }

    cout << "Preorder" << endl;
    preParse(root, tree);
    cout << endl;
    cout << "Inorder" << endl;
    inParse(root, tree);
    cout << endl;
    cout << "Postorder" << endl;
    postParse(root, tree);
    cout << endl;
}

