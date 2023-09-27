#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
    int key;
    Node *parent, *left, *right;

    Node(int key)
    {
        this->key = key;
        parent = left = right = NULL;
    }
};

class BinarySearchTree
{
    Node *root;

public:
    BinarySearchTree()
    {
        root = NULL;
    }

    void insert(int key)
    {
        Node *node = new Node(key);

        if (root == NULL)
        {
            root = node;
            return;
        }

        Node *target = root;
        
        while (target != NULL)
        {
            if (target->key > node->key)
            { 
                if(target->left != NULL)
                {
                    target = target->left;
                }
                else
                {
                    target->left = node;
                    node->parent = target;
                    target = NULL;
                }
            }
            else
            {
                if(target->right != NULL)
                {
                    target = target->right;
                }
                else
                {
                    target->right = node;
                    node->parent = target;
                    target = NULL;
                }
            }
        }
    }

    void printPreOrder(Node *n)
    {
        if (n == NULL)
        {
            return;
        }

        cout << " " << n->key;

        if (n->left != NULL)
        {
            printPreOrder(n->left);
        }

        if (n->right != NULL)
        {
            printPreOrder(n->right);
        }
    }

    void printInOrder(Node *n)
    {
        if (n == NULL)
        {
            return;
        }

        if (n->left != NULL)
        {
            printInOrder(n->left);
        }

        cout << " " << n->key;

        if (n->right != NULL)
        {
            printInOrder(n->right);
        }
    }

    void print()
    {
        if (root == NULL)
        {
            return;
        }

        printInOrder(root);
        cout << endl;
        printPreOrder(root);
        cout << endl;
    }
};

int main()
{
    BinarySearchTree *tree = new BinarySearchTree;

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string message;
        cin >> message;

        if (message == "insert")
        {
            int key;
            cin >> key;
            tree->insert(key);
        }
        else if (message == "print")
        {
            tree->print();
        }

        //cout << message << endl;
    }

    return 0;
}
