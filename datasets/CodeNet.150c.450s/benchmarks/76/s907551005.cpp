#include <bits/stdc++.h>
using namespace std;

struct node{
    int value;
    node *p,*l,*r;
};

node *root, *NIL;

void insert(int value){
    node *y, *x;
    y = NIL;
    x = root;
    node *n = (node *)malloc(sizeof(node));
    n->value = value;
    n->l = n->r = NIL;
    while(x != NIL){
        y = x;
        if(n->value < x->value)
            x = x->l;
        else
            x = x->r;
    }
    n->p = y;
    if(y == NIL) root = n;
    else{
        //x = n;
        if(n->value < y->value) y->l = n;
        else y->r = n;
    }
}


void Preorder(node *u){
    if(u==NIL) return;
    printf(" %d",u->value);
    Preorder(u->l);
    Preorder(u->r);
}

void Inorder(node *u){
    if(u==NIL) return;
    Inorder(u->l);
    printf(" %d",u->value);
    Inorder(u->r);
}

void print(){
    Inorder(root);
    printf("\n");
    Preorder(root);
    printf("\n");
}

void find(int value){
    node *x = root;
    while(x != NIL){
        if(value == x->value){
            printf("yes\n");
            return;
        }
        else{
            if(value<x->value){
                x = x->l;
            }
            else x = x->r;
        }
    }
    printf("no\n");
    return;
}

int main(){
    int n, value;
    scanf("%d",&n);
    root = (node *)malloc(sizeof(node));
    root = NIL;
    //root->l = root->r = NIL;
    string cmd;
    for(int i=0;i<n;++i){
        cin >> cmd;
        if(cmd == "insert"){
            scanf("%d",&value);
            insert(value);
        }
        else if(cmd == "print"){
            print();
        }
        else if(cmd == "find"){
            scanf("%d",&value);
            find(value);
        }
    }
    return 0;
}

