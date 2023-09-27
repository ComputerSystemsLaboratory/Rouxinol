#include<iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int key_in){
        key   = key_in;
        left  = NULL;
        right = NULL;
    }
};

class Tree {
    Node* root;
    void inorder(Node* n){
        if (n == NULL) return;
        inorder(n->left);
        cout << " " << n->key;
        inorder(n->right);
    }
    void preorder(Node* n){
        if (n == NULL) return;
        cout << " " << n->key;
        preorder(n->left);
        preorder(n->right);
    }
public:
    Tree(){
        root = NULL;
    }
    void insert(int key){
        Node* z = new Node(key);
        if (root == NULL) {
            root = z;
            return;
        }
        Node* x = root;
        while(1) {
            if (key < x->key) {
                if (x->left == NULL) {
                    x->left = z;
                    break;
                }
                x = x->left;
            } else {
                if (x->right == NULL) {
                    x->right = z;
                    break;
                }
                x = x->right;
            }
        }
    }
    void print(){
        inorder(root);
        cout << endl;
        preorder(root);
        cout << endl;
    }
    void find(int key){
        for (Node* x = root; x != NULL;) {
            if (key == x->key) {
                cout << "yes" << endl;
                return;
            }
            if (key < x->key) {
                x = x->left;
            } else {
                x = x->right;
            }
        }
        cout << "no" << endl;
        return;
    }
};


int main(){
    int m;
    cin >> m;
    Tree T;
    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        if (str == "print") {
            T.print();
            continue;
        }
        int num;
        cin >> num;
        if (str == "insert") {
            T.insert(num);
            continue;
        }
        if (str == "find") {
            T.find(num);
            continue;
        }
    }
    return 0;
}