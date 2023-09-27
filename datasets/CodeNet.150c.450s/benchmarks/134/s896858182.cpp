#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
    int parent, left, right;
};

void preparse(int u, Node *T){
    if(u==-1) return;
    printf(" %d", u);
    preparse(T[u].left, T);
    preparse(T[u].right, T);
}

void inparse(int u, Node *T){
    if(u==-1) return;
    inparse(T[u].left, T);
    printf(" %d", u);
    inparse(T[u].right, T);
}

void postparse(int u, Node *T){
    if(u==-1) return;
    postparse(T[u].left, T);
    postparse(T[u].right, T);
    printf(" %d", u);
}



int main(){
    Node *T;
    int n,i,j;

    scanf("%d", &n);

    T = (Node*)malloc(sizeof(Node)*n);

    for(i=0;i<n;i++) T[i].parent=-1;

    for(i=0;i<n;i++){
        int d;
        scanf("%d", &d);
        scanf("%d %d", &T[d].left, &T[d].right);
        T[T[d].left].parent = d;
        T[T[d].right].parent = d;
    }

    for(i=0;i<n;i++){
        if(T[i].parent==-1){
            j=i;
            break;
        }
    }

    printf("Preorder");
    printf("\n");
    preparse(j, T);
    printf("\n");
    printf("Inorder");
    printf("\n");
    inparse(j, T);
    printf("\n");
    printf("Postorder");
    printf("\n");
    postparse(j, T);
    printf("\n");


    free(T);
    return 0;

    
}

