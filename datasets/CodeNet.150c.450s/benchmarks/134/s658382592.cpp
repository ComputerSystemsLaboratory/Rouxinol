#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>

#define LP(i,n) for(int i=0;i<n;i++)
#define Mset(x,v) memset(x,v,sizeof(x))
#define INF INT_MAX
#define MAX 10000
#define NIL -1

using namespace std;
using LL=long long;

struct Node { int p,l,r;};
Node T[MAX];
int n;

void preParse(int u){
    if(u==NIL) return;
    printf(" %d",u);
    preParse(T[u].l);
    preParse(T[u].r);
}

void inParse(int u){
    if(u==NIL) return;
    inParse(T[u].l);
    printf(" %d",u);
    inParse(T[u].r);
}

void postParse(int u){
    if(u==NIL) return;
    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d",u);
}

int main(){
    int i,v,l,r,root;
    scanf("%d",&n);
    for(i=0;i<n;i++) T[i].p=NIL;
    for(i=0;i<n;i++){
        scanf("%d %d %d",&v,&l,&r);
        T[v].l=l;
        T[v].r=r;
        if(l!=NIL) T[l].p=v;
        if(r!=NIL) T[r].p=v;
    }
    for(i=0;i<n;i++) if(T[i].p==NIL) root=i;
    printf("Preorder\n");
    preParse(root);
    printf("\nInorder\n");
    inParse(root);
    printf("\nPostorder\n");
    postParse(root);
    printf("\n");
    return 0;
}

