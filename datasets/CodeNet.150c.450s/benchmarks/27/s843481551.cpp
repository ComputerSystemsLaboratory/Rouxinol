#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); i++)

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert_tree(int num){
    Node *find = root;
    Node *tmp_parent = NIL;
    Node *obj;

    obj = new Node;
    obj->key = num;
    obj->left = NIL;
    obj->right = NIL;

    while (find != NIL){
        tmp_parent = find;
        if(find->key > obj->key){
            find = find->left;
        }
        else{
            find = find->right;
        }
    }
    obj->parent = tmp_parent;

    if(tmp_parent == NIL){
        root = obj;
    }
    else{
        if(tmp_parent->key > obj->key){
            tmp_parent->left = obj;
        }
        else{
            tmp_parent->right = obj;
        }
    }
}

void inorder(Node *node){

    if(node == NIL){
        return;
    }
    inorder(node->left);
    cout << " " << node->key;
    inorder(node->right);
}

void preorder(Node *node){

    if(node == NIL){
        return;
    }
    cout << " " << node->key;
    preorder(node->left);
    preorder(node->right);
}

int main() {
    
    int n;
    cin >> n;

    string command;
    rep(i, n){
        cin >> command;
        if(command == "insert"){
            int num;
            cin >> num;
            insert_tree(num);
        }
        else if(command == "print"){
            inorder(root);
            cout << "\n";
            preorder(root);
            cout << "\n";
        }
    }
    return 0;
}
