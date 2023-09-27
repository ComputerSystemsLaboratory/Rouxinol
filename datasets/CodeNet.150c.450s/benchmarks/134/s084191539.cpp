#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define ll long long
#define NIL -1

using namespace std;

struct Node{
    int parent,left,right;
};

Node T[25];

void preOrder(int u){
    if (u==NIL) return;
    cout<<" "<<u;
    preOrder(T[u].left);
    preOrder(T[u].right);
}

void inOrder(int u){
    if(u==NIL) return;
    inOrder(T[u].left);
    cout<<" "<<u;
    inOrder(T[u].right);
}

void postOrder(int u){
    if(u==NIL) return;
    postOrder(T[u].left);
    postOrder(T[u].right);
    cout<<" "<<u;
}

int main(){
    int n;
    int u;
    int root;
    cin>>n;

    rep(i,n) T[i].parent=NIL;
    
    rep(i,n){
        cin>>u;
        cin>>T[u].left>>T[u].right;
        if(T[u].left!=NIL) T[T[u].left].parent=u;
        if(T[u].right!=NIL) T[T[u].right].parent=u;
    }

    root=0;
    while(u!=NIL){
        root=u;
        u=T[u].parent;
    }
    
    cout<<"Preorder"<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"Inorder"<<endl;
    inOrder(root);
    cout<<endl;

    cout<<"Postorder"<<endl;
    postOrder(root);
    cout<<endl;

    return 0;
}
