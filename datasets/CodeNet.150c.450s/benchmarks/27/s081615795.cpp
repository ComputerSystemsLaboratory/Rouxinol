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

    vector<int> keys;

    for (int i = 0; i < M; i++)
    {
        string message;
        cin >> message;

        if (message == "insert")
        {
            int key;
            cin >> key;
            keys.push_back(key);
        }
        else if (message == "print")
        {
            Tree * tree = new Tree();

            for (int key : keys)
            {
                tree->insert(key);
            }

            tree->print();
        }
    }
    return 0;
}
