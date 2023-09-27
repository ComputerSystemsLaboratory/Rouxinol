#include <iostream>
#include <cstdio>
#include <set>
using namespace std;




int main(){
ios::sync_with_stdio(false);
  int n; cin >> n;
  set<string> s;
  for(int i=0; i<n; i++){
    string s1,s2;
    cin >> s1 >> s2;
    if(s1[0] == 'i') s.insert(s2);
    else{
      if(s.find(s2) == s.end()) printf("no\n");
      else printf("yes\n");
    }
  }

}