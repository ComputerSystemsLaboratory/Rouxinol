#include<stdio.h>
#include<stack>
#include<string.h>
#include<iostream>
#define maxn 1001
using namespace std;
struct node {
    int p,l,r;
}T[maxn];
void preorder(int t){
    if(t==-1)return ;
    cout<<" "<<t;
    preorder(T[t].l);
    preorder(T[t].r);
}
void inorder(int t){
    if(t==-1)return ;
    inorder(T[t].l);
    cout<<" "<<t;
    inorder(T[t].r);
}
void order(int t)
{
    if(t==-1)return ;
    order(T[t].l);
    order(T[t].r);
    cout<<" "<<t;
}
int main()
{
    int n,root,i;
    while(~scanf("%d",&n)){
    for(i=0;i<n;i++){
        T[i].p=-1;
    }
    for(i=0;i<n;i++){
        int v,l,r;
        scanf("%d%d%d",&v,&l,&r);
        T[v].l=l;
        T[v].r=r;
        if(l!=-1){
            T[l].p=v;
        }
        if(r!=-1){
            T[r].p=v;
        }
    }
    for(i=0;i<n;i++){
        if(T[i].p==-1)
            root=i;
    }
    printf("Preorder\n");
    preorder(root);
    cout<<endl;
    printf("Inorder\n");
    inorder(root);
    cout<<endl;
    printf("Postorder\n");
    order(root);
    cout<<endl;
    }
}

