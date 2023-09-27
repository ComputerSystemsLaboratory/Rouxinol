#include <stdio.h>

#define NMAX 100
#define NIL -1


int L[NMAX];
int R[NMAX];
int P[NMAX];

void preOrder(int i) {
    if (i == NIL) {
        return;
    }
    printf(" %d",i);
    preOrder(L[i]);
    preOrder(R[i]);
}

void inOrder(int i) {
    if (i == NIL) {
        return;
    }
    inOrder(L[i]);
    printf(" %d",i);
    inOrder(R[i]);
}

void postOrder(int i) {
    if (i== NIL) {
        return ;
    }
    postOrder(L[i]);
    postOrder(R[i]);
    printf(" %d",i);
}

int main() {
    int n,id,left,right;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        L[i]=NIL;
        R[i]=NIL;
        P[i]=NIL;
    }
    for(int i=0;i<n;i++) {
        scanf("%d %d %d",&id,&left,&right);
        if(left!=NIL){
            L[id]=left;
            P[left]=id;
        }
        if(right!=NIL){
            R[id]=right;
            P[right]=id;
        }
    }
    int root =0;
    for(int i=0;i<n;i++) {
        if (P[i]==NIL){
            root=i;
            break;
        }
    }
    printf("Preorder\n");
    preOrder(root);
    printf("\n");
    printf("Inorder\n");
    inOrder(root);
    printf("\n");
    printf("Postorder\n");
    postOrder(root);
    printf("\n");

    return 0;
}

