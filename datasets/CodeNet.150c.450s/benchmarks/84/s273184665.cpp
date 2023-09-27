#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define REPR(i, m, n) for (int i = (int)(m); i >= (int)(n); i--)
#define all(v) v.begin(), v.end()
typedef long long ll;

#define MAX 200000
#define SENTINEL 2000000000

int n;
int a[MAX+10];
int L[MAX/2+2], R[MAX/2+2];

ll merge(int l, int m, int r){
  int n1 = m-l;
  int n2 = r-m;
  rep(i, n1) L[i] = a[l+i];
  rep(i, n2) R[i] = a[m+i];
  L[n1] = SENTINEL;
  R[n2] = SENTINEL;
  int i = 0;
  int j = 0;
  ll cnt = 0;
  REP(k, l, r-1){
    if(L[i] <= R[j]) a[k] = L[i++];
    else{
      a[k] = R[j++];
      cnt += n1 - i;
    }
  }
  return cnt;
}

ll mergeSort(int l, int r){
  if(l+1 < r){
    ll v1, v2, v3;
    int m = (l+r)/2;
    v1 = mergeSort(l, m);
    v2 = mergeSort(m, r);
    v3 = merge(l, m, r);
    return v1+v2+v3;
  }
  else return 0;
}

int main(){
  scanf("%d", &n);
  rep(i, n) scanf("%d", &a[i]);

  printf("%lld\n", mergeSort(0, n));

  return 0;
}



