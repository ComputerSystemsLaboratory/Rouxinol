
#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int key;
    Node *left,*right,*parent;
};

Node *gRoot,*NIL;

Node *find(Node* u,int value){
    while(u != NIL && value != u->key){
        if(value < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}

void insert(int value){
    Node *y = NIL;
    // 親
    Node *x = gRoot;
    // 自身
    Node *z;
    z = (Node*)malloc(sizeof(Node));
    z->key = value;
    z->left = NIL;
    z->right = NIL;
    
    // rootから自身を挿入する場所を探す
    while(x != NIL){
        // rootから検索
        y = x;
        if(z->key < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    
    z->parent = y;
    // 親に子を持たせる
    if(y == NIL){
        gRoot = z;
    }else{
        if(z->key < y->key){
            y->left = z;
        }else{
            y->right = z;
        }
    }
}
// 先行順巡回
void preOrder(Node *u){
    if(u == NIL)return;
    printf(" %d",u->key);
    preOrder(u->left);
    preOrder(u->right);
}

// 中間順巡回
void inOrder(Node *u){
    if(u == NIL)return;
    inOrder(u->left);
    printf(" %d",u->key);
    inOrder(u->right);
}

int main(){
    int n,x;
    string com;
    
    cin >> n;
    for(int i = 0;i < n;++i){
        cin >> com;
        if(com[0] == 'f'){
            cin >> x;
            Node *t = find(gRoot,x);
            if(t != NIL) cout << "yes\n";
            else cout << "no\n";
        }
        if(com == "insert"){
            cin >> x;
            insert(x);
        }
        else if(com == "print"){
            inOrder(gRoot);
            cout << "\n";
            preOrder(gRoot);
            cout << "\n";
        }
    }
    return 0;
}

