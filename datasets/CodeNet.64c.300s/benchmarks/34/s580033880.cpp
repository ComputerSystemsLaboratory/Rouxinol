#include <iostream>
using namespace std;
#define MAX 1000

int A[MAX];

void insertSort(int n){
  int k;
  for(int i=1;i<=n;i++){
    k=A[i];
    int j=i-1;
    while(j>0 && A[j]>k){
      A[j+1]=A[j];
      j--;
    }
    A[j+1]=k;
    for(int l=1;l<=n;l++){
      if(l!=1) cout<<' ';
    cout<<A[l];
    }
    cout<<endl;
  }
}
    

int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>A[i];
  }

  insertSort(n);

  return 0;
}