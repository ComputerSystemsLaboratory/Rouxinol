#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Node {
    int key;
    Node *left, *right;
};
Node *root, *NIL;

void insert(int k) {
    if(root == NIL) {
        root = (Node *)malloc(sizeof(Node));
        root->key = k;
        root->left = root->right = NIL;
    }else {
        Node *z = (Node *)malloc(sizeof(Node));
        z->key = k;
        z->left = z->right = NIL;

        Node *x = root;
        while(true) {
            if(k < x->key) {
                if(x->left == NIL) {
                    x->left = z;
                    break;
                }
                else x = x->left;
            }else {
                if(x->right == NIL) {
                    x->right = z;
                    break;
                }
                else x = x->right;
            }
        }
    }
}

void inorder(Node *node) {
    if(node == NIL) return;
    inorder(node->left);
    printf(" %d", node->key);
    inorder(node->right);
}

void preorder(Node *node) {
    if(node == NIL) return;
    printf(" %d", node->key);
    preorder(node->left);
    preorder(node->right);
}

int main()
{

    int n, x;
    string str;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        cin >> str;
        if(str == "insert") {
            scanf("%d", &x);
            insert(x);
        }else if(str == "print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
    return 0;

  /*
    int n, x;
    const char *str;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s", str);
        if(strcmp(str, "insert") == 0) {
            scanf("%d", &x);
            insert(x);
        }else if(strcmp(str, "print") == 0) {

            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }

    return 0;
    */
}