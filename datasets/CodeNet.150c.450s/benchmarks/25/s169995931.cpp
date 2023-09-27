#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
#include<numeric>
using namespace std;


int main(void) {

  string s;
  string a = "abcdefghijklmnopqrstuvwxyz";
  vector<int> alp(26, 0);
  while(cin >> s){
    for(int i=0; i<s.size(); i++){
      if( s[i]-'A' >= 0 && s[i]-'A' < 26 ) alp[ s[i]-'A' ]++;
      if( s[i]-'a' >= 0 && s[i]-'a' < 26 ) alp[ s[i]-'a' ]++;
    }

  }

  for(int i=0; i<26; i++){
    cout << a[i] << " : " << alp[i] << endl;
  }

  return 0;
}