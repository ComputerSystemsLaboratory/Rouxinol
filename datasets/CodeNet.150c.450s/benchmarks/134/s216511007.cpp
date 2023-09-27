#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define MAX 100100
#define NIL -1
using namespace std;

typedef struct node{
  int parent, left, right;
}Node;

Node T[MAX];

int seekroot(int id){
    while (T[id].parent != NIL){
        id = T[id].parent;
    }
    return id;
}

void PreParse(int id){
    if (id == NIL){
        return;
    }
    cout << " " << id;
    PreParse(T[id].left);
    PreParse(T[id].right);
}

void InParse(int id){
    if (id == NIL){
        return;
    }
    InParse(T[id].left);
    cout << " " << id;
    InParse(T[id].right);
}

void PostParse(int id){
    if (id == NIL){
        return;
    }
    PostParse(T[id].left);
    PostParse(T[id].right);
    cout << " " << id;
}

int main(){
    int n;
    cin >> n;
    rep(i, n){// init
        T[i].parent = NIL;
        T[i].left = NIL;
        T[i].right = NIL;
    }

    int id;
    int l;
    int r; 

    rep(i, n){
        cin >> id >> l >> r;
        if (l != -1){
            T[id].left = l;
            T[l].parent = id;
        }
        if (r != -1){
            T[id].right = r;
            T[r].parent = id;
        }
    }
    
    int root = seekroot(0);

    cout << "Preorder" << endl;
    PreParse(root);
    cout << endl;

    cout << "Inorder" << endl;
    InParse(root);
    cout << endl;

    cout << "Postorder" << endl;
    PostParse(root);
    cout << endl;

    return 0;
}
