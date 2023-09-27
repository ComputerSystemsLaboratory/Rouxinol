#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
};

int n;
char command[7];

Node tree[500000];
Node *root;
int pos;

inline Node *new_node(int key) {
    Node *node = &tree[pos++];
    node->key = key;
    return node;
}

bool insert_key(int key) {
    if (root == NULL) {
        root = new_node(key);
        return true;
    }

    Node *node = root, *parent = NULL;
    while (node) {
        parent = node;
        if (node->key > key) {
            node = node->left;
        }
        else if (node->key < key) {
            node = node->right;
        }
        else {
            return false;
        }
    }

    Node *newnode = new_node(key);
    if (key < parent->key) {
        parent->left = newnode;
    }
    else {
        parent->right = newnode;
    }
    return true;
}

Node *find_key(int key) {
    Node *node = root;
    while (node) {
        if (node->key > key) {
            node = node->left;
        }
        else if (node->key < key) {
            node = node->right;
        }
        else {
            return node;
        }
    }
    return NULL;
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
            insert_key(key);
        }
        else if (command[0] == 'f') {
            scanf("%d", &key);
            printf("%s\n", find_key(key) ? "yes" : "no");
        }
//        else if (command[0] == 'd') {
//            scanf("%d", &key);
//            delete_key(key);
//        }
        else {  // print 
            if (root == NULL) { continue; }
            in_order(root);
            printf("\n");
            pre_order(root);
            printf("\n");
        }
    }
    return 0;
}