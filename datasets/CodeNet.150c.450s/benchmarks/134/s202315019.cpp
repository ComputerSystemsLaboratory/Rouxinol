#include <bits/stdc++.h>
using namespace std;

#define NIL -1

struct Node{ int p, l, r; };

Node tree[10000];
int n;

void preParse(int id){
    if(id == NIL) return;
    cout << " " << id;
    preParse(tree[id].l);
    preParse(tree[id].r);
}
void inParse(int id){
    if(id == NIL) return;
    inParse(tree[id].l);
    cout << " " << id;
    inParse(tree[id].r);
}
void postParse(int id){
    if(id == NIL) return;
    postParse(tree[id].l);
    postParse(tree[id].r);
    cout << " " << id;
}

int main(){
    int v, l, r, root = 0;
    cin >> n;

    for(int i=0; i<n; i++) tree[i].p = NIL;

    for(int i=0; i<n; i++){
        cin >> v >> l >> r;
        tree[v].l = l;
        tree[v].r = r;
        if(l != NIL) tree[l].p = v;
        if(r != NIL) tree[r].p = v;
    }

    for(int i=0; i<n; i++){
        if(tree[i].p == NIL) root = i;
    }

    cout << "Preorder" << endl;
    preParse(root);
    cout << endl;
    cout << "Inorder" << endl;
    inParse(root);
    cout << endl;
    cout << "Postorder" << endl;
    postParse(root);
    cout << endl;

    return 0;
}
