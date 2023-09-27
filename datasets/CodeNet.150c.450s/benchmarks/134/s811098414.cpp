#include <iostream>
using namespace std;

const int nil = -1;
struct Node {int p, l, r;};
Node T[1000];
int n;

void preParse(int u) {
    cout << " " << u;
    if (T[u].l != nil) preParse(T[u].l);
    if (T[u].r != nil) preParse(T[u].r);
}

void inParse(int u) {
    if (T[u].l != nil) inParse(T[u].l);
    cout << " " << u;
    if (T[u].r != nil) inParse(T[u].r);
}

void postParse(int u) {
    if (T[u].l != nil) postParse(T[u].l);
    if (T[u].r != nil) postParse(T[u].r);
    cout << " " << u;
}

int main(void) {
    int p, l, r, root;
    cin >> n;
    for (int i = 0; i < n; i++) T[i].p = T[i].l = T[i].r = nil;
    for (int i = 0; i < n; i++) {
        cin >> p >> l >> r;
        T[p].l = l;
        T[p].r = r;
        if (l != nil) T[l].p = p;
        if (r != nil) T[r].p = p;
    }

    for (int i = 0; i < n; i++)
        if (T[i].p == nil) root = i;

    cout << "Preorder" << endl;
    preParse(root);
    cout << endl << "Inorder" << endl;
    inParse(root);
    cout << endl << "Postorder" << endl;
    postParse(root);
    cout << endl;

    return 0;
}