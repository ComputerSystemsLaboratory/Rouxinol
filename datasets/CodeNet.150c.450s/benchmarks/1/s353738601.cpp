#include <iostream>
using namespace std;
 
int main(){
  int N;
  int length=1;
  cin >> N;
  int A[N+1];
  int L[N+1];
 
  for(int i=1;i<N+1;++i){
     cin >> A[i];
  }
  L[1]=A[1];

   
  for(int i=1;i<N+1;++i){
    if(L[length] < A[i]) L[++length] = A[i];
    if(L[1] > A[i] ) L[1]=A[i];
    else{
      int l=1,r=length,mid;
      while(l<=r){
    mid = (l+r)/2;
    if(A[i] == L[mid] || A[i] == L[mid+1]) break;
    else if(A[i]<L[mid+1] && L[mid]<A[i]){
      L[mid+1] = A[i];
      break;
    }else if(A[i]<L[mid]) r=mid;
    else  if(A[i]>L[mid]) l=mid;
      }
    }
     
  }
   
  cout << length << endl;
}