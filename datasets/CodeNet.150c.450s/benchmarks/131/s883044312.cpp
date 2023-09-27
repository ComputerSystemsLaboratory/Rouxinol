#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;

int L;
map<string,int> mp;

string fillDigit(string s){
  while(s.length() != L){
    s = "0" + s;
  }
  return s;
}

string itoa(int x){
  stringstream ss;
  ss << x;

  string res = ss.str();

  return fillDigit(res);
}

string next(string s){
  sort(s.rbegin(), s.rend());

  int upper = atoi(s.c_str());

  sort(s.begin(), s.end());

  int lower = atoi(s.c_str());

  return itoa(upper - lower);
}

int main(){
  string s;

  while(cin >> s >> L, s != "0" || L){
    s = fillDigit(s);
    mp.clear();

    for(int i = 0; ; i++){
      if(mp.find(s) != mp.end()){
        cout << mp[s] << " " << atoi(s.c_str()) << " " << i - mp[s] << endl;
        break;
      }
      mp[s] = i;
      s = next(s);
    }
  }
}