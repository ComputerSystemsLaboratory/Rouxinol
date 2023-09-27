#include <iostream>
using namespace std;
 
#define N 100000
#define SWP(T, X, Y) {T _; _=(X);(X)=(Y);(Y)=_;}

int partition(int a[], int p, int r){
  int piv = a[r];
  int i = p-1;
  
  for (int j=p; j<r; j++){
    if (a[j] <= piv){
      i++;
      SWP(int, a[i], a[j]);
    }
  }
  SWP(int, a[i+1], a[r]);
  return i+1;
}

int main(void){
  int n, a[N], piv;
  
  cin >> n;
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  piv = partition(a,0,n-1);
  for (int i=0; i<n; i++){
    if (i==piv){
      cout << "[" << a[i] << "]";
    } else {
      cout << a[i];
    }
    cout << (i==n-1?"\n":" ");
  }
  
  return 0;
}
