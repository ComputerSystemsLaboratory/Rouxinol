#include<bits/stdc++.h>
using namespace std;

int main()
{
  string data[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  int n;
  cin >> n;

  while( n-- ) {
    string s;
    cin >> s;

    int now_p = -1;
    char now_c = '0';
    for(int i=0; i<s.size(); i++) {
      if( s[i] == '0' ) {
	if( now_c == '0' ) continue;
	else {
	  cout << data[now_c-'0'][now_p];
	  now_c = '0';
	  now_p = -1;
	}
      } 
      else {
	now_c = s[i];
	now_p++;
	if( now_p >= data[now_c-'0'].size() ) {
	  now_p = 0;
	}
      }
    }

    cout << endl;
  }
}