#include <iostream>
using namespace std;

using ll = long long;

#define for_(i, a, b) for(int i = (a);i < (b);++i)
#define rfor_(i, a, b) for(int i = (b)-1;i >= (a);--i)
#define rep(i, n) for_(i, 0, n)
#define rrep(i, n) rfor_(i, 0, n)

int st[202], l;

string str;

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  
  getline(cin, str);
  
  bool f = true;
  for(char c : str) {
  	if('0' <= c && c <= '9') {
  		if(f)st[l++] = c - '0';
  		else st[l-1] = st[l-1] * 10 + (c - '0');
  		f = false;
  	}else if(c=='+') {
  		st[l-2] = st[l-2] + st[l-1];
  		l--;
  	}else if(c=='-') {
  		st[l-2] = st[l-2] - st[l-1];
  		l--;
  	}else if(c=='*') {
  		st[l-2] = st[l-2] * st[l-1];
  		l--;
  	}else {
  		f = true;
  		//rep(i, l)cout<<st[i]<<' ';
  		//cout<<endl;
  	}
  }
  
  cout<<st[l-1]<<endl;
  
  return 0;
}

