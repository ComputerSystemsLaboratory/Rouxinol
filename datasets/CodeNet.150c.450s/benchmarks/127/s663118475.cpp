// {{{ include and macros
#define debug(x) cout<<#x<<": "<<x<<endl
#define rep(a, b) for(int unsafe_cnt=a; unsafe_cnt < b;unsafe_cnt++)
#include <iostream>
// #include <stdio.h>
// #include <vector>
// #include <math.h>
#include <algorithm>
#include <string>
// #include <map>
#include <set>
using namespace std;
// }}}

// {{{ put
void newline() {cout << endl;}
template <typename T> void display(T input){cout << input;}
template <typename T> void put(T input){display(input); newline();}
// }}}

pair<string, string> split_n(const string str, const int i){
  string a, b;
  for(int l=0; l<str.size(); l++){
    if(i>l){
      a.push_back(str[l]);
    }else{
      b.push_back(str[l]);
    }
  }
  return make_pair(a, b);
}

set<string> train_pattern(const string x, const string y, set<string> ret){
  string xr = x;
  string yr = y;
  reverse(xr.begin(), xr.end());
  reverse(yr.begin(), yr.end());
  string a = x  + y;
  string b = xr + y;
  string c = x  + yr;
  string d = xr + yr;
  string e = y  + x;
  string f = y  + xr;
  string g = yr + x;
  string h = yr + xr;
  ret.insert(a);
  ret.insert(b);
  ret.insert(c);
  ret.insert(d);
  ret.insert(e);
  ret.insert(f);
  ret.insert(g);
  ret.insert(h);
  return ret;
}

int main() {
  int input;
  cin >> input;
  for(int unsafe_i=0; unsafe_i<input; unsafe_i++){
    string str;
    cin >> str;
    set<string> ret;
    for(int l=1; l<str.size(); l++){
      pair<string, string> p = split_n(str, l);
      ret = train_pattern(p.first, p.second, ret);
    }
    put(ret.size());
  }
}