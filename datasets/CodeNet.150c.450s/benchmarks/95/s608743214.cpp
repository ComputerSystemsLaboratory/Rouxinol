#include <iostream>
#define REP(i, a, n) for(int i = ((int) a); i < ((int) n); i++)
using namespace std;

int N;
string S[100];

int main(void) {
  while(cin >> N, N) {
    REP(i, 0, N) cin >> S[i];
    int l = 0, r = 0, s = 0;
    int ans = 0;
    REP(i, 0, N) {
      if(S[i] == "lu") l = 1;
      if(S[i] == "ru") r = 1;
      if(S[i] == "ld") l = 0;
      if(S[i] == "rd") r = 0;
      if(s == 0 && l == 1 && r == 1) {
        ans++;
        s = 1;
      } else if(s == 1 && l == 0 && r == 0) {
        ans++;
        s = 0;
      }
    }
    cout << ans << endl;
  }
  return 0;
}