#include <cstdio>
#include <cstring>
#include <cstdlib>

typedef struct tree_{
    int value;
    struct tree_ *left;
    struct tree_ *right;
}tree;

void preorder(tree *p){
    if(p==NULL)return;
    printf(" %d",p->value);
    preorder(p->left);
    preorder(p->right);
}

void inorder(tree *p){
    if(p==NULL)return;
    inorder(p->left);
    printf(" %d",p->value);
    inorder(p->right);
}

tree *insert(tree *p, int x){
    if(p==NULL){
        p = (tree *)malloc(sizeof(tree));
        p->value = x;
        p->left = NULL;
        p->right = NULL;
    }else{
        if(p->value>x)p->left = insert(p->left, x);
        else if(p->value<x)p->right = insert(p->right, x);
    }
    return p;
}

bool find(tree *p, int x){
    bool ans;
    if(p==NULL)ans = false;
    else if(p->value>x)ans = find(p->left, x);
    else if(p->value<x)ans = find(p->right, x);
    else ans = true;
    return ans;
}

int main(){
    int i, n, x;
    char cmd[7];
    tree *root = NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",cmd);
        if(strcmp(cmd,"insert")==0){
            scanf("%d",&x);
            root = insert(root, x);
        }else if(strcmp(cmd,"print")==0){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }else if(strcmp(cmd,"find")==0){
            scanf("%d",&x);
            if(find(root, x))printf("yes\n");
            else printf("no\n");
        }else return -1;
    }
    return 0;
}

