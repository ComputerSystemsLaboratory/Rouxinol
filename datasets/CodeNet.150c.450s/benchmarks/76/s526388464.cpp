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
bool find(int key){
    Node *x = root;
    bool flag = false;
    while(x!=NIL){
        if(x ->key < key){
            x = x->right;
        }else if(x -> key > key){
            x = x->left;
        }else{
            flag = true;
            break;
        }
    }
    return flag;
}
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

        }else if(command[0]=='f'){
            int key;
            bool flag;
            cin >> key;
            flag = find(key);
            if(flag){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }else{
            print();
        }
    }
    return 0;
}
