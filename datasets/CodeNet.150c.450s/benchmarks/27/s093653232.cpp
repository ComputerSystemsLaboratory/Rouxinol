#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
using namespace std;

struct node{
    int key;
    node *p,*l,*r;
};

node *root,*NIL;


void insert(int k){
    node *z;
    z = (node *)malloc(sizeof(node)); //なにこれ
    z->key=k;
    z->l=NIL;
    z->r=NIL;
    node *y=NIL;
    node *x=root;
    while(x != NIL){
        y=x;
        if(k < x->key) x = x->l;
        else x = x->r;
    }
    z->p=y;

    if(y==NIL) root=z;
    else if(k < y->key) y->l=z;
    else y->r=z;
}

void Preorder(node *u){
    cout << ' ' << u->key;
    if(u->l != NIL) Preorder(u->l);
    if(u->r != NIL) Preorder(u->r);
}

void Inorder(node *u){
    if(u->l != NIL) Inorder(u->l);
    cout << ' ' << u->key;
    if(u->r != NIL) Inorder(u->r);
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s == "insert"){
            int k;
            cin >> k;
            insert(k);
        }
        else{
            Inorder(root);
            cout << endl;
            Preorder(root);
            cout << endl;
        }
    }
}
