#include <iostream>
#include <cstdio>
using namespace std;

#define pii pair<int,int>

int main() {
  int n, m;
  while(cin >> n >> m && n+m) {
    int a[n], b[m];
    int suma=0, sumb=0;
    for(int i=0; i<n;i++) {
      cin >> a[i];
      suma += a[i];
    }
    for(int i=0; i<m;i++) {
      cin >> b[i];
      sumb += b[i];
    }
    int sa = sumb-suma;
    pii ans = pii(200,200);
    for(int i=0;i<n;i++) {
      for(int j=0;j<m;j++) {
        if (sa == 2*(b[j]-a[i])) {
          if (ans.first + ans.second > b[j]+a[i])
            ans = pii(a[i],b[j]);
        }
      }
    }
    if (ans.first == 200)
      cout << -1 << endl;
    else
      cout << ans.first << " " << ans.second << endl;
  }
}