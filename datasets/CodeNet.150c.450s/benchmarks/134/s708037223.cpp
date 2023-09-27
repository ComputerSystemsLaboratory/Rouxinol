#include <iostream>

using namespace std;

//
const int MAX = 25;
const int NIL = -1;

struct Node {
    int parent = NIL;
    int left = NIL;
    int right = NIL;
};

Node T[MAX];

//
void preorder(int u) {
    cout << " " << u;
    if (T[u].left != NIL) preorder(T[u].left);
    if (T[u].right != NIL) preorder(T[u].right);
}

void inorder(int u) {
    if (T[u].left != NIL) inorder(T[u].left);
    cout << " " << u;
    if (T[u].right != NIL) inorder(T[u].right);
}

void postorder(int u) {
    if (T[u].left != NIL) postorder(T[u].left);
    if (T[u].right != NIL) postorder(T[u].right);
    cout << " " << u;
}

//
int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int id;
        cin >> id;
        cin >> T[id].left;
        cin >> T[id].right;
        T[T[id].left].parent = T[T[id].right].parent = id;
    }

    for (int i = 0; i < n; i++) {
        if (T[i].parent == NIL) {
            //
            cout << "Preorder" << endl;
            preorder(i);
            cout << endl;
            //
            cout << "Inorder" << endl;
            inorder(i);
            cout << endl;
            //
            cout << "Postorder" << endl;
            postorder(i);
            cout << endl;
        }
    }
}
