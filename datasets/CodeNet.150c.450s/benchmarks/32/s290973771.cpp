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
#include<limits>
using namespace std;

#define R(i,s,n) for(int i=s;i<n;i++)
#define D(i,n,s) for(int i=n-1;i>=s;i--)
typedef pair<int,int> P;
typedef unsigned long long ull;
typedef long long ll;

int main() {
  int m,nmin,nmax;
  while (cin >> m >> nmin >> nmax && m) {
    int sco[m];
    R(i,0,m) {
      cin >> sco[i];
    }
    int tmp = 0;
    int ans;
    R(i,nmin-1,nmax) {
      if (tmp <= sco[i]-sco[i+1]) {
        tmp = sco[i]-sco[i+1];
        ans = i+1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}

