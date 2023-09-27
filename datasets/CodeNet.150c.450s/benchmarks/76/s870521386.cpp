#include <stdio.h>
#define MAX 500001
int N;
char inst[7];

class Node {
public:
    int key;
    int val;
    Node* left;
    Node* right;
    Node* parent;
};

class BST {
public:
    BST() { root = NULL; }
    Node* root;
    Node* data[MAX];
    Node* createNode(int k);
    void insert(Node* node);
    void find(int k);
    void printInOrder(Node* node);
    void printPreOrder(Node* node);
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

void BST::insert(Node* node)
{
    Node* parent_node = NULL;
    Node* compared_node = root;
    while (compared_node != NULL) {
        parent_node = compared_node;
        if (node->key < compared_node->key) {
            compared_node = compared_node->left;
        } else {
            compared_node = compared_node->right;
        }
    }
    node->parent = parent_node;
    if (parent_node == NULL) {
        root = node;
    } else if (node->key < parent_node->key) {
        parent_node->left = node;
    } else {
        parent_node->right = node;
    }
}

void BST::find(int k)
{
    bool found = false;
    Node* node = root;
    while (node != NULL) {
        if (k == node->key) {
            found = true;
            break;
        } else if (k < node->key) {
            node = node->left;
        } else {
            node = node->right;
        }
    }
    if (found) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}

void BST::printInOrder(Node* start)
{
    if (start != NULL) {
        printInOrder(start->left);
        printf(" %d", start->key);
        printInOrder(start->right);
    }
}

void BST::printPreOrder(Node* start)
{
    if (start != NULL) {
        printf(" %d", start->key);
        printPreOrder(start->left);
        printPreOrder(start->right);
    }
}

int main(void)
{
    //freopen("in.txt", "r", stdin);
    BST bst;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%s", inst);
        int k;
        if (inst[0] == 'i') {
            scanf("%d", &k);
            Node* node = bst.createNode(k);
            bst.insert(node);
        } else if (inst[0] == 'f') {
            scanf("%d", &k);
            bst.find(k);
        } else {
            bst.printInOrder(bst.root);
            printf("\n");
            bst.printPreOrder(bst.root);
            printf("\n");
        }
    }
    return 0;
}