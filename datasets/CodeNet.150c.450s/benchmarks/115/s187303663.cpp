#include <iostream>
#include <algorithm>
#define MAX_N 1001
using namespace std;
//lcs
int n,m;
string s,t;
int dp[MAX_N+1][MAX_N+1];
void solve(){
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
      if(s[i]==t[j]) dp[i+1][j+1]=dp[i][j]+1;
      else dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
    }
  cout<<dp[n][m]<<endl;
}


int main(){
  int N;
  cin>>N;
  while(N--){
    cin>>s>>t;
    n=s.size();
    m=t.size();
    solve();
  }
  return 0;
}
//greatest common divisor
/*int main() {
  int a,b;
  cin >> a >>b;
  cout << __gcd(a,b)<<endl;
  return 0;
  }*/
//lcm
//__builtin_popcount()

//flymake
/*(require 'flymake)
 
(defun flymake-cc-init ()
(let* ((temp-file (flymake-init-create-temp-buffer-copy
'flymake-create-temp-inplace))
(local-file (file-relative-name
temp-file
(file-name-directory buffer-file-name))))
(list "g++" (list "-Wall" "-Wextra" "-fsyntax-only" local-file))))
 
(push '("\\.cpp$" flymake-cc-init) flymake-allowed-file-name-masks)
 
(add-hook 'c++-mode-hook
'(lambda ()
(flymake-mode t)))
(custom-set-variables
 '(ansi-color-names-vector ["#2d3743" "#ff4242" "#74af68" "#dbdb95" "#34cae2" "#008b8b" "#00ede1" "#e1e1e0"])
 '(custom-enabled-themes (quote (tsdh-light))))

*/