#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Node
{
    Node *parent;
    Node *left;
    Node *right;
    int key;
};

void insert(Node **root, int num)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->key = num;
    newNode->left = newNode->right = NULL;

    // find target leaf.
    Node *target;
    for (Node *n = *root; n != NULL; )
    {
        target = n;
        n = (num < n->key) ? n->left : n->right;
    }
    newNode->parent = target;

    if (*root == NULL)
        *root = newNode;
    else if (num < target->key)
        target->left = newNode;
    else
        target->right = newNode;
}
Node *findNode(Node *u, int num)
{
   if (u == NULL)
       ;
   else if (num == u->key)
       return u;
   else if (num < u->key)
       return findNode(u->left, num);
   else if (num > u->key)
       return findNode(u->right, num);
   return NULL;
}

void preorder(Node *u)
{
    if (u == NULL) return;
    cout << " " << (u->key);
    preorder(u->left);
    preorder(u->right);
}
void inorder(Node *u)
{
    if (u == NULL) return;
    inorder(u->left);
    cout << " " << (u->key);
    inorder(u->right);
}


int main(int argc, char *argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    Node *root = NULL;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string command;
        cin >> command;
        if (command.find("insert") == 0)
        {
            int num;
            cin >> num;
            insert(&root, num);
        } else if (command.find("find") == 0)
        {
            int num;
            cin >> num;
            Node *ans = findNode(root, num);
            if (ans == NULL)
                cout << "no" << endl;
            else
                cout << "yes" << endl;
        } else
        {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }

    return 0;
}
