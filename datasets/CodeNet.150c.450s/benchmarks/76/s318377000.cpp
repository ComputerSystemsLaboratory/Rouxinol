#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node *parent, *left, *right;
};

Node *NIL;

void initialize()
{
    NIL->parent = NIL->left = NIL->right = NIL;
}

class BST
{
    Node *tree;

public:
    BST() : tree(NIL) {}

    Node *makeNode(Node *parent, int key)
    {
        Node *node = new Node;
        node->key = key;
        node->parent = parent;
        node->left = node->right = NIL;
        return node;
    }

    void insert(int key)
    {
        if (tree == NIL)
        {
            tree = makeNode(NIL, key);
            return;
        }
        Node *node = tree;
        while (true)
        {
            if (node->key < key)
            {
                if (node->right == NIL)
                {
                    node->right = makeNode(node, key);
                    break;
                }
                else
                {
                    node = node->right;
                }
            }
            else
            {
                if (node->left == NIL)
                {
                    node->left = makeNode(node, key);
                    break;
                }
                else
                {
                    node = node->left;
                }
            }
        }
    }

    bool find(int key)
    {
        Node *node = tree;
        while (node != NIL)
        {
            if (node->key == key)
                return true;
            if (node->key < key)
                node = node->right;
            else
                node = node->left;
        }
        return false;
    }

    void inorder(const Node* node){
        if(node == NIL) return;
        inorder(node->left);
        cout << " " << node->key;
        inorder(node->right);
    }

    void preorder(const Node* node){
        if(node == NIL) return;
        cout << " " << node->key;
        preorder(node->left);
        preorder(node->right);
    }

    void print(){
        inorder(tree);
        cout << endl;
        preorder(tree);
        cout << endl;
    }
};

int main()
{
    BST bst;
    int N, key;
    char com[10];
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> com;
        if(com[0] == 'i'){
            cin >> key;
            bst.insert(key);
        }
        else if(com[0] == 'f'){
            cin >> key;
            if(bst.find(key)) cout << "yes" << endl;
            else cout << "no" << endl;
        }
        else{
            bst.print();
        }
    }
}
