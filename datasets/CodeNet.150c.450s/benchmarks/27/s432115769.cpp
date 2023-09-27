#include<bits/stdc++.h>
using namespace std;
const int MAXN = 5e5+7;
struct Node{
    int key;
    Node* parent;
    Node* left;
    Node* right;
};
Node* T;
void insert_num(int z){
    Node* s = (Node*)malloc(sizeof(Node));
    s->key = z;
    s->parent = NULL;
    s->left = NULL;
    s->right = NULL;

    Node* y = NULL; // parent of x
    Node* x = T;
    while(x != NULL){
        y = x; // set the parent
        if(z < x->key){
            x = x->left; // move to the left child
        }else{
            x = x->right; // move to the right child
        }
    }
    s->parent = y;
    if(y == NULL){
        T = s;
    } // T is empty
    else if(z < y->key){
        y->left = s;
    }// z is the left child of y
    else{
        y->right = s;
    }// z is the right child of y
}
void in(Node* T){
    if(T==NULL) return;
    in(T->left);
    printf(" %d", T->key);
    in(T->right);
}
void pre(Node* T){
    if(T==NULL) return;
    printf(" %d", T->key);
    pre(T->left);
    pre(T->right);
}
void print(){
    in(T);
    printf("\n");
    pre(T);
    printf("\n");
}

int main(){
    T = NULL;
    int n;
    scanf("%d", &n);
    char s[10];
    for(int i = 0; i < n; i++){
        scanf("%s", s);
        if(s[0] == 'i'){
            int num;
            scanf("%d", &num);
            insert_num(num);
        } else{
            print();
        }

    }
    return 0;
}

