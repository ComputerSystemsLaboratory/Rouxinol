#include <iostream>
using namespace std;
 
#define N 500000
#define INF 1000000007
typedef long long LLI;

int cmpCnt;

void merge(LLI a[], int l, int m, int r){
  int bufL[N+1], bufR[N+1];
  int n1, n2, idL, idR;
  n1 = m-l; n2 = r-m;
  for (int i=0; i<n1; i++) bufL[i] = a[l+i];
  for (int i=0; i<n2; i++) bufR[i] = a[m+i];
  bufL[n1] = bufR[n2] = INF;
  idL = idR = 0;
  for (int i=l; i<r; i++){
    cmpCnt++;
    if (bufL[idL]<=bufR[idR]){
      a[i] = bufL[idL++];
    } else {
      a[i] = bufR[idR++];
    }
  }
}

// a[l...r)をソート
void mrgSort(LLI a[], int l, int r){
  if (r-l <= 1) return;
  int m = (l+r)/2;
  mrgSort(a,l,m);
  mrgSort(a,m,r);
  merge(a,l,m,r);
}

int main(void){
  int n;
  LLI a[N];
  
  cin >> n;
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  mrgSort(a, 0, n);
  for (int i=0; i<n; i++){
    cout << a[i];
    cout << (i==n-1?"\n":" ");
  }
  cout << cmpCnt << endl;
  return 0;
}
