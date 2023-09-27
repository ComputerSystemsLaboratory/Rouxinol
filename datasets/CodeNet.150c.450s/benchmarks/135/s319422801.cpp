#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,m;
int h[2222];
int w[2222];
int a[1500001];
int b[1500001];
int main(void){
  while(cin >> n >> m){
    if(!n) break;
    for(int i = 1; i <= n; i++){
      cin >> h[i];
      h[i] += h[i-1];
    }
    for(int i = 1; i <= m; i++){
      cin >> w[i];
      w[i] += w[i-1];
    }

    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(int i = 0; i < n; i++){
      for(int j = i+1; j <= n; j++){
	a[h[j]-h[i]]++;
      }
    }
    for(int i = 0; i < m; i++){
      for(int j = i+1; j <= m; j++){
	b[w[j]-w[i]]++;
      }
    }

    int res = 0;
    for(int i = 1; i <= 1500000; i++){
      res += a[i] * b[i];
    }
    cout << res << endl;
  }
}