#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct node{
    int key;
    struct node *parent;
    struct node *left;
    struct node *right;
};
typedef struct node * Node;
#define NIL NULL

Node root;

void insertNode(int key){
    Node y = NIL;
    Node x = root;
    Node z;
    
    z = (node *)malloc(sizeof(struct node));
    z->key = key;
    z->left = NIL;
    z->right = NIL;
    
    while(x != NIL){
        y = x;
        if(z->key < x->key) x = x->left;
        else x = x->right;
    }
    z->parent = y;
    
    if(y == NIL) root = z;
    else if(z->key < y->key) y->left = z;
    else y->right = z;
}

void inorederNode(Node tree){
    if(tree->left != NIL) inorederNode(tree->left);
    cout << " " << tree->key;
    if(tree->right != NIL) inorederNode(tree->right);
}

void preorederNode(Node tree){
    cout << " " << tree->key;
    if(tree->left != NIL) preorederNode(tree->left);
    if(tree->right != NIL) preorederNode(tree->right);
}

int main(void){
    int n, key;
    string command;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> command;
        
        if(command[0] == 'p'){
            inorederNode(root);
            cout << endl;
            preorederNode(root);
            cout << endl;
        }
        else if(command[0] == 'i'){
            cin >> key;
            insertNode(key);
        }
    }
}

