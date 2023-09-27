#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
  string str,mn,ml;
  map<string,int> cnt;

  while( cin >> str ){
    int xx = ++cnt[str];
    if( xx > cnt[mn] ) mn = str;
    if( str.size() > ml.size()) ml = str;
  }
  cout << mn << " " << ml << endl;

  return 0;
}