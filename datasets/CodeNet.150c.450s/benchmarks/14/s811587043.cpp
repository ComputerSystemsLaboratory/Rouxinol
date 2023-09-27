#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;


int main(void) {

  int n;
  cin >> n;

  for(int i=1; i<=n; i++){
    if( i%3 == 0 || i%10 == 3 || (i%100)/10 == 3 ){
      cout << " " << i;
      continue;
    }
    string s = to_string(i);
    for(int j=0; j<s.size(); j++){
      if( s[j] == '3' ){
        cout << " " << i;
        break;
      }
    }
  }

  cout << endl;

  return 0;
}