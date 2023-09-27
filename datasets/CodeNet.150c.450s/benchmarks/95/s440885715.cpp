#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    int cnt = 0;
    bool st = false;
    bool ron=false,lon=false;
    while(n--){
      string s;
      cin>>s;
      if(s=="lu") lon=true;
      if(s=="ru") ron=true;
      if(s=="ld") lon=false;
      if(s=="rd") ron=false;
      if(!st & ron&lon){
	++cnt;
	st=true;
      }
      else if(st & !ron & !lon){
	++cnt;
	st=false;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}