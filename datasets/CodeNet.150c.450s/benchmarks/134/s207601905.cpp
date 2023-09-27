//
// Created by ?????°?????? on 2016/04/08.
//

#include <iostream>
using namespace std;
const int MAX = 10000;
const int NIL = -1;

struct node{
    int parent;
    int right;
    int left;
};

node T[MAX];

void preParse(int u){
    if(u == NIL) return;
    cout << " " << u  ;
    preParse(T[u].left);
    preParse(T[u].right);
}

void inParse(int u){
    if (u == NIL) return;
    inParse(T[u].left);
    cout << " " << u ;
    inParse(T[u].right);
}

void postParse(int u){
    if (u == NIL) return;
    postParse(T[u].left);
    postParse(T[u].right);
    cout << " " << u ;
}

int main(){
    int n,root,v,l,r;
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        T[i].parent = T[i].left = T[i].right = NIL;
    }

    for (int i = 0; i < n ; ++i) {
        cin >> v >> l >> r;
        T[v].left = l;
        T[v].right = r;
        //what is T[l]'s parent?
        if(l != NIL ) T[l].parent = v;
        if(r != NIL ) T[r].parent = v;
    }

    //isRoot
    for (int i = 0; i < n ; ++i) {
        if(T[i].parent == NIL) root = i;
    }

    //preParse
    cout << "Preorder" << endl;
    preParse(root);
    cout << endl;

    //inParse
    cout << "Inorder" << endl;
    inParse(root);
    cout << endl;

    //postParse
    cout << "Postorder" << endl;
    postParse(root);
    cout << endl;

    return 0;
}