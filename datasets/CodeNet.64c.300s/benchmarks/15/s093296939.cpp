#include<iostream>
using namespace std;

static const int MAX=100;

int selectionSort(int A[],int N){
  int minj;
  int sw=0;
  bool flag=0;

  for(int i=0;i<N;i++){
    minj=i;
    flag=0;
    for(int j=i+1;j<N;j++){
      if(A[minj]>A[j]){
	minj=j;
	flag=1;
      }
    }
    if(flag)
      sw++;
    swap(A[i],A[minj]);
  }
    return sw;
}

int main(void){
  int A[MAX],N;
  int sw;

  cin>>N;
  for(int i=0;i<N;i++)cin>>A[i];

  sw=selectionSort(A,N);

  for(int i=0;i<N;i++){
    if(i)
      cout<<" ";
    cout<<A[i];
  }
  cout<<endl<<sw<<endl;

  return 0;
}

  
  

    