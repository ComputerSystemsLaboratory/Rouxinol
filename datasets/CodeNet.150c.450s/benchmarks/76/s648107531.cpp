#include <iostream>
#include <string>

using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node() : key(0), left(NULL), right(NULL) {}
};

void insert(Node** root, int key) {
    Node* new_node = new Node;
    new_node->key = key;

    if (*root == NULL) {
        *root = new_node;
    } else {
        Node* node1 = *root;
        Node* node2;
        while (node1 != NULL) {
            node2 = node1;
            if (node1->key > key)
                node1 = node1->left;
            else
                node1 = node1->right;
        }

        if (node2->key > new_node->key)
            node2->left = new_node;
        else
            node2->right = new_node;
    }
}

void find(Node* root, int key) {
    Node* node = root;
    while (node != NULL) {
        if (node->key == key)
            break;
        if (node->key > key)
            node = node->left;
        else
            node = node->right;
    }

    if (node != NULL)
        cout << "yes\n";
    else
        cout << "no\n";
}

void print_inorder(Node* node) {
    if (node == NULL)
        return;

    print_inorder(node->left);
    cout << ' ' << node->key;
    print_inorder(node->right);
}

void print_preorder(Node* node) {
    if (node == NULL)
        return;

    cout << ' ' << node->key;
    print_preorder(node->left);
    print_preorder(node->right);
}

void delete_tree(Node* node) {
    if (node->left != NULL)
        delete_tree(node->left);
    if (node->right != NULL)
        delete_tree(node->right);
    if (node != NULL)
        delete node;
}

int main() {
    int n;
    cin >> n;

    Node* root = NULL;

    for (int i = 0; i < n; ++i) {
        string inst;
        cin >> inst;

        if (inst == "insert") {
            int k;
            cin >> k;
            insert(&root, k);
        } else if (inst == "find") {
            int k;
            cin >> k;
            find(root, k);
        } else {
            print_inorder(root);
            cout << '\n';
            print_preorder(root);
            cout << '\n';
        }
    }

    delete_tree(root);
}

