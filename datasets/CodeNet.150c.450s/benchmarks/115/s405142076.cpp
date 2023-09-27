#include<iostream>
#include <string.h>
using namespace std;

#define MAX_NUM 1001
int fLength;
int sLength;

int memo[MAX_NUM][MAX_NUM];
string f, s;

/*******************
  Longest Common Subsequence
  ??¨??????????????§??????????????????(??¨??????????????§?????????)
 *********************/

void solve() {
  for(int i = 0; i < fLength; i++) {
    for(int j = 0; j < sLength; j++) {
      if(f[i] == s[j]) {
        memo[i + 1][j + 1] = memo[i][j] + 1;
      }
      else {
        memo[i + 1][j + 1] = max(memo[i + 1][j], memo[i][j + 1]);
      }
    }  
  }
}


int main(void) {
  int n;
  cin >> n;


  //?????????
  memset(memo, 0, sizeof(memo));
  for(int i = 0; i < n; i++) {
    cin >> f >> s;
    fLength = f.size();
    sLength = s.size();
    solve();
    cout << memo[fLength][sLength] << endl;
  }
  return 0;
}