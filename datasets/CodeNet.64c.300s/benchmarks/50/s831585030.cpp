#include<iostream>
using namespace std;

int sw=0;

void bubbleSort(int A[],int N){
  bool flag=1;
  int i=0;
 
  while(flag){
    flag=0;
    for(int j=N-1;j>i;j--){
      if(A[j]<A[j-1]){
	swap(A[j],A[j-1]);
	flag=1;
	sw++;
      }
    }
    i++;
  }
}


int main(){
  int N,A[100];
  
  cin>>N;
  for(int i=0;i<N;i++)cin>>A[i];
  bubbleSort(A,N);
  for(int i=0;i<N;i++){
    if(i!=0) cout<<" ";
    cout<<A[i];
  }
  cout<<endl;
  cout<<sw<<endl;
  return 0;
}