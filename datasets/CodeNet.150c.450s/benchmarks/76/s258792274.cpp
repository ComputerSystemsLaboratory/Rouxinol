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

    Node *  find(int key)
    {
        if (root == NULL)
        {
            return NULL;
        }

        Node *target = root;

        while(target != NULL)
        {
            if (target->key == key)
            {
                return target;
            }
            else if (target->key > key)
            {
                if (target->left != NULL)
                {
                    target = target->left;
                }
                else
                {
                    return NULL;
                }
            }
            else if (target->key < key)
            {
                if (target->right != NULL)
                {
                    target = target->right;
                }
                else
                {
                    return NULL;
                }
            }
        }
        return NULL;
    }

    int getNodeCount(Node * n)
    {
        if (n == NULL)
        {
            return 0;
        }

        int count = 0;
        setNodeCount(n, &count);

        return count;
    }

    void setNodeCount(Node *n, int *count)
    {
        if (n == NULL)
        {
            return;
        }

        (*count)++;

        setNodeCount(n->left, count);
        setNodeCount(n->right, count);
    }

    void setPreOrderArray(Node *n, int *a, int *index)
    {
        if (n == NULL)
        {
            return;
        }

        a[*index] = n->key;
        (*index)++;

        setPreOrderArray(n->left, a, index);
        setPreOrderArray(n->right, a, index);
    }

    void setInOrderArray(Node *n, int *a, int *index)
    {
        if (n == NULL)
        {
            return;
        }

        setInOrderArray(n->left, a, index);
        a[*index] = n->key;
        (*index)++;
        setInOrderArray(n->right, a, index);
    }

    void setPostOrderArray(Node *n, int *a, int *index)
    {
        if (n == NULL)
        {
            return;
        }

        setPostOrderArray(n->left, a, index);
        a[*index] = n->key;
        (*index)++;
        setPostOrderArray(n->right, a, index);
    }
    void printPreOrder(Node *n)
    {
        if (n == NULL)
        {
            return;
        }

        int count = getNodeCount(n);

        int array[count];
        int index = 0;
        setPreOrderArray(n, array, &index);

        for (int i = 0; i < count; i++)
        {
            cout << " " << array[i];
        }
    }

    void printInOrder(Node *n)
    {
        if (n == NULL)
        {
            return;
        }

        int count = getNodeCount(n);

        int array[count];
        int index = 0;
        setInOrderArray(n, array, &index);

        for (int i = 0; i < count; i++)
        {
            cout << " " << array[i];
        }
    }

    void printPostOrder(Node *n)
    {
        if (n == NULL)
        {
            return;
        }

        int count = getNodeCount(n);

        int array[count];
        int index = 0;
        setPostOrderArray(n, array, &index);

        for (int i = 0; i < count; i++)
        {
            cout << " " << array[i];
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
        else if (message == "find")
        {
            int key;
            cin >> key;
            bool result = (tree->find(key) != NULL) ? true:false;
            
            if (result)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else if (message == "delete")
        {
            int key;
            cin >> key;
        }

        //cout << message << endl;
    }

    return 0;
}
