#include <iostream>
#include <cstdio>
#define MAX (10000)
#define NIL (-1)
using namespace std;
struct Node{
    int parent;
    int left,right;
};
Node T[MAX];
int n;

void preParse(int u){
    if(u==NIL)return;
    printf(" %d",u);
    preParse(T[u].left);
    preParse(T[u].right);
}
void inParse(int u){
    if(u==NIL)return;
    inParse(T[u].left);
    printf(" %d",u);
    inParse(T[u].right);
}
void postParse(int u){
    if(u==NIL)return;
    postParse(T[u].left);
    postParse(T[u].right);
    printf(" %d",u);
}
int main(void){
    int k,l,r;
    int d;
    cin>>n;
    for(int i=0;i<n;i++){
        T[i].parent=T[i].left=T[i].right=NIL;
    }
    for(int i=0;i<n;i++){
        cin>>k>>l>>r;
        T[k].left=l;
        T[k].right=r;
        if(l!=NIL)T[l].parent=k;
        if(r!=NIL)T[r].parent=k;
    }
    for(int i=0;i<n;i++)if(T[i].parent==NIL)d=i;
    printf("Preorder\n");
    preParse(d);
    printf("\n");
    printf("Inorder\n");
    inParse(d);
    printf("\n");
    printf("Postorder\n");
    postParse(d);
    printf("\n");
    
    return 0;
}

