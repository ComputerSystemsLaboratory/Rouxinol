#include<stdio.h>
#include<cstdlib>

typedef struct bittree{
    int data;
    //char kind[14];
    struct bittree *left;
    struct bittree *right;
    struct bittree *parent;
}BIT_TREE;

int SearchRootNode(BIT_TREE *);
void PreoederWalk(BIT_TREE *);
void InorderWalk(BIT_TREE *);
void PostorderWalk(BIT_TREE *);

void PrintData(BIT_TREE *);
void P();

BIT_TREE Nil;
int n;

int main(){
    int i, d, l, r;
    BIT_TREE *T;
    
    scanf("%d", &n);
    T = (BIT_TREE *)malloc(sizeof(BIT_TREE) * n);
    //strcpy(Nil.kind, "leaf");
    Nil.data = -1;
    
    // initialize
    for(i = 0; i < n; i++){
        // make all parent nodes Nil node
        T[i].parent = &Nil;
        T[i].left = &Nil;
        T[i].right = &Nil;
        //strcpy(T[i].kind, "leaf");
    }
    
    
    for(i = 0; i < n; i++){
        scanf(" %d %d %d", &d, &l, &r);
        T[d].data = d;
        if(l != -1){
            T[d].left = &T[l];
            T[l].parent = &T[d];
            //strcpy(T[d].kind, "internal node");
        }else{
            T[d].left = &Nil;
        }
        if(r != -1){
            T[d].right = &T[r];
            T[r].parent = &T[d];
            //strcpy(T[d].kind, "internal node");
        }else{
            T[d].right = &Nil;
        }
    }
    
    r = SearchRootNode(T);
    
    printf("Preorder\n ");
    PreoederWalk(&T[r]);
    printf("Inorder\n ");
    InorderWalk(&T[r]);
    printf("Postorder\n ");
    PostorderWalk(&T[r]);
    
    free(T);
    
    return 0;
}

// put value 0 into root.depth and return root node matrix
int SearchRootNode(BIT_TREE *T){
    int i;
    for(i = 0; i < n; i++){
        if(T[i].parent->data == -1){
            //T[i].depth = 0;
            //strcpy(T[i].kind, "root");
            return i;
        }
    }
}

int count = 0;

void PreoederWalk(BIT_TREE *T){
    //P();
    if (T == &Nil) {
        return;
    }
    printf("%d", T->data);
    //P();
    if (count < n-1) {
        count++;
        printf(" ");
    }else{
        count = 0;
        printf("\n");
    }
    PreoederWalk(T->left);
    PreoederWalk(T->right);
}


void InorderWalk(BIT_TREE *T){
    if (T == &Nil) {
        return;
    }
    InorderWalk(T->left);
    printf("%d", T->data);
    if (count < n-1) {
        count++;
        printf(" ");
    }else{
        count = 0;
        printf("\n");
    }
    InorderWalk(T->right);
}


void PostorderWalk(BIT_TREE *T){
    if (T == &Nil) {
        return;
    }
    PostorderWalk(T->left);
    PostorderWalk(T->right);
    printf("%d", T->data);
    if (count < n-1) {
        count++;
        printf(" ");
    }else{
        count = 0;
        printf("\n");
    }
}


void PrintData(BIT_TREE *T){
    printf("%d ",T->data);
}

void P(){
    printf("\ntest\n");
}













