#include <bits/stdc++.h>
#define rep(i, n) for(i = 0; i < n; i++)
using namespace std;

struct Node {
    int parent;
    int lc, rc;
};

#define NIL -1

vector<Node> tree;

void pre(int n) {
    if (n == NIL) return;
    cout << " " << n;
    pre(tree[n].lc);
    pre(tree[n].rc);
}

void in(int n) {
    if (n == NIL) return;
    in(tree[n].lc);
    cout << " " << n;
    in(tree[n].rc);
}

void post(int n) {
    if (n == NIL) return;
    post(tree[n].lc);
    post(tree[n].rc);
    cout << " " << n;
}

int main() {
    int n;
    cin >> n;
    int i;
    rep(i, n) { // init
        Node node;
        node.parent = NIL;
        node.lc = NIL;
        node.rc = NIL;
        tree.push_back(node);
    }

    rep(i, n) { // input
        int id, l, r;
        cin >> id >> l >> r;
        tree[id].lc = l;
        tree[id].rc = r;
        if (l != NIL) tree[l].parent = id;
        if (r != NIL) tree[r].parent = id;
    }

    // search root
    int root;
    rep(i, n) {
        if (tree[i].parent == NIL)
            root = i;
    }

    cout << "Preorder" << endl;
    pre(root);
    cout << endl;
    cout << "Inorder" << endl;
    in(root);
    cout << endl;
    cout << "Postorder" << endl;
    post(root);
    cout << endl;

    return 0;
}

