#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *parent,*left,*right;
};

Node *root,*nil;


void insert(int k){
    Node *y = nil;
    Node *x = root;
    Node *z;//ポインタ変数を宣言しているだけで、変数に何も格納されていない
    z = new Node;
    z -> key = k;
    z -> left = z -> right = nil;
    while( x != nil){
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

void preorder(Node* n){
    if(n == nil) return;
    cout << " " << n -> key ;
    preorder(n -> left);
    preorder(n -> right);
}

void inorder(Node* n){
    if( n == nil ) return;
    inorder(n -> left);
    cout << " " << n -> key;
    inorder(n -> right);
}

void print(Node *root){
    inorder(root);
    cout << endl;
    preorder(root);
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string order;
        cin >> order;
        if(order == "insert"){
            int key;
            cin >> key;
            insert(key);
        }else{
            print(root);
            cout << endl;
        }
    }
}


