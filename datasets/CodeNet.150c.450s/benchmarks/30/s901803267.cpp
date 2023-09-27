#include<iostream>
using namespace std;

void selectsort(int A[100],int N){
  int cnt=0;
  for(int i=0;i<N-1;i++){
    int minj=i;
    for(int j=i;j<N;j++){
      if(A[j]<A[minj])minj=j;}
    if(A[i]>A[minj]){
    swap(A[i],A[minj]);
    cnt++;}
  }
  for(int k=0;k<N-1;k++)cout <<A[k]<<" ";
  cout <<A[N-1]<<endl;
  cout <<cnt<<endl;}

int main(){
  int N,A[100];
 cin>>N;
  for(int i=0;i<N;i++)cin>>A[i];
  selectsort(A,N);
}