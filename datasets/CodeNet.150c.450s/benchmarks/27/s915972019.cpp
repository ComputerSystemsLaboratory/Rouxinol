#include <stdio.h>
#define MAX 100000
int N;
char inst[7];
class Node {
public:
    Node* left;
    Node* right;
    Node* parent;
    int key;
    int val;
};

class BST {
public:
    BST() { root = NULL; }
    Node* data[MAX];
    void insert(Node* n);
    Node* createNode(int k);
    Node* root;
    void printInOrder(Node* start_node);
    void printPreOrder(Node* start_node);
};

Node* BST::createNode(int k)
{
    Node* node_ptr = new Node;
    node_ptr->key = k;
    node_ptr->val = k;
    node_ptr->left = NULL;
    node_ptr->right = NULL;
    node_ptr->parent = NULL;
    return node_ptr;
}

void BST::insert(Node* n)
{
    Node* parent_node = NULL;
    Node* compared_node = root;
    while (compared_node != NULL) {
        parent_node = compared_node;
        if (n->key < compared_node->key) {
            compared_node = compared_node->left;
        } else {
            compared_node = compared_node->right;
        }
    }
    n->parent = parent_node;
    if (parent_node == NULL) {
        root = n;
    } else if (n->key < parent_node->key) {
        parent_node->left = n;
    } else {
        parent_node->right = n;
    }
}

void BST::printInOrder(Node* start_node)
{
    if (start_node != NULL) {
        printInOrder(start_node->left);
        printf(" %d", start_node->val);
        printInOrder(start_node->right);
    }
}

void BST::printPreOrder(Node* start_node)
{
    if (start_node != NULL) {
        printf(" %d", start_node->val);
        printPreOrder(start_node->left);
        printPreOrder(start_node->right);
    }
}

int main(void)
{
    //freopen("in.txt", "r", stdin);
    scanf("%d", &N);
    BST bst;
    for (int i = 0; i < N; ++i) {
        scanf("%s", inst);
        if (inst[0] == 'i') {
            int k;
            scanf("%d", &k);
            Node* n = bst.createNode(k);
            bst.insert(n);
        } else {
            bst.printInOrder(bst.root);
            printf("\n");
            bst.printPreOrder(bst.root);
            printf("\n");
        }
    }
    return 0;
}