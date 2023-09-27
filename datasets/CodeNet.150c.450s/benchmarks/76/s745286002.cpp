#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <cmath>
#include <climits>
using namespace std;

class Node
{ 
    public:
    Node *l, *r, *p;
    int key;
    Node()
    {
        l = r = p = NULL;
    }
};
Node *root = NULL;

void insert(int key)
{
    Node **cur = &root, *node = new Node(), *p = NULL;
    node->key = key;
    while (NULL != *cur) {
        node->p = p;
        if (node->key < (*cur)->key) { 
            cur = &((*cur)->l);
        } else {
            cur = &((*cur)->r);
        }
        p = *cur;
    }
    *cur = node;
    return;
}

Node *find(int key)
{
    Node *cur = root;
    while (NULL != cur) {
        if (cur->key == key) break;
        if (key < cur->key) cur = cur->l;
        else cur = cur->r;
    }
    return cur;
}

Node *get_least(Node *r)
{
    if (r == NULL) return NULL;
    while (r->l) r = r->l;
    return r;
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
    int n, key;
    string command;
    cin >> n;
    while (n--) {
        cin >> command;
        if ("insert" == command) {
            cin >> key;
            insert(key);
        } else if ("find" == command) {
            cin >> key;
            cout << (find(key) ? "yes" : "no") << endl;
        } else if ("print" == command) {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        } else printf("ERROR: %d\n", __LINE__);
    }
    return 0;
}