#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

struct Node{
    int left,right,parent;
    Node(){
        left=right=parent=-1;
    }
};

void preorder(Node T[],int node){
    if(node==-1)return;
    printf(" %d",node);
    preorder(T,T[node].left);
    preorder(T,T[node].right);
    return;
}

void inorder(Node T[],int node){
    if(node==-1)return;
    inorder(T,T[node].left);
    printf(" %d",node);
    inorder(T,T[node].right);
    return;
}
void postorder(Node T[],int node){
    if(node==-1)return;
    postorder(T,T[node].left);
    postorder(T,T[node].right);
    printf(" %d",node);
    return;
}

int main(){
    int n,id,l,r;
    cin>>n;
    Node BTree[n];
    rep(i,n){
        scanf("%d %d %d",&id,&l,&r);
        BTree[id].left=l;BTree[id].right=r;
        BTree[l].parent=BTree[r].parent=id;
    }
    int root;
    rep(i,n) if(BTree[i].parent==-1)root=i;
    printf("Preorder\n");
    preorder(BTree,root);printf("\n");
    printf("Inorder\n");
    inorder(BTree,root);printf("\n");
    printf("Postorder\n");
    postorder(BTree,root);printf("\n");
}
