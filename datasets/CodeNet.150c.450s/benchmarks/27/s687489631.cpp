#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();
typedef long long ll;

struct Node{ 
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL){
        y = x;
        if (z->key < x->key) x = x->left;
        else x = x->right;
    }
    z->parent = y;
    if (y == NIL) root = z;
    else if (z->key < y->key) y->left = z;
    else y->right = z;
}

void inorder(Node *u){
    if (u == NIL) return;
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
}

void preorder(Node *u){
    if (u == NIL) return;
    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}

int main(void)
{
    int n;
    string s;
    cin >> n;
    rep(i,n){
        cin >> s;
        if (s == "insert"){
            int key; cin >> key;
            insert(key);
        }
        else{
            inorder(root); cout << endl;
            preorder(root); cout << endl;
        }
    }
    return 0;
}
