#include<bits/stdc++.h>
using namespace std;
int n;
int A[100000];
int partition(int p,int r){
  int x = A[r];
  int i = p - 1;
  for(int j=p;j<r;j++){
    if(A[j] <= x){
      i = i+1;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1;
}
int main(){
  cin >>n;
  for(int i = 0;i<n;i++)cin >>A[i];
  int pos = partition(0,n-1);
  for(int i = 0;i<pos;i++)cout << A[i] << " ";
  cout << "["<<A[pos]<<"] ";
  for(int i = pos+1; i < n-1;i++)cout <<A[i] <<" ";
  cout << A[n-1]<<endl;
}

