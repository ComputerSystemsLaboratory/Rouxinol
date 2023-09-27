#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

typedef struct tree{
    int v;
    struct tree *p, *l, *r;
}*Tree;

void initNode(Tree * root, int v){
    (*root) = (Tree) malloc (sizeof(struct tree));
    (*root)->l = NIL;
    (*root)->r = NIL;
    (*root)->p = NIL;
    (*root)->v = v;
}

void insert(Tree *root, Tree node){
    Tree y = NIL;
    Tree x = *root;
    while (x != NIL){
        y = x;
        if (node->v < x->v){
            x = x->l;
        } else {
            x = x->r;
        }
    }
    node->p = y;

    if (y == NIL){
        *root = node;
    }
    else if (node->v > y->v){
        y->r = node;
    }
    else{
        y->l = node;
    }
}

void inParse(Tree node){
    if (node != NIL){
        inParse(node->l);
        printf(" %d", node->v);
        inParse(node->r);
    }
}

void preParse(Tree node){
    if (node != NIL){
        printf(" %d", node->v);
        preParse(node->l);
        preParse(node->r);
    }
}

void print(Tree root){
    inParse(root);
    printf("\n");
    preParse(root);
    printf("\n");
}

int main()
{
    Tree root, node;
    root = NIL;

    int n, v;
    char s[10];
    scanf ("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s", s);
        if (s[0] == 'i'){
            scanf("%d", &v);
            initNode(&node, v);
            insert(&root, node);
        }
        if (s[0] == 'p')
            print(root);
    }

    return 0;
}
