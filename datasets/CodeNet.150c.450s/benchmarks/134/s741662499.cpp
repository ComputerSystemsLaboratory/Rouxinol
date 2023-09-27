#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;
constexpr int NIL = -1;

struct Node { int parent, left, right; };
Node T[100];

void preorder(int id){
    cout << ' ' << id;
    if(T[id].left != NIL) preorder(T[id].left);
    if(T[id].right != NIL) preorder(T[id].right);
    return;
}

void inorder(int id){
    if(T[id].left != NIL) inorder(T[id].left);
    cout << ' ' << id;
    if(T[id].right != NIL) inorder(T[id].right);
    return;
}

void postorder(int id){
    if(T[id].left != NIL) postorder(T[id].left);
    if(T[id].right != NIL) postorder(T[id].right);
    cout << ' ' << id;
    return;
}

int main(){
    int n; cin >> n;
    memset(T, -1, 100*sizeof(Node));

    rep(i, 0, n){
        int id, left, right;
        cin >> id >> left >> right;
        T[id].left = left;
        T[id].right = right;
        T[left].parent = id;
        T[right].parent = id;
    }

    int root;
    rep(i, 0, n) if(T[i].parent == NIL) root = i;

    cout << "Preorder" << endl;
    preorder(root);
    cout << "\nInorder" << endl;
    inorder(root);
    cout << "\nPostorder" << endl;
    postorder(root);
    cout << endl;
    return 0;
}
