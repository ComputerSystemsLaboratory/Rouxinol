#include <iostream>
#include <vector>
using namespace std;

int main(){
  string s, p, ans = "No";
  int init;
  cin >> s >> p;
  init = s.length();
  s.append(s);

  for(int i=0; i<init; i++){
    bool flag = true;
    for(int j=0; j<p.length(); j++){
      if(p[j] != s[j+i]){
	flag = false;
	break;
      }
    }
    if(flag){
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;

  return 0;
}