#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
static const int MAX=250;

int Heap[MAX+1];

void printnode(int node,int n){
    printf("node %d: key = %d, ",node,Heap[node]);
    if(node/2!=0){
        printf("parent key = %d, ",Heap[node/2]);
    }
    if(node*2<=n){
    printf("left key = %d, ",Heap[node*2]);
    }
    if(node*2+1<=n){
    printf("right key = %d, ",Heap[node*2+1]);
    }
    printf("\n");
}

int main(){
    int n;cin>>n;
    rep(i,n){scanf("%d",&Heap[i+1]);}
    rep(i,n)printnode(i+1,n);
}
