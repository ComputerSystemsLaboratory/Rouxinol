#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  
  map<int, int> m;
  int x;
  for(int i=0; i<n; i++){
    cin >> x;
    if(m.count(x))
      m[x]++;
    else
      m[x] = 1;
  }
  
  cin >> x;

  long long ans = 0;
  for(int i=0; i<x; i++){
    int b, c;
    cin >> b >> c;
    
    long long diff;
    if(m.count(c)){
      m[c] += m[b];
      diff = (long long)m[b]*c - (long long)m[b]*b;
    }
    else{
      m[c] = m[b];
      diff = (long long)m[c]*c - (long long)m[b]*b;
    }
    
    m.erase(b);
    
    if(i==0){
      for(auto p : m){
        auto key = p.first;
        auto value = p.second;
        ans += (long long)key * value;  
      }
    }
    else{
      ans += diff;
    }
    
    cout << ans << endl;
  }
}
