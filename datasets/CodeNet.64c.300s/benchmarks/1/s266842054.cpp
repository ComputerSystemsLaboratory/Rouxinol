#include <iostream>
using namespace std;

int A[100000], n;

int partiton(int p, int r){
  int x, i, j, t;
  x = A[r];
  i = p-1;
  for ( j=p; j<r; j++){
    if(A[j] <= x){
      i++;
      t = A[i];
      A[i] = A[j];
      A[j] = t;
    }
  }
  t = A[i+1];
  A[i+1] = A[r];
  A[r] = t;
  return i+1;
}

int main() {
    ios::sync_with_stdio(false);
    int q;
    cin >> n;
    for(int i=0; i<n; i++){
      cin >> A[i];
    }
    q = partiton(0, n-1);
    for(int i=0; i<n; i++){
      if(i) cout << " ";
      if(i==q) cout << "[";
      cout << A[i];
      if(i==q) cout << "]";
    }
    cout << "\n";

}