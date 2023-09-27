#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;
struct Node{Node *parent, *left, *right; int key;};
Node T[10000];
int D[10000];
int H[10000];

Node *root, *NIL;


void print_preorder(Node *r){
    if(r==NIL) return;
    cout<<" "<<r->key;
    print_preorder(r->left);
    print_preorder(r->right);
}

void print_inorder(Node *r){
    if(r==NIL) return;
    print_inorder(r->left);
    cout<<" "<<r->key;
    print_inorder(r->right);
}

//void print_postorder(int r){
//    if(r==-1) return;
//    print_postorder(T[r].left);
//    print_postorder(T[r].right);
//    cout<<" "<<r;
//}

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z=(Node *)malloc(sizeof(Node));
    z->key=k;
    z->left=NIL;
    z->right=NIL;

    while(x!=NIL){
        y=x;
        if(z->key<x->key){
            x=x->left;
        }else{
            x=x->right;
        }
    }
    z->parent=y;
    if(y==NIL){
        root = z;
    }else{
        if(z->key<y->key){
            y->left=z;
        }else{
            y->right=z;
        }
    }
}

void find(int k){
    Node *x = root;
    while(x!=NIL){
        if(x->key==k){
            cout<<"yes"<<endl;
            return;
        }else if(x->key>k){
            x=x->left;
        }else if(x->key<k){
            x=x->right;
        }
    }
    cout<<"no"<<endl;
    return;
}

int main()
{
    int n,i,x;
    string com;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>com;
        if(com=="insert"){
            cin>>x;
            insert(x);
        }else if(com=="print"){
            print_inorder(root);
            cout<<endl;
            print_preorder(root);
            cout<<endl;

        }else if(com=="find"){
            cin>>x;
            find(x);
        }
    }

    return 0;
}
