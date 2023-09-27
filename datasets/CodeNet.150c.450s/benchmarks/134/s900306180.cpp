#include<iostream>
using namespace std;

#define MAX 25
#define NIL -1

struct Node{
    int p,l,r;
};

struct Node T[MAX];

void print(int u){
    cout << " " << u;
}

void preorder(int u){
    if(u == NIL)    return;

    print(u);
    preorder(T[u].l);
    preorder(T[u].r);
}

void inorder(int u){
    if(u == NIL)     return;

    inorder(T[u].l);
    print(u);
    inorder(T[u].r);
}

void postorder(int u){
    if(u == NIL)     return;

    postorder(T[u].l);
    postorder(T[u].r);
    print(u);
}

int main(){
    int n, id, left, right;
    cin >> n;
    for(int i = 0; i < n; i++){
        T[i].p = NIL;
    }

    for(int i = 0; i < n; i++){
        cin >> id >> left >> right;
        T[id].l = left;
        T[id].r = right;
        if(left != NIL) T[left].p = id;
        if(right != NIL) T[right].p = id;
    }

    int root = 0;
    while(T[root].p != NIL){
        root = T[root].p;
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

    return 0;
}
