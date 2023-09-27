#include<iostream>
using namespace std;

int merge(int* A,int left,int mid,int right){
  int cnt=0;
  int n1=mid-left;
  int n2=right-mid;
  int L[n1+1],R[n2+1];
  for(int i=0;i<=n1-1;i++){
    L[i]=A[left+i];
  }
  for(int i=0;i<=n2-1;i++){
    R[i]=A[mid+i];
  }
  L[n1]=1000000000;
  R[n2]=1000000000;
  int i=0;
  int j=0;
  for(int k=left;k<=right-1;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i=i+1;
      cnt++;
    }
    else{
      A[k]=R[j];
      j=j+1;
      cnt++;
    }
  }
  return cnt;
}

int mergeSort(int*A,int left,int right){
  int tmp=0;
  if(left+1<right){
    int mid=(left+right)/2;
    tmp+=mergeSort(A,left,mid);
    tmp+=mergeSort(A,mid,right);
    tmp+=merge(A,left,mid,right);
  }
  return tmp;
}

int main(){
  int n;
  cin>>n;
  int S[n];
  for(int i=0;i<n;i++)cin>>S[i];
  int total=mergeSort(S,0,n);
  for(int i=0;i<n;i++){
    if(i==n-1){cout<<S[i]<<endl;break;}
    cout<<S[i]<<' ';
  }
  cout<<total<<endl;
}
