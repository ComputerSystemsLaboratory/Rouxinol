#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int parent(int i){
    return i/2;
}

int left(int i){
    return 2*i;
}

int right(int i){
    return i*2 + 1;
}


int main(){
    int n;
    int *H;
    cin>>n;
    H = (int*)malloc(sizeof(int)*n*3);
    for(int i=1;i<n+1;i++){
        cin>>H[i];
    }

    for(int j=1;j<n+1;j++){
        if(H[parent(j)]==0){
            if(H[left(j)]==0) cout<<"node "<<j<<": key = "<<H[j]<<", "<<endl;
            else if(H[right(j)]==0) cout<<"node "<<j<<": key = "<<H[j]<<", left key = "<<H[left(j)]<<", "<<endl;
            else cout<<"node "<<j<<": key = "<<H[j]<<", left key = "<<H[left(j)]<<", right key = "<<H[right(j)]<<", "<<endl;
        }
        else{
            if(H[left(j)]==0) cout<<"node "<<j<<": key = "<<H[j]<<", parent key = "<<H[parent(j)]<<", "<<endl;
            else if(H[right(j)]==0) cout<<"node "<<j<<": key = "<<H[j]<<", parent key = "<<H[parent(j)]<<", left key = "<<H[left(j)]<<", "<<endl;
            else cout<<"node "<<j<<": key = "<<H[j]<<", parent key = "<<H[parent(j)]<<", left key = "<<H[left(j)]<<", right key = "<<H[right(j)]<<", "<<endl;

        }
    }
    free(H);
}
