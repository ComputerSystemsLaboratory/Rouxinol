#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Node * node;
struct Node{
   int val;
   node left;
   node right; // pointer
   node parent;
};
node insert(node T, int z){
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
int res = 0;
void find_util(int val, node cur){
    if(cur == NULL) return;
    if(val==cur->val) res = 1; // find
    if(val<cur->val) {
        find_util(val, cur->left);
    } else {
        find_util(val,cur->right);
    }
}
void find(node root , int val){
    find_util(val, root);
    if(res == 0) printf("no\n");
    else if(res == 1) printf("yes\n");
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
        } else if(str[0] == 'f') {
            res = 0;
            find(root, val);
        } else{ // print
            print(root);
        }
    }
    return 0;
}
