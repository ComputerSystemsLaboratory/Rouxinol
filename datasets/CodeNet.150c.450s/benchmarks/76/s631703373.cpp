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

    if(root == NULL){
        root = t;
    }else{
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
        t->parent = parent;
        if(x < parent->data){
            parent->left = t;
        }else{
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
void find(int b){
    Node *temp = root;
    while(temp != NULL){
        if(temp->data == b){
            printf("yes\n");
            return ;
        }
        if(b < temp->data){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    printf("no\n");
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
        else if(a[0] == 'p'){
            Inorder(root);
            printf("\n");
            Preorder(root);
            printf("\n");
        }
        else if(a[0] == 'f'){
            int c;
            scanf("%d", &c);
            find(c);
        }
    }
    return 0;
}
