#include <bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 25

struct Node {
    int parent, left, right;
};

int n;
vector<Node> T(MAX);

int root() {
    int root;
    for (int i = 0; i < n; i++) {
        if (T.at(i).parent == NIL) {
            root = i;
        }
    }

    return root;
}

void preParse(int u) {
    if (u == NIL) {
        return;
    }

    printf(" %d", u);
    preParse(T.at(u).left);
    preParse(T.at(u).right);
}

void inParse(int u) {
    if (u == NIL) {
        return;
    }

    inParse(T.at(u).left);
    printf(" %d", u);
    inParse(T.at(u).right);
}

void postParse(int u) {
    if (u == NIL) {
        return;
    }

    postParse(T.at(u).left);
    postParse(T.at(u).right);
    printf(" %d", u);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        T.at(i).parent = NIL;
    }
    for (int i = 0; i < n; i++) {
        int u, l, r;
        cin >> u >> l >> r;
        T.at(u).left = l;
        T.at(u).right = r;
        if (l != NIL) {
            T.at(l).parent = u;
        }
        if (r != NIL) {
            T.at(r).parent = u;
        }
    }

    cout << "Preorder" << endl;
    preParse(root());
    cout << endl;
    
    cout << "Inorder" << endl;
    inParse(root());
    cout << endl;

    cout << "Postorder" << endl;
    postParse(root());
    cout << endl;
}
