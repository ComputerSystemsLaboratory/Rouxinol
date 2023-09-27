#include <iostream>
#include<vector>
using namespace std;
int A[500100];
int cnt=0;
 void Merge (int left, int mid, int right){
     int n1=mid-left;
     int n2=right -mid;
     vector<long long> L(n1+1,0), R(n2+1,0);
     for(int i=0;i<n1;i++) L[i]=A[left+i];
     for(int i=0;i<n2;i++) R[i]=A[mid+i];
     L[n1]=1e12;
     R[n2]=1e12;
     int i=0;
     int j=0;
 
 for(int k=left;k<right;k++){
     if(L[i]<=R[j]){
         A[k]=L[i];
         i=i+1;
     }
     else{
         A[k]=R[j];
         j=j+1;
     }
     cnt++;
 }
    // Your code here!
    
}

void MergeSort(int left ,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        MergeSort(left,mid);
        MergeSort(mid,right);
        Merge(left,mid,right);
    }
}

int n;
int main(void){
    cin>>n;
    for(int i=0;i<n;i++) cin>>A[i];
    
    MergeSort(0,n);
    
    for(int i=0;i<n;i++){
        if(i!=n-1) cout<<A[i]<<" ";
        else cout<<A[i]<<endl;
    }
    cout<<cnt<<endl;
}