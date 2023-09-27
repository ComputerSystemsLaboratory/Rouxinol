#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
string rev(string s){
  reverse(s.begin(),s.end());
  return s;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    set<string> tbl;
    string s;
    cin >> s;
    for(int i=1;i<s.length();++i){
      string a = s.substr(0,i);
      string b = s.substr(i,s.length()-i);
      for(int i=0;i<4;++i){
	string c=a,d=b;
	if(i&1) c = rev(c);
	if(i>=2) d = rev(d);
	tbl.insert(c+d);
	tbl.insert(d+c);
      }
    }
    cout << tbl.size() << endl;
  }
  return 0;
}