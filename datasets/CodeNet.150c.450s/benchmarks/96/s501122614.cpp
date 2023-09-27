#include <bits/stdc++.h>

using namespace std;

int main()
{
  string code[] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  int len[] = {5, 3, 3, 3, 3, 3, 4, 3, 4};
  
  int N;
  cin >> N;
  while(N--){
    string s;
    cin >> s;
    char c = '#';
    int idx = 0;
    for(int i = 0; i < s.size(); i++){
      if(s[i] == '0'){
	if(c != '#') cout << c;
	c = '#';
	idx = 0;
      } else {
	c = code[s[i]-'0'-1][idx];
	idx = (idx + 1) % len[s[i]-'0'-1];
      }
    }
    cout << endl;
  }

  return 0;
}