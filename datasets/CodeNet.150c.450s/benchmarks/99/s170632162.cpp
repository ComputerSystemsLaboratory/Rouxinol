#include <bits/stdc++.h>
using namespace std;
#define int long long 

char ch[] = {'m', 'c', 'x', 'i'};
int value[] = {1000, 100, 10, 1};


int to_val(string s) {
  
  int ret = 0;
  for(int i = 0; i < s.size(); i++) {
    int v = 1;
    if('2' <= s[i] && s[i] <= '9') {
      v = s[i] - '0';
      i++;
    }
    for(int j = 0; j < 4; j++) {
      if(s[i] == ch[j]) ret += value[j] * v;
    }
  }

  return ret;
}
  
signed main()
{
  int N;
  
  cin >> N;
  for(int i = 0; i < N; i++) {
    string a, b;

    cin >> a >> b;
    
    int val = to_val(a) + to_val(b);
    
    string ans;
    
    for(int j = 0; j < 4; j++) {
      if(val >= value[j]) {
	if(val >= value[j] * 2) {
	  ans += '0' + val / value[j];
	}
	ans += ch[j];
	val -= (val / value[j]) * value[j];
      }
    }
    cout << ans << endl;
  }

  return 0;
}
    