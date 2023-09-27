#include <iostream>
#include <cstdio>

using namespace std;

struct Node
{
    int key;
    Node *parent, *right, *left;
};

Node *NIL;

void initialize()
{
    NIL->parent = NIL->left = NIL->right = NIL;
}

Node *make_node(Node *node, int key)
{
    Node *new_node = new Node;
    new_node->left = new_node->right = NIL;
    new_node->parent = node;
    new_node->key = key;
    return new_node;
}

class BinarySearchTree
{
    Node* tree;
public:
    BinarySearchTree() : tree(NIL) {}

    void insert(int key)
    {
        Node *node;
        if (tree == NIL)
        {
            node = new Node;
            node->left = node->right = node->parent = NIL;
            node->key = key;
            tree = node;
            return;
        }

        node = tree;
        while (true)
        {
            if (node->key > key)
            {
                if (node->left == NIL)
                {
                    Node *new_node = make_node(node, key);
                    node->left = new_node;
                    break;
                }
                else
                {
                    node = node->left;
                }
            }
            else
            {
                if (node->right == NIL)
                {
                    Node *new_node = make_node(node, key);
                    node->right = new_node;
                    break;
                }
                else
                {
                    node = node->right;
                }
            }
        }
    }

    void inorder(Node *node)
    {
        if (node != NIL)
        {
            inorder(node->left);
            cout << " " << node->key;
            inorder(node->right);
        }
    }

    void preorder(Node *node){
        if(node != NIL){
            cout << " " << node->key;
            preorder(node->left);
            preorder(node->right);
        }
    }

    void print()
    {
        inorder(tree);
        cout << endl;
        preorder(tree);
        cout << endl;
    }
};

int main()
{
    BinarySearchTree BST;
    char command[10];
    int N, key;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%s", command);
        if(command[0] == 'i'){
            scanf("%d", &key);
            BST.insert(key);
        }
        else{
            BST.print();
        }
    }
}
