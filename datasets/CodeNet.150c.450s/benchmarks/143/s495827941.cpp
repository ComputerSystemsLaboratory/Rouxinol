#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin >> n;
  map<int, long> a;
  long long sum = 0;
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    a[x]++;
    sum += x;
  }
  int q; cin >> q;
  for(int i = 0; i < q; i++){
    int b,c; cin >> b >> c;
    //printf("%d %d\n",b,a[b]);
    if(a.count(b)){
      sum -= b * a[b];
      sum += c * a[b];
      a[c] += a[b];
      a.erase(b);
    }
    cout << sum << endl;
  }
  
}