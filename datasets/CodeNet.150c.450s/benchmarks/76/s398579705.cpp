#include <stdio.h>

typedef struct _node {
    int val;
    struct _node *left;
    struct _node *right;
    struct _node *parent;
} NODE;

NODE *root = NULL;

void insert(int val) {
    NODE *x = new NODE;
    x->val = val;
    x->left = NULL;
    x->right = NULL;
    x->parent = NULL;
    NODE *y = NULL; // parent
    NODE *z = root; // interator
    while (z != NULL) {
        y = z;
        if (x->val <= z->val) {
            z = z->left;
        } else {
            z = z->right;
        }
    }
    x->parent = y;
    if (y == NULL) {
        root = x;
    } else if (x->val <= y->val) {
        y->left = x;
    } else {
        y->right = x;
    }
}

NODE* find(int val) {
    NODE *p = root;
    while (p!=NULL&&p->val!=val){
        if (val<=p->val){
            p=p->left;
        }else{
            p=p->right;
        }
    }
    return p;
}

void preorder(NODE *p) {
    if (p == NULL) {
        return;
    }
    printf(" %d", p->val);
    preorder(p->left);
    preorder(p->right);
}

void inorder(NODE *p) {
    if (p == NULL) {
        return;
    }
    inorder(p->left);
    printf(" %d", p->val);
    inorder(p->right);
}

int main() {
    int n, val;
    scanf("%d", &n);
    char cmd[100];
    for (int i = 0; i < n; i++) {
        scanf("%s %d", cmd, &val);
        if (cmd[0] == 'i') {
            insert(val);
        } else if (cmd[0]=='f'){
            if(find(val)==NULL){
                printf("no\n");
            }else{
                printf("yes\n");
            }
        } else {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
    return 0;
}

