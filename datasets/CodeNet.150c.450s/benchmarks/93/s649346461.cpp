#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int parttion(int A[],char a[],int C[],int p,int r){
    int x=A[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(A[j]<=x){
            i++;
            swap(A[i],A[j]);
            swap(a[i],a[j]);
            swap(C[i],C[j]);
        }
    }
    swap(A[i+1],A[r]);
    swap(a[i+1],a[r]);
    swap(C[i+1],C[r]);
    
    return i+1;
}
void quicksort(int A[],char a[],int C[],int p,int r){
    if(p<r){
        int q=parttion(A,a,C,p,r);
        quicksort(A,a,C,p,q-1);
        quicksort(A,a,C,q+1,r);
    }
}
void check(int A[],int C[],int n){
  for(int i=1;i<n;i++){
    if(A[i-1]<A[i])continue;
    if(C[i-1]<C[i])continue;
    cout<<"Not stable"<<endl;
    return;
  }
  cout<<"Stable"<<endl;
}
int main(){
    int n;
    int A[100000]={},C[100000]={};
    char a[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>A[i];
        C[i]=i;
    }
    quicksort(A,a,C,0,n-1);
    check(A,C,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<A[i]<<endl;
    }
    return 0;
}
