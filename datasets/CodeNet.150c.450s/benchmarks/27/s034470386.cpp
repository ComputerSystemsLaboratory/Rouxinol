#include <iostream>
#include <string>

using namespace std;

struct Node
{
    int key;
    Node* parent;
    Node* left;
    Node* right;

    Node(int k) : key(k), parent(NULL), left(NULL), right(NULL) {}
};

void insert(Node** T, int k)
{
    Node* n = *T;
    Node* parent = NULL;
    Node* new_node = new Node(k);

    while (n != NULL) {
        parent = n;
        if (new_node->key < n->key)
            n = n->left;
        else
            n = n->right;
    }
    new_node->parent = parent;

    if (parent == NULL)
        *T = new_node;
    else if (new_node->key < parent->key)
        parent->left = new_node;
    else
        parent->right = new_node;
}

void inorder(Node* T)
{
    if (T == NULL)
        return;

    inorder(T->left);
    cout << ' ' << T->key;
    inorder(T->right);
}

void preorder(Node* T)
{
    if (T == NULL)
        return;

    cout << ' ' << T->key;
    preorder(T->left);
    preorder(T->right);
}

void print(Node* T)
{
    inorder(T);
    cout << '\n';
    preorder(T);
    cout << '\n';
}

void delete_tree(Node* T)
{
    if (T == NULL)
        return;

    delete_tree(T->left);
    delete_tree(T->right);
    delete T;
}

int main()
{
    int m;
    cin >> m;

    Node* T = NULL;
    for (int i = 0; i < m; ++i) {
        string instruction;
        cin >> instruction;
        if (instruction == "insert") {
            int k;
            cin >> k;
            insert(&T, k);
        } else {
            print(T);
        }
    }

    delete_tree(T);
}

