#include<iostream>
#include<cstring>
using namespace std;

struct Node{//binary tree's node
    int key;
    Node *parent, *left, *right;
};

Node *root, *NUL;

void insert(int node){
    //Now Searching...
    Node *nowNode = root;//start with root
    Node *nowParent = NUL;//root node's parent node is NULL
    while(nowNode!=NUL){
        if(nowNode->key<node){
            nowParent = nowNode;
            nowNode = nowParent -> right;
        }else{
            nowParent = nowNode;
            nowNode = nowNode -> left;
        }
    }
    //Now Creating new Node
    Node *newNode = new Node();
    newNode->key = node;
    newNode->left = newNode->right = NUL;
    //Now Inserting
    if(nowParent==NUL){//empty tree's root node
        root = newNode;
    }else if(node<nowParent->key){
        nowParent->left = newNode;
    }else{
        nowParent->right = newNode;
    }
}

void preOrder(Node *nowNode){
    if(nowNode==NUL) return;
    cout<<" "<<nowNode->key;
    preOrder(nowNode->left);
    preOrder(nowNode->right);
}

void inOrder(Node *nowNode){
    if(nowNode==NUL) return;
    inOrder(nowNode->left);
    cout<<" "<<nowNode->key;
    inOrder(nowNode->right);
}

int main(){
    root = NUL;//initial root
    int ope;
    cin>>ope;
    for(int i=0; i<ope; i++){
        string op;
        cin>>op;
        if(op=="print"){
            inOrder(root);
            cout<<endl;
            preOrder(root);
            cout<<endl;
        }else{
            int toInsert;
            cin>>toInsert;
            insert(toInsert);
        }
    }
    return 0;
}

