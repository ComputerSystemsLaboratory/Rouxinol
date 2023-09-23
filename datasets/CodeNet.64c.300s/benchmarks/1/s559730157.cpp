

#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 100000
int A[MAX],n;
    
int partition(int p,int r){ 
    int x,i,j,t;
    x=A[r];
    i=p-1;
    for(j=p;j<r;j++){
        if(A[j]<=x){
            i++;
            swap(A[i],A[j]);
        }    
    }   
    swap(A[i+1],A[r]);
    return i+1;
}    

int main(){
    int i,q;
    cin>>n;
    
    for(i=0;i<n;i++)cin>>A[i];
    q=partition(0,n-1);                                                   

    for(i=0;i<n;i++){
        cout<<(i?" ":"")<<(i==q?"[":"")<<A[i]<<(i==q?"]":"");
    }   
    cout<<"\n";
    return 0;
}

