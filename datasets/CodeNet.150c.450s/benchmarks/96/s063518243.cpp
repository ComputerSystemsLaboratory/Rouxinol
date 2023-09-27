#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
typedef long long ll;
vector<vector<char> > c(10, vector<char>(5));
int main()
{
  c[1][0] = '.';c[1][1] = ',';c[1][2] = '!';c[1][3] = '?';c[1][4] = ' ';
  FOR(i,0,3) c[2][i] = 'a' + i;
  FOR(i,0,3) c[3][i] = 'd' + i;
  FOR(i,0,3) c[4][i] = 'g' + i;
  FOR(i,0,3) c[5][i] = 'j' + i;
  FOR(i,0,3) c[6][i] = 'm' + i;
  FOR(i,0,4) c[7][i] = 'p' + i;
  FOR(i,0,3) c[8][i] = 't' + i;
  FOR(i,0,4) c[9][i] = 'w' + i;
  int n;
  cin >> n;
  while(n--) {
    string s;
    cin >> s;
    int cnt = 0;
    char now;
    string ans = "";
    FOR(i,0,s.length()) {
      if(s[i] == '0' && now != '0') {
        cnt--;
        if(now == '1') cnt %= 5;
        else if(now == '7' || now == '9') cnt %= 4;
        else cnt %= 3;
        ans += c[now-'0'][cnt];
        now = '0';
        cnt = 0;
      } else if(s[i] != '0'){
        now = s[i];
        cnt++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}