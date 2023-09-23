#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int n;
int *H;

int parent(int i){
    return i/2;
}

int right(int i){
    return i*2;
}

int left(int i){
    return i*2 + 1;
}

void maxheap(int i){
    int l = left(i);
    int r = right(i);
    int largest = i;
    //cout<<sizeof(*H)<<endl;
    if(l<=n && H[i] < H[l]){
        largest = l;
    }
    if(r<=n && H[largest] < H[r]){
        largest = r;
    }
    if(largest != i){
        int tmp;
        tmp = H[i];
        H[i] = H[largest];
        H[largest] = tmp;
        maxheap(largest);
    }
    /*for(int j=0;j<n;j++){
        if(j==n-1) printf("%d\n", H[j+1]);
        else printf("%d ", H[j+1]);
    }*/
}

void buildmh(){
    //cout<<sizeof(*H)/sizeof(int)-1<<endl;
    for(int i=0;i<n/2;i++){
        maxheap(n/2 - i);
    }
}

int main(){
    cin>>n;
    H = (int*)malloc(sizeof(int)*(n+1));
    for(int i =0;i<n;i++) cin>>H[i+1];
    buildmh();
    for(int j=0;j<n;j++){
        if(j==n-1) printf(" %d\n", H[j+1]);
        else printf(" %d", H[j+1]);
    }
    free(H);
}
