#include <bits/stdc++.h>

#define NIL NULL
#define INF 1000000001

using namespace std;



struct node {
    int key;
    struct node *right;
    struct node *left;
    struct node *parent;
};
typedef node * Node;



Node root = NIL;

void insert(int key){
    Node y = NIL;
    Node x = root;
    Node z;

    z = (Node)malloc(sizeof(struct node));
    z->key  = key;
    z->left = NIL;
    z->right= NIL;
    
    while(x != NIL){
        y = x;
        if(z->key < x->key) x = x->left;
        else x = x->right;
    }
    z->parent = y;

    if(y == NIL)root = z;
    else if(z->key < y->key) y->left = z;
    else y->right = z;     
}

bool findElement(Node current_node,int v){
    if(current_node == NIL) return false;
    else if(current_node->key == v) return true;
    else if(current_node->key > v) return findElement(current_node->left, v);
    else if(current_node->key < v) return findElement(current_node->right,v);
}

void inOrder(Node current_node){
    if(current_node == NIL) return;
     inOrder(current_node->left);
    printf(" %d",current_node->key);
    inOrder(current_node->right);
}

void preOrder(Node current_node){
    printf(" %d",current_node->key);
    if(current_node->left != NIL)        preOrder(current_node->left);
    if (current_node->right != NIL) preOrder(current_node->right);
}



int main(){
    int num_query;
    char command[20];
    
    int key;
    scanf("%d",&num_query);
    for(int i = 0;i < num_query;i++){
        scanf("%s",command);
        if(command[0] == 'i'){
            scanf("%d",&key);
            insert(key);
        }else if(command[0] == 'f'){
            scanf("%d",&key);
            if(findElement(root,key)) printf("yes\n");
            else printf("no\n");
        }else if(command[0] == 'p'){
            inOrder(root);printf("\n");
            preOrder(root);printf("\n");
        }
    }
    return 0;   
}

