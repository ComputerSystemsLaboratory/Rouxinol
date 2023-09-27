#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

string revstr(const string &s){
	string a=s;
	reverse(a.begin(),a.end());
	return a;
}

int main(void){
  int m;cin>>m;
  while(m--){
    string s;cin>>s;
    set<string> pattern;
    for(int i=1;i<s.size();++i){
      string a=s.substr(0,i),b=s.substr(i,s.size()-i);
      //cerr<<a<<":"<<b<<endl;
      pattern.insert(a+b);
      pattern.insert(revstr(a)+b);
      pattern.insert(a+revstr(b));
      pattern.insert(revstr(a)+revstr(b));
      swap(a,b);
      pattern.insert(a+b);
      pattern.insert(revstr(a)+b);
      pattern.insert(a+revstr(b));
      pattern.insert(revstr(a)+revstr(b));
    }
    cout<<pattern.size()<<endl;
  }
  return 0;
}