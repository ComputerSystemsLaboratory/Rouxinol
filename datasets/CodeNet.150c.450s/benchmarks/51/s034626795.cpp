#include<bits/stdc++.h>
using namespace std;
int main(){

  int a;
  set<int> s;
  for(int i=0;i<28;i++){
    cin >> a;
    s.insert(a);
  }
  
  for(int i=1;i<=30;i++){
    if(s.find(i) == s.end()) cout << i << endl;
  }
  return (0);
}