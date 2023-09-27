#include <iostream>
#include <map>
using namespace std;


int main(){

  string s;
  map<string,int> m;
  while(cin >> s){
    for(int i=0; i<s.size(); i++){
      string sub = s.substr(i,1);
      if("A"  <= sub && sub <= "Z") sub[0] += 32;
      if("a"  <= sub && sub <= "z"){
	if(m.find(sub) == m.end())
	  m[sub] = 1;
	else
	  m[sub]++;
      }
    }
  }
  s = "a";
  for(int i=0; i<26; i++){
    cout << s << " : " << m[s] << endl;
    s[0]++;
  }
}