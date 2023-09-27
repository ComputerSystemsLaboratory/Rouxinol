#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

struct Node
{
    int key;
    Node *parent, *left, *right;
};

class Tree
{
    Node *root;

public:
    Tree()
    {
        init();
    }

    Node * find(int key)
    {
        return find(root, key);
    }

    Node* find(Node * t, int key)
    {
        if (t == NULL)
            return NULL;

        if(t->key == key)
        {
            return t;
        }

        if (key < t->key)
        {
            if (t->left != NULL)
            {
                return find(t->left, key);
            }
        }
        else
        {
            if (t->right != NULL)
            {
                return find(t->right, key);
            }
        }

        return NULL;
    }

    void insert(Node *t, int key)
    {
    }

    void insert(int key)
    {
        Node *node = (Node *)malloc(sizeof(Node));
        node->key = key;
        node->parent = NULL;
        node->left = NULL;
        node->right = NULL;

        if (root == NULL)
        {
            root = node;
        }
        else
        {
            Node *target = root;

            while (target != NULL)
            {
                if (node->key < target->key)
                {
                    if (target->left == NULL)
                    {
                        target->left = node;
                        node->parent = target;

                        target = NULL;
                    }
                    else
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
                    }
                    else
                    {
                        target = target->right;
                    }
                }
            }
        }
    }

    void init()
    {
        root = NULL;
    }

    void print()
    {
        printInorder(root);
        cout << endl;
        printPreorder(root);
        cout << endl;
    }

    void printPreorder(Node *u)
    {
        if (u == NULL)
            return;

        cout << " " << u->key;

        if(u->left != NULL)
            printPreorder(u->left);

        if (u->right != NULL)
            printPreorder(u->right);
    }

    void printInorder(Node *u)
    {
        if (u == NULL)
            return;

        if(u->left != NULL)
            printInorder(u->left);

        cout << " " << u->key;

        if (u->right != NULL)
            printInorder(u->right);
    }
};

int main()
{
    int M;

    cin >> M;
    Tree * tree = new Tree();

    for (int i = 0; i < M; i++)
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
        else if (message == "find")
        {
            int key = 0;
            cin >> key;

            if (tree->find(key))
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}
