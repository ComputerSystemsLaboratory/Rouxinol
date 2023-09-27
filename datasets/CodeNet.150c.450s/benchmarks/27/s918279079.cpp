#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
struct node {
    T value;
    node<T>* left;
    node<T>* right;
    
    node(T v) : value(v), left(NULL), right(NULL) {}
    ~node() {
        if(left!=NULL) delete left;
        if(right!=NULL) delete right;
    }
    
    template<class Func>
    void preorder(Func f) {
        f(value);
        if(left!=NULL) left->preorder(f);
        if(right!=NULL) right->preorder(f);
    }
    
    template<class Func>
    void inorder(Func f) {
        if(left!=NULL) left->inorder(f);
        f(value);
        if(right!=NULL) right->inorder(f);
    }
};

template<typename T>
struct BST {
    node<T>* root;
    
    BST() : root(NULL) {}
    ~BST() {
        if(root!=NULL) delete root;
    }
    
    void insert(T v) {
        node<T>** insertp = &(root);
        node<T>* cur = root;
        while(cur != NULL) {
            if(v < cur->value) {
                insertp = &(cur->left);
                cur = cur->left;
            } else {
                insertp = &(cur->right);
                cur = cur -> right;
            }
        }
        *insertp = new node<T>(v);
    }
    
    template<class Func>
    void inorder(Func f) {
        if(root!=NULL) root->inorder(f);
    }
    
    template<class Func>
    void preorder(Func f) {
        if(root!=NULL) root->preorder(f);
    }
};

int main() {
    int n;
    cin >> n;
    BST<int>* bst = new BST<int>();
    for(int i=0; i<n; i++) {
        string cmd;
        cin >> cmd;
        if(cmd=="insert") {
            int v;
            cin >> v;
            bst->insert(v);
        } else if(cmd=="print") {
            bst->inorder([](int v){cout << " " << v;});
            cout << endl;
            bst->preorder([](int v){cout << " " << v;});
            cout << endl;
        }
    }
    delete bst;
}
