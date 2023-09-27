#include <bits/stdc++.h>

using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};
Node *root, *NIL;

void insert(int key) {
    Node *parent = NIL;
    Node *node = root;
    Node *target;

    target = (Node *)malloc(sizeof(Node));
    target->key = key;
    target->left = NIL;
    target->right = NIL;

    while(node != NIL) {
        parent = node;
        if(target->key < node->key) {
            node = node->left;
        } else {
            node = node->right;
        }
    }
    target->parent = parent;

    if(parent == NIL) {
        root = target;
    } else {
        if(target->key < parent->key) {
            parent->left = target;
        } else {
            parent->right = target;
        }
    }
}

void preorder(Node *node) {
    if(node->left != NIL) {
        preorder(node->left);
    }
    printf(" %d", node->key);
    if(node->right != NIL) {
        preorder(node->right);
    }
}

void inorder(Node *node) {
    printf(" %d", node->key);
    if(node->left != NIL) {
        inorder(node->left);
    }
    if(node->right != NIL) {
        inorder(node->right);
    }
}

int main() {
    int n, key;
    string code;
    cin >> n;
    root = (Node *)malloc(sizeof(Node));
    NIL = (Node *)malloc(sizeof(Node));
	root = NIL;
    for(int i = 0; i < n; i++) {
        cin >> code;
        if(code == "print") {
            preorder(root);
            printf("\n");
            inorder(root);
            printf("\n");
            continue;
        }
        scanf("%d", &key);
        if(code == "insert"){
            insert(key);
		}
    }
}
