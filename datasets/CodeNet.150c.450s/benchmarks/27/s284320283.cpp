#include<stdio.h>

using namespace std;

struct Node{
    int key;
    Node* parent;
    Node* left;
    Node* right;
};

Node* NIL;

void inorder(Node* current){
    if(current == NIL){
        return;
    }

    inorder(current->left);
    printf(" %d", current->key);
    inorder(current->right);
}

void preorder(Node* current){
    if(current == NIL){
        return;
    }

    printf(" %d", current->key);
    preorder(current->left);
    preorder(current->right);
}

int main(){
    int n;
    scanf("%d", &n);

    Node* root = NIL;

    for(int i = 0; i < n; i++){
        char str[7];
        scanf("%s", str);

        if(str[0] == 'i'){
            Node* z = new Node;
            scanf("%d", &z->key);
            z->left = NIL;
            z->right = NIL;

            Node* y = NIL;
            Node* x = root;
            while(x != NIL){
                y = x;
                if(z->key < x->key){
                    x = x->left;
                }
                else{
                    x = x->right;
                }
            }
            z->parent = y;

            if(y == NIL){
                root = z;
            }
            else if(z->key < y->key){
                y->left = z;
            }
            else{
                y->right = z;
            }
        }
        else{
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
}
