#include <iostream>
using namespace std;

int main()
{
  int i,j,k,v;
  int n;
  int *A;

  cin >> n;
  A = new int [n];
  for(i=0; i<n; i++){
    cin >> A[i];
  }
  for(i=0; i<n-1; i++){// initial state                                         
    cout << A[i] << ' ';
  }
  cout << A[n-1] << "\n";

  for( i=1; i<n; i++ ){
    v = A[i];
    for(j=i-1; j>=0 && A[j]>v;){
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;
    for(k=0;k<n-1;k++){
      cout << A[k] << ' ';
    }
    cout << A[n-1] << "\n";
  }

  delete [] A;
  return 0;
}