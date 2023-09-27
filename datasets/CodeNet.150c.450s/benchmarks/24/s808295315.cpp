#include <iostream>
#include <algorithm>
#define p first
#define d second
using namespace std;

int main() {
  while(1) {
  int n,m;
  cin >> n >> m;
  if(n == 0 && m == 0) break;

  pair <int,int> pd[10001];
  for(int i=0;i<n;i++) cin >> pd[i].d >> pd[i].p;
  sort(pd,pd+n);

  int ans = 0;
  for(int i=n-1;i>=0;i--)
    if(m >= pd[i].d) m-=pd[i].d;
    else if(m > 0) ans += (pd[i].d-m)*pd[i].p,m = 0;
    else ans+=pd[i].d*pd[i].p;
 
  cout << ans <<endl;
  }
  return 0;
}