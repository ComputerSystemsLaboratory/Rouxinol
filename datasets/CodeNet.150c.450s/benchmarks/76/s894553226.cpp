#include<iostream>
using namespace std;
#include<stdio.h>
#include<string>

typedef struct fox{ int val; fox *left, *right; } fox_n;

fox_n* init()
{
    fox_n* root = new fox_n;
    root->val = -2000000001;
    root->left = NULL;
    root->right = NULL;
    return root;
}

void insert(fox_n* root, int key)
{
    static bool first = true;
    static bool add_leaf = true;  // true:left, false:right.
    if(first){ first = false; root->val = key; return; }  // initialize.
    fox_n* canis;
    fox_n* water = root;  // water from root to leaf.
    do{
        canis = water;
        if(key < canis->val){  // canis chases water.
            water = canis->left;
            add_leaf = true;
        }else{
            water = canis->right;
            add_leaf = false;
        }
    }while(water != NULL);

    fox_n* leaf = new fox_n;  // add new leaf.
    leaf->val = key;
    leaf->left = NULL;
    leaf->right = NULL;
    if(add_leaf){ canis->left = leaf; }else{ canis->right = leaf; }
    return;
}

bool find(fox_n* root, int key)
{
    fox_n* fox = root;
    int val;
    do{
        val = fox->val;
        if(key < val){ fox = fox->left; }
        else if(val < key){ fox = fox->right; }
        else{ return true; }
    }while(fox);
    return false;
}

void inorder(fox_n* root)
{
    if(!root) return;
    inorder(root->left);
    printf(" %d", root->val);
    inorder(root->right);
    return;
}

void preorder(fox_n* root)
{
    if(!root) return;
    printf(" %d", root->val);
    preorder(root->left);
    preorder(root->right);
    return;
}

int main()
{
    fox_n* root = init();
    int i, n, key; char cmd[6];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", cmd);
        if(cmd[0] == 'i'){ scanf("%d", &key); insert(root, key); }
        else if(cmd[0] == 'f'){ scanf("%d", &key); (find(root, key) ? printf("yes\n") : printf("no\n")); }
        else{ inorder(root); printf("\n"); preorder(root); printf("\n"); }
    }
    return 0;
}