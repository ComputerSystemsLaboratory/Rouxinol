#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

class Node
{ 
    public:
    Node *l, *r;
    int key;
};

void insert(Node **root, int key)
{
    Node **cur = root, *node = new Node;
    node->l = NULL; node->r = NULL;
    node->key = key;
    while (NULL != *cur) {
        if (node->key < (*cur)->key) cur = &((*cur)->l);
        else cur = &((*cur)->r);
    }
    *cur = node;
    return;
}

void inorder(Node *cur)
{
    if (cur == NULL) return;
    inorder(cur->l);
    cout << " " << cur->key;
    inorder(cur->r);
}

void preorder(Node *cur)
{
    if (cur == NULL) return;
    cout << " " << cur->key;
    preorder(cur->l);
    preorder(cur->r);
}

int main()
{
    Node *root = NULL;
    int n, key;
    string command;
    cin >> n;
    while (n--) {
        cin >> command;
        if ("insert" == command) {
            cin >> key;
            insert(&root, key);
        }
        if ("print" == command) {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
    return 0;
}