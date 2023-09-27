#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
  int n;
  char a,b;
  map<char,char> m;
  string s;
  while(cin>>n,n){
    m.clear();
    while(n--){
      cin>>a>>b;
      m[a]=b;
    }
    cin>>n;
    s="";
    while(n--){
      cin>>a;
      if(m.find(a)==m.end()) s+=a;
      else s+=m[a];
    }
    cout<<s<<endl;
  }
  return 0;
}