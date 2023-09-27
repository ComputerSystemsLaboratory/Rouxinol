#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define MAX 100000

struct node{
    int key;
    node* parent;
    node* left;
    node* right;
};

node *nil, *root;

void insert(int key){

    node *y = nil;          // ノードyはzの親
    node *x = root;    // ノードxは木の根をさす
    node *z = (node *)malloc(sizeof(node));
    
    // 挿入ノードの初期値
    z->key = key;
    z->left = nil;
    z->right = nil;

    //　挿入先ノード探索
    while(x != nil){        // xがnilを指している(初期ノード)のとき終了
        y = x;              // zの親がxであるとする。
        
        if(z->key < x->key){// xのキーよりzのキーがxを小さければ左、そうでなければ右へ
            x = x->left;
        }else{
            x = x->right;
        }
    }

    z->parent = y;

    if(y == nil){ // treeが空の時
        root = z; 
    }else{
        if(z->key < y->key){
            y->left = z;
        }else{
            y->right = z;
        }
    }
}

void preorder(node *x){
    if(x == nil){
        return;
    }
    cout << " " << x->key;
    preorder(x->left);
    preorder(x->right);
}
void inorder(node *x){
    if(x == nil){
        return;
    }
    inorder(x->left);
    cout << " " << x->key;
    inorder(x->right);
}

int main(){
    int n; cin >> n;
    
    
    rep(i, n){
        string command; cin >> command;

        if(command == "insert"){
            int x; cin >> x;
            insert(x);
        }else if(command == "print"){
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }

    return 0;
}
