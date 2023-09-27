#include <iostream>
using namespace std;
#define NIL -1
#define MAX 26

struct Node {
    int p, l, r;
};
Node T[MAX];

// Preorder Tree Walk
void preParse(int id) {
    if (id == NIL) return;
    cout << " " << id;
    preParse(T[id].l);
    preParse(T[id].r);
}

// Inorder Tree Walk
void inParse(int id) {
    if (id == NIL) return;
    inParse(T[id].l);
    cout << " " << id;
    inParse(T[id].r);
}

// Postorder Tree Walk
void postParse(int id) {
    if (id == NIL) return;
    postParse(T[id].l);
    postParse(T[id].r);
    cout << " " << id;
}

void printTree(int r) {
    cout << "Preorder" << endl;
    preParse(r);
    cout << endl;
    cout << "Inorder" << endl;
    inParse(r);
    cout << endl;
    cout << "Postorder" << endl;
    postParse(r);
    cout << endl;
}

int main() {
    int n, id, l, r, i;

    cin >> n;
    for (i=0; i < n; i++) T[i].p = T[i].l = T[i].r = NIL;
    
    for (i=0; i < n; i++) {
        cin >> id >> l >> r;
        T[id].l = l;
        T[id].r = r;
        if (l != NIL) T[l].p = id;
        if (r != NIL) T[r].p = id;
    }

    for (i=0; i < n; i++) {
        if (T[i].p == NIL) r = i;
    }
    printTree(r);

    return 0;
}
