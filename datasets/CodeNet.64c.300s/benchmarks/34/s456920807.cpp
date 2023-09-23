#include <bits/stdc++.h>
using namespace std;
#define R(i,n) for(int i=0;i<(n);i++)
#define R1(i,n) for(int i=1;i<(n);i++)
#define Int(x) int x; scanf("%d",&x);
#define PS(x,c) printf("%d",x); if(c) printf(" ");
#define NL printf("\n")

int main() {
  Int(n);
  int arr[n], v, j;
  R(i,n) cin >> arr[i];

  R1(i,n) {
    R(k,n) { PS(arr[k], k<n-1); }
    NL;

    v = arr[i];
    j = i-1;
    while(j>=0 && arr[j]>v) {
      arr[1+j] = arr[j];
      j--;
    }
    arr[1+j] = v;
  }
  R(i,n) { PS(arr[i], i < n-1); }
  NL;

  return 0;
}