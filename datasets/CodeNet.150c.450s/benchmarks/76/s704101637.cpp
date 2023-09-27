#include <stdio.h>
#include <iostream>
using namespace std;

struct Node{
    int key;
    Node *parent;
    Node *left;
    Node *right;
};

struct Node *NIL, *root;

void init(){
    root = NIL;
}

void insert(Node* z){
    struct Node* y = NIL; // xの親
    struct Node* x = root;

    while(x != NIL){
        y = x;
        if(z->key < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    z->parent = y;

    if(y == NIL){
        root = z;
    }
    else if(z->key < y->key){
        y->left = z; 
    }else{
        y->right = z;
    }
}

bool find_number(Node* x, int num){
    if(x == NIL){
        return false;
    }
    if(x->key == num){
        return true;
    }
    if(x->key < num){
        return find_number(x->right, num);
    }
    return find_number(x->left, num);
}

void print_node_inorder(Node* x){
    if(x == NIL){
        return;
    }
    print_node_inorder(x->left);
    printf(" %d", x->key);
    print_node_inorder(x->right);
}

void print_node_pre(Node* x){
    if(x == NIL){
        return;
    }
    printf(" %d", x->key);
    print_node_pre(x->left);
    print_node_pre(x->right);
}

void print_(){
    print_node_inorder(root);
    printf("\n");
    print_node_pre(root);
    printf("\n");
}

int main(void){
    void init();
    
    int m;
    scanf("%d", &m);

    string com;

    for(int i = 0; i < m; i++){
        cin >> com;
        if(com == "insert"){
            struct Node* n;
            n = (struct Node*)malloc(sizeof(struct Node));
            n->right = NIL;
            n->left = NIL;
            n->parent = NIL;
            scanf("%d", &n->key);
            insert(n);
        }else if(com == "print"){
            print_();
        }else if(com == "find"){
            int num;
            scanf("%d", &num);
            if(find_number(root, num)){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }else{
            printf("invalid command");
            cout << com;
        }
    }

    return 0;
}

