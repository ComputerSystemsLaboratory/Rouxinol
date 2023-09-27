#include<cstdio>
#define MAX 10001
#define NIL -1
using namespace std;

struct Node {int parent,left,right;};
Node T[MAX];

void preParse(int u){
    if(u == NIL)return;
    printf(" %d",u);
    preParse(T[u].left);
    preParse(T[u].right);
}
void inParse(int u){
    if(u == NIL)return;
    inParse(T[u].left);
    printf(" %d",u);
    inParse(T[u].right);
}
void postParse(int u){
    if(u == NIL)return;
    postParse(T[u].left);
    postParse(T[u].right);
    printf(" %d",u);
}
int main(){
    int n,p,l,r;
    int root =0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)T[i].parent = NIL;

    for(int i=0;i<n;i++){
        scanf("%d %d %d",&p,&l,&r);
        T[p].left = l;
        T[p].right = r;
        if(l != NIL)T[l].parent = p;
        if(r != NIL)T[r].parent = p;
    }

    for(int i=0;i<n;i++) if(T[i].parent == NIL) root = i;

    printf("Preorder\n");
    preParse(root);
    printf("\n");
    printf("Inorder\n");
    inParse(root);
    printf("\n");
    printf("Postorder\n");
    postParse(root);
    printf("\n");
    return 0;
    }

