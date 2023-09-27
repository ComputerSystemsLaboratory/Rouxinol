#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *p,*l,*r;
};

Node *root,*NIL;

void insert(int k){
    Node *y=NIL;
    Node *x=root;
    Node *z;

    z=(Node*)malloc(sizeof(Node));
    z->key=k;
    z->l=z->r=NIL;
    while(x!=NIL){
        y=x;
        if(z->key<x->key){
            x=x->l;
        }
        else{
            x=x->r;
        }
    }
    z->p=y;
    if(y==NIL){
        root=z;
    }
    else if(z->key<y->key){
        y->l=z;
    }
    else{
        y->r=z;
    }
}

Node* find(int k){
    Node *x;
    x=root;
    while(x!=NIL&&(x->key)!=k){
        if(k<x->key){
            x=x->l;
        }
        else{
            x=x->r;
        }
    }
    return x;
}

void inorder(Node *u){
    if(u==NIL) return;
    inorder(u->l);
    cout<<' '<<(u->key);
    inorder(u->r);
}

void preorder(Node *u){
    if(u==NIL) return;
    cout<<' '<<(u->key);
    preorder(u->l);
    preorder(u->r);
}

int main(){
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        char com[10];
        int a;
        scanf("%s%d",com,&a);
        if(com[0]=='p'){
            inorder(root);
            cout<<endl;
            preorder(root);
            cout<<endl;
        }
        else if(com[0]=='i'){
            insert(a);
        }
        else{
            if(find(a)==NIL) cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }
    }
}
