#include <iostream>
#include <string>


using namespace std;
 
struct Node {
    int key;
    Node *parent, *left, *right;
};
 
Node *root, *NIL;
 
void insert(int key) {
    Node *y = NIL;
    Node *x = root;
    Node *z = (Node *)malloc(sizeof(Node));
 
    z->key = key;
    z->left = NIL;
    z->right = NIL;
 
    while (x != NIL) {
        y = x;
        if (key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    };
    
    z->parent = y;
 
    if (y == NIL) {
        root = z;
        return;
    }
 
    if (key <= y->key) {
        y->left = z;
    } else {
        y->right = z;
    }
};
 
void preorder(Node *node) {
    if (node == NIL) return;
    cout << " " << node->key;
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node *node) {
    if (node == NIL) return;
    inorder(node->left);
    cout << " " << node->key;
    inorder(node->right);
}

int main() {
    int n, x;
    string op;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> op;
        if (op == "insert") {
            cin >> x;
            insert(x);
            continue;
        } else {
            inorder(root); cout << endl;
            preorder(root); cout << endl;
            continue;
        }
    }
    

    return 0;
}
