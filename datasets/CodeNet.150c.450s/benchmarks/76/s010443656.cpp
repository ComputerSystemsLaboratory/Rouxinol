#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;
struct Node{
    int key;
    Node *right;
    Node *left;
    Node *parent;
};

Node *root, *NIL;

Node treeMinimum(Node x){


}

Node treeMaximum(Node x){


}

Node* treeSearch(Node *u, int k){
    while (u != NIL && k != u->key){
        if (k < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}
Node nodeSearch(Node u, int k){
}

Node treeSuccessor(Node x){


}

void treeDelete(Node z){
    Node y; // node to be deleted
    Node x; // child of y



}

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node*)malloc(sizeof(Node));
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
    else{
        if (z->key < y->key) y->left = z;
        else y->right = z;
    }
}

void inorder(Node *u){
    if (u == NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}
void preorder(Node *u){
    if (u == NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}


int main(){
    int n, i, x;
    string cmd;
    scanf("%d", &n);

    for ( i = 0; i < n; i++ ){
        cin >> cmd;
        if (cmd == "find"){
            scanf("%d", &x);
            Node *t = treeSearch(root, x);
            if ( t != NIL ) printf("yes\n");
            else printf("no\n");
        } else if (cmd == "insert"){
            // insert
            scanf("%d", &x);
            insert(x);
        } else if (cmd == "print"){
            // print
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        } else if (cmd == "delete"){
            // delete
            //scanf("%d", &x);
            //treeDelete(treeSearch(root, x));
        }
    }

    return 0;
}

