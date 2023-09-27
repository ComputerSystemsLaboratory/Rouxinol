
//=====================================================
// 
// (setq backup-inhibited t)
// (setq auto-save-default nil)
// 
// (column-number-mode t)
// (setq-default tab-width 2 indent-tabs-mode nil)
// 
// (global-set-key "\C-h" 'delete-backward-char)
// 
// (setq indent-line-function 'indent-relative-maybe)
// (global-set-key "\C-m" 'newline-and-indent)
// 
//=====================================================

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

bool comp(const pair<int, int>& lhs, const pair<int, int>& rhs) {
  return lhs.second > rhs.second;
}

int main() {
  while(1){
    int n;
    cin >> n;
    if (!n) break;
    vector<int> v(86400);
    for (int i = 0; i < n; ++i) {
      int h[2],m[2],s[2];
      scanf("%d:%d:%d",&h[0],&m[0],&s[0]);
      scanf("%d:%d:%d",&h[1],&m[1],&s[1]);
      int bg = h[0]*3600 + m[0]*60 + s[0];
      int ed = h[1]*3600 + m[1]*60 + s[1];
      ++v[bg];
      --v[ed];
    }
    for (int i = 1; i < 86400; ++i) {
      v[i] += v[i-1];
    }
    cout << *max_element(begin(v), end(v)) << endl;
  }
  return 0;
}