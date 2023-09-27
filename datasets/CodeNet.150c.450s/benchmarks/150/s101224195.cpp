#include <iostream>
#include <algorithm>
using namespace std;

void countingSort(int*, int*, int, int);
int main(){
  int n; cin >> n;
  int a[n], b[n];
  int m=-1;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    m = max(m, a[i]);
  }

  countingSort(a, b, m, n);

  for(int i=0; i<n; i++){
    cout << b[i];
    if(i!=n-1) cout << " ";
  }
  cout << endl;
  return 0;
}

void countingSort(int* a, int*b, int k, int n){
  int c[k+1];
  for(int i=0; i<=k; i++) c[i]=0;

  for(int j=0; j<n; j++) c[a[j]]++;

  for(int i=1; i<=k; i++) c[i] += c[i-1];

  for(int j=n-1; j>=0; j--){
    b[c[a[j]]-1] = a[j];
    //cout << c[a[j]] << ": " << b[c[a[j]]] << endl;
    c[a[j]]--;
  }

}

