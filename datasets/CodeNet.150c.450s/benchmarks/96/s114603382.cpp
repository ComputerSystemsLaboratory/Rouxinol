#include <iostream>
#include <cstdio>
using namespace std;

char moji[9][5] = {
  {'.',',','!','?',' '},
  {'a','b','c'},
  {'d','e','f'},
  {'g','h','i'},
  {'j','k','l'},
  {'m','n','o'},
  {'p','q','r','s'},
  {'t','u','v'},
  {'w','x','y','z'}
};

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for(int j = 0; j < s.size(); j++) {
      char c = s[j];
      if(c == '0') continue;
      for(int k = 0; j+k < s.size(); k++) {
	if(s[j+k+1] == '0') {
	  int num = c-'0'-1;
	  if(num == 0) printf("%c", moji[num][k%5]);
	  else if(num == 6 || num == 8) printf("%c", moji[num][k%4]);
	  else printf("%c", moji[num][k%3]);
	  j += k;
	  break;
	}
      }
    }
    cout << endl;
  }
}