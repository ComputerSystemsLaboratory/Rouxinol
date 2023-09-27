#include <iostream>
using namespace std;
#define MAX 50
#define NIL -1
#define rep(i, n) for(int i=0;i<n;i++)

struct Node {int parent, left,right;};
Node T[MAX];

void preWalk(int u){
    if(u==NIL) return;
    cout << " " << u;
    preWalk(T[u].left);
    preWalk(T[u].right);
}
void InWalk(int u){
    if(u==NIL) return;
    InWalk(T[u].left);
    cout << " " << u;    
    InWalk(T[u].right);
}
void PostWalk(int u){
    if(u==NIL) return;
    PostWalk(T[u].left);
    PostWalk(T[u].right);
    cout << " " << u;
}

int main(void){
    int n,l,r,v,root=0;
    cin >> n;
    rep(i, n){
        T[i].parent = NIL;
    }

    rep(i, n){
        cin >>v >> l >> r;
        T[v].left = l;
        T[v].right = r;
        if(l != NIL) T[l].parent=v;
        if(r != NIL) T[r].parent=v;
    }

    rep(i, n){
        if(T[i].parent == NIL) root = i;
    }

    cout<<"Preorder" << endl;
    preWalk(root);
    cout <<endl;
    cout<<"Inorder" << endl;
    InWalk(root);
    cout <<endl;
    cout<<"Postorder" << endl;
    PostWalk(root);
    cout <<endl;
    return 0;
}