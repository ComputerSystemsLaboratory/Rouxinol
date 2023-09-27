#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>

using namespace std;

struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *nil;

void Insert(int k) {
    Node *y=nil;
    Node *x=root;
    Node *z;

    z=(Node*)malloc(sizeof(Node));
    z->key = k;
    z->left = nil;
    z->right = nil;

    while(x!=nil){
        y=x;
        if(z->key < x->key) {
            x = x->left;
        }else{
            x=x->right;
        }
    }
    z->parent = y;
    if(y==nil){
        root=z;
    }else{
        if((z->key)<(y->key)){
            y->left = z;
        }else{
            y->right = z;
        }
    }
}

void Inorder(Node *u) {
    if(u==nil) return;
    Inorder(u->left);
    cout<<" "<<(u->key);
    Inorder(u->right);
}

void Preorder(Node *u) {
    if(u==nil) return;
    cout<<" "<<(u->key);
    Preorder(u->left);
    Preorder(u->right);
}

int main() {

    int n,x;
    cin>>n;

    string command;
    for(int i=0;i<n;i++){
        cin >> command;
        if(command=="insert"){
            cin>>x;
            Insert(x);
            }else if(command=="print"){
            Inorder(root);
            cout<<endl;
            Preorder(root);
            cout<<endl;
        }
    }
    return 0;
}
