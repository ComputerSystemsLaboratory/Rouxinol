#include<iostream>
using namespace std;

const static int MAX = 100;
int counter=0;

void bubbleSort(int A[],int N){
  for(int i=0;i<N;i++)
    for(int j=N-1;j>i;j--)
      if(A[j]<A[j-1] && j>0){
	int v=A[j];
	A[j]=A[j-1];
	A[j-1]=v;
	counter++;
      }
}
int main(void){
  int A[MAX],N;

  cin>>N;

  for(int i=0;i<N;i++)cin>>A[i];
  bubbleSort(A,N);

  for(int i=0;i<N;i++){
    if(i>0)
      cout<<" ";
    cout<<A[i];
  }
  cout<<endl<<counter<<endl;

  return 0;

}