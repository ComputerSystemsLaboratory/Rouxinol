#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;

class card{
public:
  char p;
  int v;
  bool operator<(const card &another) const{
    return v < another.v;
  }
};

int n;
card a[100000], b[100000];

int part(int l, int r){
  card x = a[r - 1];
  int j = l - 1;
  for(int i = l; i < r - 1; i++){
    if(a[i].v <= x.v){
      j++;
      card t = a[i]; a[i] = a[j]; a[j] = t;
    }
  }
  j++;
  card t = a[j]; a[j] = x; a[r - 1] = t;
  return j;
}

void q(int l, int r){
  if(l + 1 >= r) return;
  int p = part(l, r);
  q(l, p);
  q(p + 1, r);
  return;
}

void solve(){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i].p >> a[i].v;
    b[i] = a[i];
  }
  q(0, n);
  stable_sort(b, b + n);
  bool ok = true;
  for(int i = 0; i < n; i++){
    if(a[i].p != b[i].p) ok = false;
  }
  if(ok) cout << "Stable\n";
  else cout << "Not stable\n";
  /*for(int i = 0; i < n; i++){
    cout << b[i].p << " " << b[i].v << endl;
  }*/

  for(int i = 0; i < n; i++){
    cout << a[i].p << " " << a[i].v << endl;
  }
  return;
}

int main(){
  solve();
  return 0;
}

