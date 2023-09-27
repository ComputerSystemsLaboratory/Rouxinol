#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *NIL, *root = NIL;


void insert(int k) {
    Node *z,*y = NIL,*r = root;

    z = (Node*)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    z->parent = NIL;

    if ( r == NIL ) {
        root = z;
        return;
    }

    while ( r != NIL ) {
        y = r;
        if ( k < r->key) r = r->left;
        else r = r->right;
    }

    z->parent = y;
    if ( k < y->key ) y->left = z;
    else y->right = z;
}

Node* find(int k) {
    Node * z = root;
    while ( z != NIL ) {
        if( k == z->key ) break;
        else if ( k < z->key ) z = z->left;
        else z = z->right;
    }

    if ( z == NIL || k != z->key ) return NIL;
    else {
            return z;
    }

    return NIL;
}

void inorder(Node*u) {
    if ( u == NIL ) return;
    inorder(u->left);
    cout << ' ' << u->key;
    inorder(u->right);
}

void preorder(Node *u) {
    if ( u == NIL ) return;
    cout << ' ' << u->key;
    preorder(u->left);
    preorder(u->right);
}

Node * treeSuccessor(Node * x) {
    Node * y = x;
    while ( y != NIL) y = x->left;
    return y;
}

void deleteNode(int k) {
    Node *z = find(k);
    Node *y, *x = NIL;
    if ( z == NIL ) return;
    if ( z->left == NIL || z->right == NIL ) y = z;
    else { y = treeSuccessor(y->right); z->key = y->key;

    if ( y->left != NIL ) x = y->left;
    else if ( y->right != NIL ) x = y->right;

    if ( x != NIL ) x->parent = y->parent;
    if ( y->parent == NIL ) root = x;
    else if ( y == y->parent->left ) y->parent->left = x;
    else if ( y == y->parent->right ) y->parent->right = x;

    free(y);

}
}

int main(){
    int n,i,temp,b;
    char a[20];
   cin >> n;
    for ( i = 0; i < n; i++ ) {
        cin >> a;
        if ( strcmp(a,"insert") == 0 ) {
             cin >> temp;
            insert(temp);
        }
        else if ( strcmp(a,"print") == 0 ){
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
        else if ( strcmp(a,"find") == 0 ){
            cin >> b;
            if (find(b) != NIL) cout << "yes" << endl;
            else cout << "no" << endl;
        }
        else if ( strcmp(a,"delete") == 0 ) {
            cin >> b;
            deleteNode(b);
        }
    }
    return 0;
}

