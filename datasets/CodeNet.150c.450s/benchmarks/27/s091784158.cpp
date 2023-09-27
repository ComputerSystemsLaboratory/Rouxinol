#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
#include <string>
#include <cmath>
#include <iomanip>
#include <queue>
#include <list>
#include <stack>
#include <cctype>
#include <cmath>

using namespace std;

/* typedef */

typedef long long ll;

/* constant */
// const int NIL = -1;
const int INF = 1 << 30;
const int MAX = 500000;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* global variables */
struct Node {
    Node *parent, 
         *left, 
         *right;
    int key;
};

Node *root, *NIL;

/* function */
void insert(int z);
void preorder(Node* v);
void inorder(Node* v);

/* main */
int main(){

    // main
    int n, key;
    cin >> n;
    string man;
    for (int i = 0; i < n; i++) {
        cin >> man;
        if (man == "print") {
            inorder(root); cout << '\n';
            preorder(root); cout << '\n';
        }
        else {
            cin >> key;
            insert(key);
        }
    }

}

void insert(int key) {

    // init new node
    // Node *z = (Node *)malloc(sizeof(Node));
    Node *z = new Node();
    z->left = NIL;
    z->right = NIL;
    z->parent = NIL;

    Node *y = NIL;  // parent of x(root)
    Node *x = root; // root of 'T'

    while (x != NIL) {
        y = x;  // set parent
        if (key < x->key) {
            x = x->left;
        }
        else {
            x = x->right;
        }
    }

    z->parent = y;
    z->key = key;

    if (y == NIL) {  // 'T' is empty
        root = z;
    }
    else if (key < y->key) {
        y->left = z;  // z is y's left
    }
    else if (key >= y->key) {
        y->right = z;  // z is y's right
    }
}

void preorder(Node* v) {
    cout << ' ' << v->key;
    if (v->left != NIL) 
        preorder(v->left);
    if (v->right != NIL) 
        preorder(v->right);

}

void inorder(Node* v) {
    if (v->left != NIL) 
        inorder(v->left);
    cout << ' ' << v->key;
    if (v->right != NIL) 
        inorder(v->right);

}

