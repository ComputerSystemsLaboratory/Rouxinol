#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map<string,int> tbl;
string input(){ string s;cin>>s;return s;}
int main(){
  int n,m;
  bool open = false;
  cin>>n;
  while(n--){
    tbl[input()]=1;
  }
  cin>>m;
  while(m--){
    string s = input();
    if(!tbl[s]) cout << "Unknown " << s << endl;
    else if(open){
      cout << "Closed by " << s << endl;
      open = false;
    }
    else{
      cout << "Opened by " << s << endl;
      open = true;
    }
  }
  return 0;
}