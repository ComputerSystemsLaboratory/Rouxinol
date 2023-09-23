#include<iostream>
using namespace std;

void bubblesort(int A[100], int N){
  int cnt=0;

  for(int i=0;i<N;i++){
    for(int j=N-1;j>i;j--){
      if(A[j]<A[j-1]){
        swap(A[j],A[j-1]);
        cnt++;}
    }
}
  for(int k=0;k<N-1;k++)cout <<A[k]<<" ";
  cout <<A[N-1]<<endl;
cout <<cnt<<endl;}

int main(){
  int N,A[100];
  cin>>N;
  for(int i=0;i<N;i++)cin>>A[i];
  bubblesort(A,N);
}