#include <iostream>
using namespace std;
#define MAXN 25
#define NIL -1

struct Node {int parent, left, right; };

struct Node T[MAXN];

void preorder(int root){
    cout << " " << root;
    if (T[root].left != NIL){
        //cout << " " << T[root].left;
        preorder(T[root].left);
    }
    if (T[root].right != NIL){
        //cout << " " << T[root].right;
        preorder(T[root].right);
    }
}

void inorder(int root){
    if (T[root].left != NIL){
        //cout << " " << T[root].left;
        inorder(T[root].left);
    }
    cout << " " << root;
    if (T[root].right != NIL){
        //cout << " " << T[root].right;
        inorder(T[root].right);
    }
}

void postorder(int root){
    if (T[root].left != NIL){
        //cout << " " << T[root].left;
        postorder(T[root].left);
    }
    if (T[root].right != NIL){
        //cout << " " << T[root].right;
        postorder(T[root].right);
    }
    cout << " " << root;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; ++i){
        T[i].parent = NIL;
        T[i].left = NIL;
        T[i].right = NIL;
    }
    for(int i=0; i<n; ++i){
        int node, left, right; cin>>node>>left>>right;
        T[node].left = left;
        T[node].right = right;
        if (left!=NIL) T[left].parent = node;
        if (right!=NIL) T[right].parent = node;
    }
    
    int root = 0;
    for(int i=0; i<n; ++i){
        if (T[i].parent == NIL) root = i;
    }
    
    cout << "Preorder" << endl;
    preorder(root);
    cout << endl;
    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(root);
    cout << endl;
}