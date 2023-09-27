#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string c[11] = {"",
		".,!? ",
		"abc",
		"def",
		"ghi",
		"jkl",
		"mno",
		"pqrs",
		"tuv",
		"wxyz"};
int main(void){
  int n;
  cin >> n;
  string s;
  for(int i = 0; i < n; i++){
    string res;
    cin >> s;
    char a = '0';
    int b = 0;
    for(int j = 0; j < (int)s.size(); j++){
      if(s[j] == a){
	b++;
      }else{
	if(a-'0')
	  res += c[a-'0'][b%(int)c[a-'0'].size()];
	a = s[j];
	b = 0;
      }
    }
    cout << res << endl;
  }
}