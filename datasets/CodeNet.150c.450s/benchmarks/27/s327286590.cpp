#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node *parent;
};
Node *NIL;
Node *root = NIL;
void insert(int key){
    Node *y = NIL;
    Node *x = root;
    Node *z;
    z = new Node;
    z -> key = key;
    z -> left = NIL;
    z ->right = NIL;
    while(x!=NIL){
        y = x;
        if(z -> key < x ->key){
            x = x->left;
        }else{
            x = x->right;
        }
        z -> parent = y;
    }
    if(y==NIL){
        root = z ;
    }else if(z -> key < y -> key){
        y -> left = z;
    }else{
        y->right = z;
    }
}
void inorder(Node *p){
    if(p==NIL){
        return;
    }
    inorder(p->left);
    cout << ' ' << p->key;
    inorder(p->right);
}
void preorder(Node *p){
    if(p==NIL){
        return;
    }
    cout << ' ' << p -> key;
    preorder(p->left);
    preorder(p->right);
}
void print(void){
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
}
int main(void){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string command;
        cin >> command;
        if(command[0]=='i'){
            int key;
            cin >> key;
            //cout << key << endl;; 
            insert(key);
        }else{
            print();
        }
    }
    return 0;
}
