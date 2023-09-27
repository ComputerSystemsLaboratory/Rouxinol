#include <bits/stdc++.h>
#define rep(i,n) for(i=0;i<n;i++)
#define NIL -1
using namespace std;

typedef struct{
    int key;
    int right;
    int left;
    int parent;
}node;

void insert(vector<node> &T, int i, int *root) {
    int x=*root, y = NIL;
    while(x != NIL){
        y = x;
        T[i].key<T[x].key?x=T[x].left:x=T[x].right;
    }
    T[i].parent = y;
    if(y == NIL) *root = i;
    else if(T[i].key < T[y].key) T[y].left = i;
    else T[y].right = i;
}

void inorder(vector<node> &T, int i){
    if(T[i].left != NIL) 
        inorder(T,T[i].left);
    cout << " " << T[i].key;
    if(T[i].right != NIL)
        inorder(T,T[i].right);
}

void preorder(vector<node> &T, int i){
    cout << " " << T[i].key;
    if(T[i].left != NIL)
        preorder(T,T[i].left);
    if(T[i].right != NIL)
        preorder(T,T[i].right);
}

int main(void) {
    int n,i,root=NIL;
    string od;
    vector<node> T;
    cin >> n;
    T.resize(n);
    rep(i,n) {
        T[i].key = 0;
        T[i].right = NIL;
        T[i].left = NIL;
        T[i].parent = NIL;
    }
    rep(i,n){
        cin >> od;
        if(od == "insert"){
            cin >> T[i].key;
            insert(T,i,&root);
        } else if(od == "print") {
            inorder(T,root);
            cout << endl;
            preorder(T,root);
            cout << endl;
        }
    }
    return 0;
}