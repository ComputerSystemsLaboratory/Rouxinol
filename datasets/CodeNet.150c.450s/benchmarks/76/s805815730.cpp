#include <iostream>
using namespace std;
 
typedef struct Node{
    int key;
    Node *parent, *left, *right;
} Node;
 
Node *root,*NIL;
 
void insert(int k){
    Node *z = new Node;
     
    z->key = k;
    z->left = NIL;
    z->right = NIL;
 
    Node *y = NIL;
    Node *x = root;
    while( x != NIL){
        y=x;
        if(z->key < x->key) x=x->left;
        else x=x->right;
    }
    z->parent = y;
     
    //親yの処理
    if(y==NIL)root=z;
    else {
        if(z->key < y->key)y->left=z;
        else y->right=z;
    }
}
 
void isfound(Node*u,int k){
    while(u!=NIL && k!=u->key){
        if(k < u->key) u = u->left;
        else u = u->right;
    }
    if(u!=NIL)cout << "yes" << endl;
    else cout << "no" << endl;
}
 
void Preorder(Node *u){
    if( u==NIL ) return;
    cout << " " << u->key;
    Preorder(u->left);
    Preorder(u->right);
}
 
void Inorder(Node *u){
    if( u== NIL ) return;
    Inorder(u->left);
    cout << " " << u->key;
    Inorder(u->right);
}
 
void deleteBST(Node *u){
    if(u == NIL)return;
    deleteBST(u->left);
    deleteBST(u->right);
    if(u->left==NIL && u->right==NIL){
        u->parent=NIL;
        delete u;
    }
}
 
int main(){
    int n;
    string com;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> com;
        if(com[0]=='i'){
            int k;
            cin >> k;
            insert(k);
        }else if(com[0]=='p'){
            Inorder(root);cout << endl;
            Preorder(root);cout << endl;
        }else {
            int k;
            cin >> k;
            isfound(root,k);
        }
    }
     
    deleteBST(root);
 
    return 0;
}
