#include<bits/stdc++.h>

using namespace std;

typedef struct node_{
    int id;
    node_* left;
    node_* right;
}* node;

void printPreorder(node root){
    printf(" %d", root -> id);
    if(root -> left != NULL){
        printPreorder(root -> left);
    }
    if(root -> right != NULL){
        printPreorder(root -> right);
    }
}

void printInorder(node root){
    if(root -> left != NULL){
        printInorder(root -> left);
    }
    printf(" %d", root -> id);
    if(root -> right != NULL){
        printInorder(root -> right);
    }
}

void printTree(node root){
    if(root == NULL){
        printf("\n\n");
    }else{
        printInorder(root);
        printf("\n");
        printPreorder(root);
        printf("\n");
    }
}

void nodeInsert(node root, node nd){
    if(root -> id > nd -> id){
        if(root -> left == NULL){
            root -> left = nd;
        }else{
            nodeInsert(root -> left, nd);
        }
    }else{
        if(root -> right == NULL){
            root -> right = nd;
        }else{
            nodeInsert(root -> right, nd);
        }
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    char* option = new char[7];
    node root = NULL;
    for(int i = 0; i < n; i++){
        scanf("%s", option);
        if(strcmp(option, "insert") == 0){
                int id;
                scanf("%d", &id);
                node nd = new node_;
                nd -> id = id;
                nd -> left = NULL;
                nd -> right = NULL;
            if(root == NULL){
                root = nd;    
            }else{
                nodeInsert(root, nd);
            }
        }else{
            printTree(root);
        }
    }
    return 0;
}
