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
void insert(int value);
Node* find_bin_tree(int target);
void preorder(Node* v);
void inorder(Node* v);

/* main */
int main(){

    // main
    int n, val;
    cin >> n;
    string man;
    for (int i = 0; i < n; i++) {
        cin >> man;
        if (man == "print") {
            inorder(root); cout << '\n';
            preorder(root); cout << '\n';
        }
        else {
            cin >> val;
            if (man == "insert") {
                insert(val);
            }
            else {
                Node* ret_node = find_bin_tree(val);
                if (ret_node != NIL)
                    cout << "yes" << '\n';
                else
                    cout << "no" << '\n';
            }
        }
    }

}

Node* find_bin_tree(int target) {

    Node* x = root;
    while (x != NIL) {
        if (target == x->key) {
            return x;
        }
        else if (target < x->key) {
            x = x->left;
        }
        else {
            x = x->right;
        }
    }
    return x;
}

void insert(int value) {

    // init Node
    Node* z = new Node();
    z->parent = NIL;
    z->left = NIL;
    z-> right = NIL;

    Node* y = NIL;  // parent of x(root)
    Node* x = root; // root of 'T'

    while (x != NIL) {
        y = x; // set parent
        if (value < x->key) {
            x = x->left;
        }
        else {
            x = x->right;
        }
    }

    z->parent = y;
    z->key = value;

    if (y == NIL) {  // 'T' is empty
        root = z;
    }
    else if (value < y->key) {
        y->left = z;  // z is y's left
    }
    else if (value > y->key) {
        y->right = z;  // z is y's right
    }
}

void preorder(Node* v) {
    if (v != NIL) {
        cout << ' ' << v->key;
        preorder(v->left);
        preorder(v->right);
    }

}

void inorder(Node* v) {
    if (v != NIL) {
        inorder(v->left);
        cout << ' ' << v->key;
        inorder(v->right);
    }
}

