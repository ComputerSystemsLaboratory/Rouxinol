#include<iostream>
using namespace std;

int A[100000];

int partiton( int A[], int p, int r ){
  int x = A[r];
  int i = p-1;
  for( int j=p; j<r; j++ ){
    if( A[j] <= x ){
      i += 1;
      swap( A[i], A[j] );
    }
  }
  swap( A[i+1], A[r] );

  return i+1;
}

int main(){
  int n;
  cin >> n;

  for( int i=0; i<n; i++ ){
    cin >> A[i];
  }

  int p = partiton( A, 0, n-1 );

  for( int k=0; k<n; k++ ){
    if( k != p ){
      if( k != n-1 ){
        cout << A[k] << " ";
      }else{
        cout << A[k] << endl;
      }
    }else{
      cout << "[" << A[k] << "] ";
    }
  }

  return 0;
}
