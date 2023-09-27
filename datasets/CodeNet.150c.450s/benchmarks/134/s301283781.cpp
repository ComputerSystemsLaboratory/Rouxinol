#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <memory>
#include <string>
#include <map>
using namespace std;
#define MAX 33
#define NIL -1

struct Node{
    int prt,id,ls,rs;
};
Node bt[MAX];
int root,n;
void solve(){
   int tmp;
   scanf("%d",&n);
   for(int i=0;i<n;i++) bt[i].prt = NIL ;

   for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        bt[tmp].id = tmp;
        scanf("%d%d",&bt[tmp].ls,&bt[tmp].rs);
        if(bt[tmp].ls!=NIL) bt[bt[tmp].ls].prt = tmp;
        if(bt[tmp].rs!=NIL) bt[bt[tmp].rs].prt = tmp;
   }
   for(int i=0;i<n;i++) if(bt[i].prt!=NIL)continue;else {root = i;break;}

}
void preorder(int id){
    printf(" %d",bt[id].id);
    if(bt[id].ls!=NIL) preorder(bt[id].ls);
    if(bt[id].rs!=NIL) preorder(bt[id].rs);
}
void inorder(int id){

    if(bt[id].ls!=NIL) inorder(bt[id].ls);
    printf(" %d",bt[id].id);
    if(bt[id].rs!=NIL) inorder(bt[id].rs);
}
void postorder(int id){
   if(bt[id].ls!=NIL) postorder(bt[id].ls);
    if(bt[id].rs!=NIL) postorder(bt[id].rs);
    printf(" %d",bt[id].id);
}
void print(){
    printf("Preorder\n");
    preorder(root);
    printf("\nInorder\n");
    inorder(root);
    printf("\nPostorder\n");
    postorder(root);
    putchar('\n');
}
int main(){
   // freopen("in","r",stdin);
    solve();
    print();
    return 0;
}