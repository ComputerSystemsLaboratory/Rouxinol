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
  while(cin >> s){
    if( s == "0" ) break;
    int tmp = 0;
    for(int i=0; i<s.size(); i++){
      tmp += s[i]-'0';
    }
    cout << tmp << endl;

  }

  return 0;
}