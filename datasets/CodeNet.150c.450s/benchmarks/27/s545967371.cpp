#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int key) : key(key), left(NULL), right(NULL) { }
};

int n;
char command[7];

Node *root;

inline Node* create_node(int key) {
    return new Node(key);
}

void destroy_node(Node *node) {
//    printf("[destroy_node] key = %d\n", node->key);
    if (node->left) {
        destroy_node(node->left);
        delete node->left;
    }
    if (node->right) {
        destroy_node(node->right);
        delete node->right;
    }
}

inline void insert(int key) {

    if (root == NULL) {
        root = create_node(key);
        return;
    }

    Node *node = root, *parent = NULL;
    while (node) {
        parent = node;
        if (key < node->key) {
            node = node->left;
        }
        else {
            node = node->right;
        }
    }

    Node *newnode = create_node(key);
    if (key < parent->key) {
        parent->left = newnode;
    }
    else {
        parent->right = newnode;
    }
}

void pre_order(Node *node) {
    printf(" %d", node->key);
    if (node->left) {
        pre_order(node->left);
    }
    if (node->right) {
        pre_order(node->right);
    }
}

void in_order(Node *node) {
    if (node->left) {
        in_order(node->left);
    }
    printf(" %d", node->key);
    if (node->right) {
        in_order(node->right);
    }
}

int main(void) {

    scanf("%d", &n);

    for (int i = 0, key; i < n; ++i) {
        scanf("%s", command);
        if (command[0] == 'i') {
            scanf("%d", &key);
            insert(key);
        }
        else {      // print 
            if (! root) { continue; }
            in_order(root);
            printf("\n");
            pre_order(root);
            printf("\n");
        }
    }

    if (root) {
        destroy_node(root);
        delete root;
    }

    return 0;
}