#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *p, *l, *r;
};

Node *root, *NIL;

void insert(int n);
Node* find(int n);
void print(Node *r);
void inorder(Node *r);
void preorder(Node *r);

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string com; cin >> com;
        if(com == "insert"){
            int num; cin >> num;
            insert(num);
        }
        if(com == "print"){
            print(root);
        }
        if(com == "find"){
            int num; cin >> num;
            if(find(num) != NIL){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }
    }
}


void insert(int n){
    Node *y = NIL; //見つかった挿入箇所の親
    Node *x = root; //根から挿入箇所を調べていく
    Node *z;
    z = (Node *)malloc(sizeof(Node));
    z->key = n;
    z->l = NIL; z->r = NIL;

    while(x != NIL){ //一番下
        y = x; //調べているところのおや
        if(z->key < x->key){ //調べてる場所より小さい
            x = x->l;
        }else{
            x = x->r;
        }
    }
    z->p = y; //

    if(y == NIL){
        root = z;
    }else if(z->key  < y->key){
        y->l = z;
    }else{
        y->r = z;
    }
}

void print(Node *r){
    inorder(r);
    cout << endl;
    preorder(r);
    cout << endl;
}

void inorder(Node *r){
    if(r == NIL) return;
    inorder(r->l);
    cout << " " << r->key;
    inorder(r->r);
}

void preorder(Node *r){
    if(r == NIL) return;
    cout << " " << r->key;
    preorder(r->l);
    preorder(r->r);
}

Node* find(int n){
    Node *x = root;
    while(x != NIL && x->key != n){
        if(n < x->key){
            x = x->l;
        }else{
            x = x->r;
        }
    }
    return x;
}
