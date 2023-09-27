#include <iostream>

using namespace std;

const int kMaxN = 25;
const int NIL = -1;

struct Node {
    int p;
    int l;
    int r;
};

Node T[kMaxN];
int n;

void preParse(int u) {
    if (u == NIL) {
        return;
    }
    cout << " " << u;
    preParse(T[u].l);
    preParse(T[u].r);
}

void inParse(int u) {
    if (u == NIL) {
        return;
    }
    inParse(T[u].l);
    cout << " " << u;
    inParse(T[u].r);
}

void postParse(int u) {
    if (u == NIL) {
        return;
    }
    postParse(T[u].l);
    postParse(T[u].r);
    cout << " " << u;
}

int main() {
    cin >> n;
    int v, l, r, root;
    Node node;

    for (int i = 0; i < n; i++) {
        T[i].p = NIL;
    }

    for (int i = 0; i < n; i++) {
        cin >> v >> l >> r;
        T[v].l = l;
        T[v].r = r;
        if (l != NIL) {
            T[l].p = v;
        }
        if (r != NIL) {
            T[r].p = v;
        }    
    }

    for (int i = 0; i < n; i++) {
        if (T[i].p == NIL) {
            root = i;
        }
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
}