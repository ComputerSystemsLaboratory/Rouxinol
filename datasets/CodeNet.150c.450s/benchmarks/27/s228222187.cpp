#include<iostream>
#include<string>

using namespace std;

class Node
{
public:

    int key;
    Node *parent, *left, *right;

    Node (int key)
    {
        this->key = key;
        parent = left = right = NULL;
    }
};

class Tree
{
    Node *root;

    public:
    Tree()
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

        while(target != NULL)
        {
            if (node->key < target->key)
            {
                if (target->left == NULL)
                {
                    target->left = node;
                    node->parent = target;
                    target = NULL;
                }else
                {
                    target = target->left;
                }
            }
            else
            {
                if (target->right == NULL)
                {
                    target->right = node;
                    node->parent = target;
                    target = NULL;
                }else
                {
                    target = target->right;
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

        printPreOrder(n->left);
        printPreOrder(n->right);
    }

    void printInOrder(Node *n)
    {
        if (n == NULL)
        {
            return;
        }

        printInOrder(n->left);
        cout << " " << n->key;
        printInOrder(n->right);
    }

    void printPostOrder(Node *n)
    {
       if (n == NULL)
        {
            return;
        }

        printPostOrder(n->left);
        printPostOrder(n->right);
        cout << " " << n->key;
    }

    void print()
    {        
        printInOrder(root);
        cout << endl;
        printPreOrder(root);
        cout << endl;
    }
};

int main()
{
    Tree *t = new Tree;

    int M;
    cin >> M;

    for (int i = 0; i < M; i++)
    {
        string message;

        cin >> message;

        if (message == "insert")
        {
            int key;
            cin >> key;
            t->insert(key);
        }
        else if (message == "print")
        {
            t->print();
        }
    }

    return 0;
}

