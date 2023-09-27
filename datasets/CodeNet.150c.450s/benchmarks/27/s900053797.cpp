#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *parent, *left, *right;
}Node;
Node *root;
void insert(int x){
    Node *t = (Node *)malloc(sizeof(Node));
    t->data = x;
    t->left = t->right = t->parent = NULL;

    Node *child = root;
    Node *parent = NULL;
    while(child != NULL){
        parent = child;
        if(x < child->data){
            child = child->left;
        }
        else{
            child = child->right;
        }
    }
    if(root == NULL){
        root = t;
    }
    else{
        t->parent = parent;
        if(x < parent->data){
            parent->left = t;
        }
        else{
            parent->right = t;
        }
    }
}
void Preorder(Node *t){
    if(t == NULL) return ;
    printf(" %d", t->data);
    Preorder(t->left);
    Preorder(t->right);
}
void Inorder(Node *t){
    if(t == NULL) return ;
    Inorder(t->left);
    printf(" %d", t->data);
    Inorder(t->right);
}
int main(){
    root = NULL;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char a[10]; int b;
        scanf("%s", a);
        if(a[0] == 'i'){
            scanf("%d", &b);
            insert(b);
        }
        else{
            Inorder(root);
            printf("\n");
            Preorder(root);
            printf("\n");
        }
    }
    return 0;
}
