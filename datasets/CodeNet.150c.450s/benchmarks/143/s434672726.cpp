#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> p(100001);
  long long sum = 0;
  for(int i = 0; i < n; i++) {cin >> a[i]; p[a[i]-1]++; sum += a[i];}
  long long q;
  cin >> q;
  vector<pair<long long, long long>> b(q);
  for(int i = 0; i < q; i++) cin >> b[i].first >> b[i].second;
  for(int i = 0; i < q; i++){
    sum -= p[b[i].first-1] * b[i].first;
    long long q = p[b[i].first-1];
    p[b[i].first-1] = 0;
    p[b[i].second-1] += q;
    sum += b[i].second * q;
    cout << sum << endl;
  }
}