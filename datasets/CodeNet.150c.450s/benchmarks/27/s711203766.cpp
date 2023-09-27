#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node { 
    int key;
    node *left, *right, *parent;
};
node *root, *NIL;

void insert(int k) {
    node *y = NIL;
    node *x = root;
    node *z;

    z = (node *)malloc(sizeof(node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while( x != NIL ) {
        y = x;
        if( z->key < x->key ) x = x->left;
        else x = x->right;
    }
    z->parent = y;
    if( y == NIL ) root = z;
    else {
        if( z->key < y->key ) y->left = z;
        else y ->right = z;
    }
}

void preParse(node* u) {
    if(u == NIL) return;
    printf(" %d", u->key);
    preParse(u->left);
    preParse(u->right);
}

void inParse(node* u) {
    if(u == NIL) return;
    inParse(u->left);
    printf(" %d", u->key);
    inParse(u->right);
}

signed main() {
    ll n; scanf("%lld", &n); 
    string com;
    for( ll i = 0; i < n; i++ ) {
        cin >> com;
        if( com == "insert") {
            int x;
            scanf("%d", &x);
            insert(x);
        } else if ( com == "print" ) {
            inParse(root);
            putchar('\n');
            preParse(root);
            putchar('\n');
        }
    }

    return 0;
}


