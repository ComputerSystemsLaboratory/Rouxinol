#include <iostream>
using namespace std;

string trans(string s,int t){
  return s.substr(t,s.length()-t) + s.substr(0,t);
}

int main(){

  while(1){
    string s; cin >>s;
    if(s == "-") break;
    int n; cin >> n;
    for(int i=0; i<n; i++){
      int t; cin >> t;
      s = trans(s,t);
    }
    cout << s <<endl;
    
  }
}