#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;

struct Node{
    int key;
    Node *parent,*left,*right;
};

Node *NIL, *root;

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while(x != NIL){
        y = x;
        if(z->key < x->key) //xはzのkey値と比較するためのもの
            x=x->left;
        else
            x=x->right;
    }
    z->parent=y;
    if(y == NIL){
        root = z;
    }
    else if(z->key < y->key)
        y->left = z;
    else
        y->right = z;
}
    
void inorder(Node *u){
    if(u == NIL) return;
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
}
void preorder(Node *u){
    if(u == NIL)return;
    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}
    
int main() 
{
    int n,x;
    string com;
  	cin >> n;
    rep(i,n){
        cin >> com;
        if(com == "insert"){
            cin >> x;
            insert(x);
        }
        else if(com == "print"){
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
}
