#include<stdio.h>
#include<cstdlib>

struct node{
    struct node *right;
    struct node *left;
    struct node *parent;
    int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;

void P(){
    printf("\ntest\n");
}

Node treeMaximum(Node x){
    while (x->right != NIL) {
        x = x->right;
    }
    
    return x;
}

Node treeMinimum(Node x){
    while (x->left != NIL) {
        x = x->left;
    }
    
    return x;
}

Node treeSearch(Node u, int k){
    if (u == NIL || k == u->key) {
        return u;
    }
    if (k < u->key) {
        return treeSearch(u->left, k);
    }else{
        return treeSearch(u->right, k);
    }
    
}

Node treeSuccessor(Node x){
    if (x->right != NIL) {                   //    S
        return treeMinimum(x->right);        //   ↗︎
    }                                        //  @
                                             //    ↖︎
    Node y = x->parent; //case2              //      @
    while (y->left != x && y != root) {      //        ↖︎
        x = y;                               //          @
        y = y->parent;                       //            ↖︎
    }                                        //              x
    return y;                                //                null
}                                            // case:2 figure

void NodeConnect(Node p, int lr, Node c){ // lr = -1 : left  lr = 1 : right
    if (p == c) {
        return;
    }
    if (lr == -1) {
        p->left = c;
    }else{
        p->right = c;
    }
    if (c != NIL) {
        c->parent = p;
    }
}

void treeDelete(Node z){
    //Node y; // node to be deleted
    //Node x; // child of y
    Node s; // successor of z
    int lr; // zが親の右についてるか左についてるか判定するための値
    
    if (z == root) {
        if (z->right == NIL && z->left == NIL) { // z has no child
            return;
            
        }else if(z->right == NIL){               // z has only one child
            root = z->left;
        }else if(z->left == NIL){
            root = z->right;
            
        }else{                                   // z has 2 children
            s = treeSuccessor(z); // treeMinimum(z->right)
            if(z->right != s){
                NodeConnect(s->parent, -1, s->right);
            }
            NodeConnect(s, -1, z->left);
            NodeConnect(s, 1, z->right);
            root = s;
        }

    }else{
        if (z->parent->left == z) {
            lr = -1;
        }else{
            lr = 1;
        }
    
        if (z->right == NIL && z->left == NIL) { // z has no child
            NodeConnect(z->parent, lr, NIL);
        
        }else if(z->right == NIL){               // z has only one child
            NodeConnect(z->parent, lr, z->left);
        }else if(z->left == NIL){
            NodeConnect(z->parent, lr, z->right);

        }else{                                   // z has 2 children
            s = treeSuccessor(z); // treeMinimum(z->right)
            if(z->right != s){
                NodeConnect(s->parent, -1, s->right);
            }
            NodeConnect(s, -1, z->left);
            NodeConnect(s, 1, z->right);
            NodeConnect(z->parent, lr, s);
        }
    
    }
    
    
}

void insert(int k){
    Node y = NIL; // xの親
    Node x = root; // 動かすnode
    Node z;
    
    z = (Node)malloc(sizeof(struct node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    
    while (x != NIL) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        }else{
            x = x->right;
        }
    }
    // 今、挿入すべき場所の親がyになっている
    if (y == NIL) { // Tがrootnodeしかない時
        root = z;
    }else if(z->key < y->key){
        y->left = z;
        z->parent = y;
    }else{
        y->right = z;
        z->parent = y;
    }
    
}

void inorder(Node u){
    if (u == NIL) {
        return;
    }
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}
void preorder(Node u){
    if (u == NIL) {
        return;
    }
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}


int main(){
    int n, i, x;
    char com[20];
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++ ){
        scanf("%s", com);
        if ( com[0] == 'f' ){
            scanf("%d", &x);
            Node t = treeSearch(root, x);
            if ( t != NIL ) printf("yes\n");
            else printf("no\n");
        } else if ( com[0] == 'i' ){
            scanf("%d", &x);
            insert(x);
        } else if ( com[0] == 'p' ){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        } else if ( com[0] == 'd' ){
            scanf("%d", &x);
            treeDelete(treeSearch(root, x));
        }
    }
    
    return 0;
}


