#include <bits/stdc++.h>
using namespace std;

struct Node {int key;
    Node *parent,*left,*right;};

Node *root,*nil;

void insert(int k){
    Node *x = root;
    Node *y = nil;
    Node *z = new Node;
    z -> key = k;
    z -> left = nil;
    z -> right = nil;
    while( x != nil ){
        y = x;
        if(z -> key < x -> key){
            x = x -> left;
        }else{
            x = x -> right;
        }
    }
    z -> parent = y;
    if(y == nil){
        root = z;
    }else if(z -> key < y -> key){
        y -> left = z;
    }else{
        y -> right = z;
    }
}

void inorder(Node* n){
    if(n == nil) return;
    inorder(n -> left);
    cout << " " << n -> key;
    inorder(n -> right);
}

void preorder(Node* n){
    if(n == nil) return;
    cout << " " << n -> key;
    preorder(n -> left);
    preorder(n -> right);
}

void print(Node *root){
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
}

void find(int num){
    Node *x = root;
    while( x != nil){
        if( x -> key == num){
            cout << "yes" << endl;
            return ;
        }else if(x -> key < num){
            x = x -> right;
        }else{
            x = x -> left;
        }
    }
    cout << "no" << endl;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string order;
        cin >> order;
        if(order == "insert"){
            int num;
            cin >> num;
            insert(num);
        }else if(order == "find"){
            int num;
            cin >> num;
            find(num);
        }else{
            print(root);
        }
    }
}


