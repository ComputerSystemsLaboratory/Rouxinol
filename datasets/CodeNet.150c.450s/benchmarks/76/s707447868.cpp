#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int key;
    Node *right, *left, *parent;
};

Node *root, *nullNode;

Node *createNode(const int key)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->key = key;
    n->left = nullNode;
    n->right = nullNode;
    return n;
}

void insert(const int k)
{
    Node *y = root, *z = createNode(k);
    for (Node *i = root; i != nullNode; z->key < i->key ? i = i->left : i = i->right)
    {
        y = i;
    }

    z->parent = y;
    if (y == nullNode)
        root = z;
    else if (z->key < y->key)
        y->left = z;
    else
        y->right = z;
}

bool find(Node *n, const int k)
{
    for (; n != nullNode; k < n->key ? n = n->left : n = n->right)
        if (k == n->key)
            return true;
    return false;
}

void inorder(const Node *n)
{
    if (n == nullNode)
        return;
    inorder(n->left);
    printf(" %d", n->key);
    inorder(n->right);
}

void preorder(const Node *n)
{
    if (n == nullNode)
        return;
    printf(" %d", n->key);
    preorder(n->left);
    preorder(n->right);
}

void deleteNode(Node *n)
{
    if (n == nullNode)
        return;
    deleteNode(n->left);
    deleteNode(n->right);
    free(n);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        string ord;
        cin >> ord;
        if (ord == "insert")
        {
            int k;
            cin >> k;
            insert(k);
        }
        else if (ord == "find")
        {
            int k;
            cin >> k;
            printf("%s\n", find(root, k) ? "yes" : "no");
        }
        else
        {
            inorder(root);
            printf("\n");

            preorder(root);
            printf("\n");
        }
    }

    deleteNode(root);

    return 0;
}

