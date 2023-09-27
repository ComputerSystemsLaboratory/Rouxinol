#include <bits/stdc++.h>
using namespace std;

int main(){

  string str[10] = {
    ".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
  };

  int n;
  cin >> n;
  while( n-- ){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
      if(s[i] == '0') continue;
      int j = 0;
      while( s[i+j] != '0' ) j++;
      cout << str[ (int)s[i+j-1]-'1' ][ (j-1)%str[ (int)s[i]-'1' ].size()];
      i += j;
    }
    cout << endl;
  }
	return 0 ;
}
