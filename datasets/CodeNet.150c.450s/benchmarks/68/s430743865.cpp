#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<numeric>
#include<map>
using namespace std;

#define R(i,s,n) for(int i=s;i<n;i++)
#define D(i,n,s) for(int i=n-1;i>=s;i--)
typedef pair<int,int> P;

int main() {
  int n;
  while (cin >> n && n) {
    int a[n];
    R(i,0,n) {
      cin >> a[i];
    }
    int ans = 1e+6;
    R(i,0,n-1) {
      R(j,i+1,n) {
        int tmp = abs(a[i]-a[j]);
        ans = min(tmp, ans);
      }
    }
    cout << ans << endl;
  }
  return 0;
}

