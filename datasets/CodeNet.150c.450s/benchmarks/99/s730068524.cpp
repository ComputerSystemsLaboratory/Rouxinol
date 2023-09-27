#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define Rep(i, N) for(int i = 0; i < N; i++)

char ch[] = {'m', 'c', 'x', 'i'};
int value[] = {1000, 100, 10, 1};


int to_val(string s) {
  
  int ret = 0;
  Rep(i, s.size()) {
    int v = 1;
    if('2' <= s[i] && s[i] <= '9') {
      v = s[i] - '0', i++;
    }
    Rep(j, 4) {
      if(s[i] == ch[j]) ret += value[j] * v;
    }
  }

  return ret;
}
  
signed main()
{
  int N;
  
  cin >> N;
  Rep(i, N) {
    string a, b;

    cin >> a >> b;
    
    int val = to_val(a) + to_val(b);
    
    string ans;
    
    Rep(j, 4) {
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
    