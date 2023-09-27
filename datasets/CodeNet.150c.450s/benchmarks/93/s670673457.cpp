#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define REPR(i, m, n) for (int i = (int)(m); i >= (int)(n); i--)
#define all(v) v.begin(), v.end()
typedef long long ll;

#define MAX 100000
#define SENTINEL 2000000000

struct Card{
  char suit;
  int value;
};

struct Card L[MAX/2+2], R[MAX/2+2];

void merge(struct Card a[], int n, int l, int m, int r){
  int n1 = m-l;
  int n2 = r-m;
  rep(i, n1) L[i] = a[l+i];
  rep(i, n2) R[i] = a[m+i];
  L[n1].value = SENTINEL;
  R[n2].value = SENTINEL;
  int i = 0;
  int j = 0;
  REP(k, l, r-1){
    if(L[i].value <= R[j].value) a[k] = L[i++];
    else a[k] = R[j++];
  }
}

void mergeSort(struct Card a[], int n, int l, int r){
  if(l+1 < r){
    int m = (l+r)/2;
    mergeSort(a, n, l, m);
    mergeSort(a, n, m, r);
    merge(a, n, l, m, r);
  }
}

int partition(struct Card a[], int n, int p, int r){
  Card x = a[r];
  int i = p-1;
  REP(j, p, r){
    if(a[j].value <= x.value) swap(a[++i], a[j]);
  }
  return i;
}

void quickSort(struct Card a[], int n, int p, int r){
  if(p < r){
    int q = partition(a, n, p, r);
    quickSort(a, n, p, q-1);
    quickSort(a, n, q+1, r);
  }
}

int main(){
  int n; cin >> n;
  struct Card a[MAX], b[MAX];
  rep(i, n){
    char c;
    int v;
    cin >> c >> v;
    a[i].suit = b[i].suit = c;
    a[i].value = b[i].value = v;
  }

  mergeSort(a, n, 0, n);
  quickSort(b, n, 0, n-1);

  bool ok = true;
  rep(i, n){
    if(a[i].suit != b[i].suit){
      ok = false;
      break;
    }
  }
  cout << (ok ? "Stable" : "Not stable") << endl;

  rep(i, n){
    printf("%c %d\n", b[i].suit, b[i].value);
  }

  return 0;
}




