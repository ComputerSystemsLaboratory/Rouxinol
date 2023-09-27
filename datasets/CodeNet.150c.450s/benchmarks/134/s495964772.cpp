#include<bits/stdc++.h>

using namespace std;

typedef struct node_{
    int id;
    node_* parent;
    node_* left;
    node_* right;
    node_* bro;
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

void printPostorder(node root){
    if(root -> left != NULL){
        printPostorder(root -> left);
    }
    if(root -> right != NULL){
        printPostorder(root -> right);
    }
    printf(" %d", root -> id);
}

int main(){
    int n;
    scanf("%d", &n);
    vector<node> tree(n);
    vector<int> find_root(n);
    for(int i = 0; i < n; i++){
        node nd = new node_;
        nd -> parent = NULL;
        nd -> left = NULL;
        nd -> right = NULL;
        nd -> bro = NULL;
        tree[i] = nd;
        find_root[i] = 1;
    }
    for(int i = 0; i < n; i++){
        int id, l, r;
        scanf("%d %d %d", &id, &l, &r);
        node nd = tree[id];
        nd -> id = id;
        if(l != -1){
            nd -> left = tree[l];
            tree[l] -> parent = nd;
            find_root[l] = 0;
        }
        if(r != -1){
            nd -> right = tree[r];
            tree[r] -> parent = nd;
            find_root[r] = 0;
        }
    }

    int root_id = 0;
    while(find_root[root_id] == 0){
        root_id++;
    }

    node root = tree[root_id];
    printf("Preorder\n");
    printPreorder(root);
    printf("\nInorder\n");
    printInorder(root);
    printf("\nPostorder\n");
    printPostorder(root);
    printf("\n");

    return 0;
}
