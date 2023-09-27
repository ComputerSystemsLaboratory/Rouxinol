#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *parent;
    Node *left;
    Node *right;
};

Node *nil, *root;

void find(int a){
    Node *x = root;
    bool flag = false;
    while(x != nil){
        if(x->key == a)flag = true;
        if(a < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    if(flag){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}

void insert(int a){
    Node *x = root;
    Node *y = nil; //xの親
    Node *z = (Node*)malloc(sizeof(Node));
    z->key = a;
    z->left = nil;
    z->right = nil;

    //zの親に適切なNodeを指定する
    while(x != nil){
        y = x;
        //根の値より大きいかどうかで根の位置をずらしていく。小さければ左。
        if(z->key < x->key){
            x = x->left; 
        }else if(x->key < z->key){
            x = x->right;
        }
    }
    z->parent = y;

    if(y == nil){
        root = z;
    }else if(z->key < y->key){
        y->left = z;
    }else{
        y->right = z;
    }
}

vector<int> in;
void inorder(Node *n){
    if(n == nil)return;
    inorder(n->left);
    in.push_back(n->key);
    inorder(n->right);
}

vector<int> pre;
void preorder(Node *n){
    if(n == nil)return;
    pre.push_back(n->key);
    preorder(n->left);
    preorder(n->right);
}

void print(){
    inorder(root);
    for(int i = 0; i < in.size(); i++){
        cout << " " << in[i];
    }
    cout << endl;
    preorder(root);
    for(int i = 0; i < pre.size(); i++){
        cout << " " << pre[i];
    }
    cout << endl;
    pre.clear();
    in.clear();
}

int main(void){
    int n;
    cin >> n;
    while(n--){
        string command;
        cin >> command;
        if(command == "insert"){
            int a;
            cin >> a;
            insert(a);
        }else if(command == "find"){
            int a;
            cin >> a;
            find(a);
        }else{
            print();
        }
    }
}
