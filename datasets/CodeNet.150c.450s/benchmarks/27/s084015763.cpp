#include<iostream>
#include<string>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};
Node* nil;

class Tree{
    Node* root;
    void preorder(Node* p){
        if (p == nil) return;
        cout << " " << p->val;
        preorder(p->left);
        preorder(p->right);
    }
    void inorder(Node* p){
        if (p == nil) return;
        inorder(p->left);
        cout << " " << p->val;
        inorder(p->right);
    }
public:
    Tree(){
        root = nil;
    }
    void insert(int k){
        Node* n = new Node;
        n->val   = k;
        n->left  = nil;
        n->right = nil;
        if (root == nil) {
            root = n;
            return;
        }
        Node* pos = root;
        Node* pos_p;
        while (pos != nil) {
            pos_p = pos;
            if (k < pos->val) {
                pos = pos->left;
                continue;
            }
            pos = pos->right;
        }
        if (k < pos_p->val) {
            pos_p->left = n;
        } else {
            pos_p->right = n;
        }
    }
    void print(){
        inorder(root);
        cout << endl;
        preorder(root);
        cout << endl;
    }
};

int main(){
    int n;
    cin >> n;
    Tree T;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str == "insert") {
            int k;
            cin >> k;
            T.insert(k);
            continue;
        }
        T.print();
    }
    return 0;
}