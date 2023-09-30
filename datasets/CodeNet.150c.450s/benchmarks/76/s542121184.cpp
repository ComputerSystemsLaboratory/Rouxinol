#include <stdio.h>
#include <stdlib.h>

struct Node{
    int key;
    Node *parent, *left, *right;
};

Node *root, *nil;

void insert(int key)
{
    Node *y, *node, *z = (Node*)malloc(sizeof(Node));
    z->key = key;
    z->left = nil;
    z->right = nil;
    node = root;
    y = nil;
    while(node != nil)
    {
        y = node;
        if(node->key > key){
            node = y->left;
        }
        else{
            node = y->right;
        }
    }
    z->parent = y;
    if(y == nil) root = z;
    else{
        if(y->key > key) y->left = z;
        else y->right = z;
    }
}

void preorder(Node *node)
{
    if(node != nil){
        printf(" %d", node->key);
        preorder(node->left);
        preorder(node->right);
    }
}

void inorder(Node *node)
{
    if(node != nil){
        inorder(node->left);
        printf(" %d", node->key);
        inorder(node->right);
    }
}

int find(int key)
{
    Node *node = root;
    while(node != nil){
        if(node->key == key) return 1;
        else if(node -> key > key) node = node->left;
        else node = node->right;
    }
    return 0;
}

int main()
{
    root = nil;
    int n, key;
    char com[10];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%s", com);
        if(com[0]=='i'){
            scanf("%d", &key);
            insert(key);
        }
        else if (com[0] == 'p'){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
        else{
            scanf("%d", &key);
            if(find(key)) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}