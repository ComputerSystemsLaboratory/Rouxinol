#include <stdio.h>
#include <stdlib.h>
typedef struct Node * node;
struct Node{
   int val;
   node left;
   node right; // pointer
   node parent;
};
node insert(node T, int z){
    //find the parnet
    //printf("%d",T);
    node y = NULL;
    node temp = T;
    while(temp!=NULL){
        y = temp;
        if(z<temp->val){
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }
    node insert = (node)malloc(sizeof(node));
    insert->val = z;
    if(y==NULL){ //empty tree{
        T = insert;
    }
    else if(z<(y->val)){
        y->left = insert;
    } else {
        y->right = insert;
    }
    return T;
}
void inorder(node root){
    if(root == NULL) return;
    inorder(root->left);
    printf(" %d",root->val);
    inorder(root->right);
}

void preorder(node root){
    if(root == NULL) return;
    printf(" %d",root->val);
    preorder(root->left);
    
    preorder(root->right);
}
void print(node root){
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    node root = NULL;
    for(int i = 0; i<n; i++){
        char str[10];
        int val;
        scanf("%s %d",&str, &val);
        if(str[0] == 'i'){//insert
            root = insert(root,val);
        } else{ // print
            print(root);
        }
    }
    return 0;
}
