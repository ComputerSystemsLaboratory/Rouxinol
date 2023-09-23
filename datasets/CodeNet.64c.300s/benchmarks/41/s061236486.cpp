#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define REPR(i, m, n) for (int i = (int)(m); i >= (int)(n); i--)
#define all(v) v.begin(), v.end()
typedef long long ll;

#define MAX 2000000 

int h;
int a[MAX];

int parent(int i){return i/2;};
int left(int i){return 2*i;};
int right(int i){return 2*i+1;};

void maxHeapify(int i){
  int l = left(i);
  int r = right(i);
  int max = a[i];
  if(l <= h && a[l] > max) max = a[l];
  if(r <= h && a[r] > max) max = a[r];
  if(max == a[l]){
    swap(a[i], a[l]);
    maxHeapify(l);
  }
  if(max == a[r]){
    swap(a[i], a[r]);
    maxHeapify(r);
  }
}

int main(){
  cin >> h;

  REP(i, 1, h) cin >> a[i];

  REPR(i, h/2, 1) maxHeapify(i);

  REP(i, 1, h) cout << " " << a[i];
  cout << endl;

  return 0;
}



