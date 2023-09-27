// {{{ include and macros
#define debug(x) cout<<#x<<": "<<x<<endl
#define rep(a, b) for(int unsafe_cnt=a; unsafe_cnt < b;unsafe_cnt++)
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;
// }}}

// {{{ put
void newline() {cout << endl;}
template <typename T> void display(T input){cout << input;}
template <typename T> void put(T input){display(input); newline();}
// }}}

vector<int> to_top(const vector<int> v
                  ,const int p   // ???????§????
                  ,const int c){
  vector<int> w;
  for(int i=p; i<p+c; i++){
    w.push_back(v[i]);
  }
  for(int i=0; i<v.size(); i++){
    if(!(p<=i && i<p+c)){
      w.push_back(v[i]);
    }
  }
  return w;
}

int main() {
  int n, r;
  while(cin >> n >> r && n){
    vector<int> v;
    for(int i=n; i > 0; i--){v.push_back(i);}
    // for(int i=0;i<v.size();i++){display(v[i]);display(" ");} put("");
    for(int i=0; i < r; i++){
      int p, c;
      cin >> p >> c;
      v = to_top(v, p-1, c);
      // for(int i=0;i<v.size();i++){display(v[i]);display(" ");}put("");
    }
    put(v[0]);
  }
}