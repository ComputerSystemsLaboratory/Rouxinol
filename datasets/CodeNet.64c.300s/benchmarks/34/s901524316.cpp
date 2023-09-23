#include<iostream>
using namespace std;

void insertSort(int A[100],int N){
  int j,key;


  for(int k=0;k<N-1;k++)cout<<A[k]<<' ';
  cout<<A[N-1]<<endl;

  for(int i=1;i<N;i++){
   key=A[i];
    j=i-1;
    while(j>=0 && A[j]>key){
      A[j+1]=A[j];
      j--;}
    A[j+1]=key;
    for(int k=0;k<N-1;k++)cout<<A[k]<<' ';
    cout<<A[N-1]<<endl;}
}

int main(){
  int N,A[100];
  cin>>N;
  for(int i=0;i<N;i++)cin>>A[i];
  insertSort(A,N);
}