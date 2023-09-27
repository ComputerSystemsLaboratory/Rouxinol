#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  while(cin >> n >> m, n || m){
    int s[100], t[100];
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < m; i++) cin >> t[i];
    int ans1 = 114514, ans2 = 114514;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
	swap(s[i], t[j]);
	if(accumulate(s, s + n, 0) == accumulate(t, t + m, 0)){
	  if(ans1 + ans2 > s[i] + t[j]) ans1 = t[j], ans2 = s[i];
	}
	swap(s[i], t[j]);
      }
    }
    if(ans1 == 114514) cout << -1 << endl;
    else cout << ans1 << " " << ans2 << endl;
  }
  return 0;
}