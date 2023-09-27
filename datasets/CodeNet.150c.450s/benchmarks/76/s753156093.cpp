#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

struct Node {
    int key;
    Node* right, *left, *parent;
};

Node *root, *NIL;

void insertKey(int k) {
    //y: empty node
    Node* y = NIL;
    //xroot: temp argument which saves root datas temporarily
    Node* xroot = root;
    Node* keyNode;

    //node what we want to insert where its place will be found
    keyNode = (Node*)malloc(sizeof(Node));
    keyNode -> key = k;
    keyNode -> left = NIL;
    keyNode -> right = NIL;

    //program is going until node is empty
    //y: parent node of last empty node
    // keynode become left or right childe of y
    while (xroot != NIL) {
        y = xroot;
        if (keyNode -> key < xroot -> key) {
            xroot = xroot -> left;
        } else {
            xroot = xroot -> right;
        }
    }

    keyNode -> parent = y;
    if (y == NIL) {
        root = keyNode;
    } else {
        if (keyNode -> key < y -> key) y -> left = keyNode;
        else y -> right = keyNode;
    }
}

void inOrder(Node *root) {
    if (root == NIL) return;
    inOrder(root -> left);
    printf(" %d", root -> key);
    inOrder(root -> right);
}

void preOrder(Node *root) {
    if (root == NIL) return;
    printf(" %d", root -> key);
    preOrder(root -> left);
    preOrder(root -> right);
}

Node* findKey(Node* xroot, int key) {
    while (xroot != NIL && key != xroot -> key) {
        if (key < xroot -> key) xroot = xroot -> left;
        else xroot = xroot -> right;
    }
    return xroot;
}

int main()
{
    int n, i, x;
    string com;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> com;
        if (com == "find") {
            scanf("%d", &x);
            Node* t = findKey(root, x);
            if (t != NIL) printf("yes\n");
            else printf("no\n");
        }
        else if (com == "insert") {
            scanf("%d", &x);
            insertKey(x);
        }
        else if (com == "print") {
            inOrder(root);
            printf("\n");
            preOrder(root);
            printf("\n");
        }
    }

    return 0;
}

