
//p156

#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX 500000 //5*1e5
#define INF 2000000000 //2*1e9 //sentinel

int L[MAX],R[MAX];
int cnt; // number of comparisons

void merge(int A[],int n,int left,int mid,int right){

  int n1=mid-left;
  int n2=right-mid;

  rep(i,n1) L[i]=A[left+i];
  rep(i,n2) R[i]=A[mid+i];
  L[n1]=R[n2]=INF;

  int i=0,j=0;
  for(int k=left;k<right;k++){
    cnt++;
    if(L[i]<=R[j]){
      A[k]=L[i];
      i++;
    }else{
      A[k]=R[j];
      j++;
    }  
  }

}

//[left,right)
void mergesort(int A[],int n,int left,int right){
  if(left+1<right){
    int mid=(left+right)/2;
    mergesort(A,n,left,mid);
    mergesort(A,n,mid,right);
    merge(A,n,left,mid,right);
  }
}

int main(){
  int A[MAX],n;
  cnt=0;
  cin>>n;
  rep(i,n)cin>>A[i];

  mergesort(A,n,0,n);

  rep(i,n){
    if(i)cout<<" ";
    cout<<A[i];
  }
  cout<<endl;

  cout<<cnt<<endl;
}