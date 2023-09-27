#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct Node {
    int key;
    int left;
    int right;
};

int n;
char command[7];

Node tree[500000];
int tree_num;
int root = -1;

inline int create_node(int key) {
    Node& node = tree[tree_num];
    node.key = key;
    node.left = -1;
    node.right = -1;
    return tree_num++;
}

inline void insert(int key) {

    if (root == -1) {
        root = create_node(key);
        return;
    }

    int node = root, parent = 0;
    while (node != -1) {
        parent = node;
        if (key < tree[node].key) {
            node = tree[node].left;
        }
        else {
            node = tree[node].right;
        }
    }

    int newnode = create_node(key);
    if (key < tree[parent].key) {
        tree[parent].left = newnode;
    }
    else {
        tree[parent].right = newnode;
    }
}

inline int find(int key) {
    int node = root;
    while (node != -1) {
        if (tree[node].key == key) {
            return node;
        }
        else if (tree[node].key > key) {
            node = tree[node].left;
        }
        else {
            node = tree[node].right;
        }
    }
    return -1;
}

void pre_order(int root) {
    Node& node = tree[root];
    printf(" %d", node.key);
    if (node.left != -1) {
        pre_order(node.left);
    }
    if (node.right != -1) {
        pre_order(node.right);
    }
}

void in_order(int root) {
    Node& node = tree[root];
    if (node.left != -1) {
        in_order(node.left);
    }
    printf(" %d", node.key);
    if (node.right != -1) {
        in_order(node.right);
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
        else if (command[0] == 'f') {
            scanf("%d", &key);
            int found = find(key);
            printf("%s\n", found != -1 ? "yes" : "no");
        }
        else {  // print 
            if (root == -1) { continue; }
            in_order(0);
            printf("\n");
            pre_order(0);
            printf("\n");
        }
    }

    return 0;
}