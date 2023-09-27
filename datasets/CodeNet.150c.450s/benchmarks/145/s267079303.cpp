#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
  map<string,int> m;
  map<string,int>::iterator p;
  int ans=0,count=0; 
  string ans1 ,ans2;
  string s;
  while(cin >> s){
    ++m[s];
    if(ans<s.size()){
      ans = s.size();
      ans2 = s;
    }
  }
  p = m.begin();
  for(p=m.begin();p!=m.end();p++){
    if(count<p->second){
      count = p->second;
      ans1 = p->first;
    }
  }
  cout << ans1 << ' ' << ans2 << endl;
  return 0;
}