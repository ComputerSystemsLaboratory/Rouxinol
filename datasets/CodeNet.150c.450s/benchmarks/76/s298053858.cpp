#include <iostream>

using namespace std;

template<typename T>
class BinTree {
private:
    struct Node {
        T val;
        Node *parent;
        Node *left;
        Node *right;
    };

    Node *root;

    void inner_print_inorder(Node *x) {
        if (x == NULL) return;

        inner_print_inorder(x->left);
        cout << " " << x->val;
        inner_print_inorder(x->right);

        return;
    }

    void inner_print_preorder(Node *x) {
        if (x == NULL) return;

        cout << " " << x->val;
        inner_print_preorder(x->left);
        inner_print_preorder(x->right);

        return;
    }

public:
    BinTree() {
        root = NULL;
    }

    void insert(T val) {
        Node *z = new Node;
        z->val = val;
        z->parent = NULL;
        z->left = NULL;
        z->right = NULL;

        Node *y = NULL;
        Node *x = root;
        while (x != NULL) {
            y = x;
            if (val < x->val) {
                x = x->left;
            } else {
                x = x->right;
            }
        }
        z->parent = y;

        if (y == NULL) {
            root = z;
        } else if (z->val < y->val) {
            y->left = z;
        } else {
            y->right = z;
        }

        return;
    }

    void find(T val) {
        Node *x = root;

        while (x != NULL) {
            if (x->val == val) {
                cout << "yes" << endl;
                return;
            } else if (x->val > val) {
                x = x->left;
            } else {
                x = x->right;
            }
        }

        cout << "no" << endl;
        return;
    }

    void print_inorder() {
        inner_print_inorder(root);
        cout << endl;
        return;
    }

    void print_preorder() {
        inner_print_preorder(root);
        cout << endl;
        return;
    }
};

int main() {
    int32_t n;
    cin >> n;

    BinTree<int32_t> bt;
    for (int32_t i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "insert") {
            int32_t val;
            cin >> val;
            bt.insert(val);
        } else if (command == "find") {
            int32_t val;
            cin >> val;
            bt.find(val);
        } else if (command == "print") {
            bt.print_inorder();
            bt.print_preorder();
        }
    }

    return 0;
}