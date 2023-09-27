//
//  main.cpp
//  ALDS1_7_C

#include <iostream>
#include <vector>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using P=pair<int,int>;
using ll = long long;
#define NIL -1
#define MAX 10010
struct Node { int parent,left,right;};
struct Node T[MAX]; // 親　左の子　右の子
void preParse(int u){ //　先行順巡回
    if(u==NIL) return;
    printf(" %d",u);
    preParse(T[u].left);
    preParse(T[u].right);
}
void inParse(int u){ //　中間順巡回
    if(u==NIL) return;
    inParse(T[u].left);
    printf(" %d",u);
    inParse(T[u].right);
}
void postParse(int u){ //　後行順巡回
    if(u==NIL) return;
    postParse(T[u].left);
    postParse(T[u].right);
    printf(" %d",u);
}
int main(int argc, const char * argv[]) {
    int n; // 節の数
    scanf("%d",&n);
    rep(i,n) T[i].parent=NIL; // 初期化
    int v,l,r;
    rep(i,n){
        scanf("%d %d %d",&v,&l,&r); // 節番号　左の子　右の子
        T[v].left=l;
        T[v].right=r;
        if(l!=NIL) T[l].parent=v;
        if(r!=NIL) T[r].parent=v;
    }
    // 根を探す
    int root=0;
    rep(i,n) if(T[i].parent==NIL) root=i;
    printf("Preorder\n");
    preParse(root);
    printf("\nInorder\n");
    inParse(root);
    printf("\nPostorder\n");
    postParse(root);
    printf("\n");
    return 0;
}

