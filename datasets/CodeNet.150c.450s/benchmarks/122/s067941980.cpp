#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAX (2000000)
#define INFINITY (1<<30)
int H,A[MAX+1];

void MaxHeap(int i){
    int l,r,max;
    l=2*i;
    r=2*i+1;
    if(l<=H&&A[l]>A[i])max=l;
    else max=i;
    if(r<=H&&A[r]>A[max])max=r;
    
    if(max!=i){
        swap(A[i],A[max]);
        MaxHeap(max);
    }
}

int extract(){
    int max;
    if(H<1)return -INFINITY;
    max=A[1];
    A[1]=A[H];
    H--;
    MaxHeap(1);
    return max;
}

void IncreaseKey(int i,int key){
    if(key<A[i])return;
    A[i]=key;
    while(i>1&&A[i/2]<A[i]){
        swap(A[i],A[i/2]);
        i=i/2;
    }
}

void Insert(int key){
    H++;
    A[H]=-INFINITY;
    IncreaseKey(H,key);
}

int main(void){
    int key;
    char command[10];
    while(1){
        scanf("%s",command);
        if(command[0]=='e'&&command[1]=='n')break;
        if(command[0]=='i'){
            scanf("%d",&key);
            Insert(key);
        }
        else{
            printf("%d\n",extract());
        }
    }
    return 0;
}

