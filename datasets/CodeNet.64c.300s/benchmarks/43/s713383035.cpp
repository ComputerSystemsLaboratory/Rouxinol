#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[4];
  int t[4];
  int a_ans = 0;
  int t_ans = 0;
  int ans = 0;

  for(int i = 0; i < 4; i++){
    cin >> a[i];
    a_ans+=a[i];
  }

  for(int i = 0; i < 4; i++){
    cin >> t[i];
    t_ans+=t[i];
  }

  ans = max(t_ans,a_ans);
  cout << ans << endl;

}