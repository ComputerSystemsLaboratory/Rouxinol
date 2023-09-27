#include <bits/stdc++.h>
using namespace std;

long long h;
vector<long long> v;

void makeh(int id);

int main() {
  cin >> h;
  v.resize(h + 1);
  for(int i = 0; i < h; ++i) cin >> v[i + 1];
  for(int i = h / 2; i > 0; --i) makeh(i);
  for(int i = 1; i <= h; ++i) cout << " " << v[i];
  cout << endl;
  return 0;
}

void makeh(int id) {
  long long l = id * 2, r = id * 2 + 1, lar = id;
  if(l <= h && v[l] > v[lar]) lar = l;
  if(r <= h && v[r] > v[lar]) lar = r;
  if(lar != id) {
    swap(v[id], v[lar]);
    makeh(lar);
  }
}

