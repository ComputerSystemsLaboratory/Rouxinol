#include<iostream>
#include<cstdio>
#define MAX 252
using namespace std;
int A[MAX];
int n;

void show(int A[]){
    int i=0;
    for(i=1;i<=n;i++){
        printf("node %d: key = %d, ",i,A[i]);
        if(i/2>0) printf("parent key = %d, ",A[i/2]);
        if(i*2<=n){
            printf("left key = %d, ",A[i*2]);
        }if(i*2+1<=n){
            printf("right key = %d, ",A[i*2+1]);
        }
        cout<<endl;
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    show(A);
    return 0;
}

