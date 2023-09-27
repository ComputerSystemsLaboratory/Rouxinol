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
    Node *x = root;
    Node *y = NIL;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->right = NIL;
    z->left = NIL;

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

bool find(int k){
    Node *x = root;
    while(x != NIL){
        if (k == x->key) return true;
        else if (k < x->key) x = x->left;
        else x = x->right;
    }
    return false;
}

void inorder(Node *u){
    if (u == NULL) return;
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
}

void preorder(Node *u){
    if (u == NULL) return;
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
        if (s == "print"){
            inorder(root); cout << endl;
            preorder(root); cout << endl;
        }
        else{
            int key; cin >> key;
            if (s == "insert") insert(key);
            else{
                if (find(key) == true)  cout << "yes" << endl;
                else cout << "no" << endl;
            }
        }
    }
    return 0;
}
