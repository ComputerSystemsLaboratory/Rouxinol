#include <bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 30

struct Node{
    int parent, left, right;
};
Node T[MAX];
int n;
void preorder(int u){
    if(u == NIL) return;
    printf(" %d", u);
    preorder(T[u].left);
    preorder(T[u].right);
}
void inorder(int u){
    if(u == NIL) return;
    inorder(T[u].left);
    printf(" %d", u);
    inorder(T[u].right);
}
void postorder(int u){
    if(u == NIL) return;
    postorder(T[u].left);
    postorder(T[u].right);
    printf(" %d", u);
}
int main(){
    cin >> n;
    int v, l, r, root;
    for(int i = 0; i < n; i++){
        T[i].parent = NIL;
    }
    for(int i = 0; i < n; i++){
        cin >> v >> l >> r;
        T[v].left = l;
        T[v].right = r;
        if(l != NIL) T[l].parent = v;
        if(r != NIL) T[r].parent = v;
    }
    for(int i = 0; i < n; i++){
        if(T[i].parent == NIL) root = i;
    }
    cout << "Preorder" << endl;
    preorder(root);
    cout << endl << "Inorder" << endl;
    inorder(root);
    cout << endl << "Postorder" << endl;
    postorder(root);
    cout << endl;
    return 0;
}

