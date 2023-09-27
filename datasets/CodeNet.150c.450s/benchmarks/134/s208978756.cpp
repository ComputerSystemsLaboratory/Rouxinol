#include <iostream>
#define MAX 100000
#define NIL (-1)
using namespace std;

struct Node {
    int parent;
    int right;
    int left;
};

Node T[MAX];

void pre(int u) {
    if ( u == NIL ) return;

    cout << " " << u;
    pre(T[u].left);
    pre(T[u].right);
}

void in(int u) {
    if ( u == NIL ) return;

    in(T[u].left);
    cout << " " << u;
    in(T[u].right);
}

void post(int u) {
    if ( u == NIL ) return;

    post(T[u].left);
    post(T[u].right);
    cout << " " << u;
}

int main() {
    int n;
    int id, l, r;
    cin >> n;
    for ( int i = 0; i < n; ++i ) {
        T[i].parent = NIL;
    }
    for ( int i = 0; i < n; ++i ) {
        cin >> id;
        cin >> l;
        cin >> r;
        T[id].left = l;
        T[id].right = r;
        if ( l != NIL ) T[l].parent = id;
        if ( r != NIL ) T[r].parent = id;
    }

    int root = 0;

    for ( int i = 0; i < n; ++i ) {
        if ( T[i].parent == NIL ) root = i;
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
