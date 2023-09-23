// {{{ include and macros
#define debug(x) cout<<#x<<": "<<x<<endl
#define rep(a, b) for(int unsafe_cnt=a; unsafe_cnt < b;unsafe_cnt++)
#include <iostream>
// #include <stdio.h>
// #include <vector>
// #include <math.h>
// #include <algorithm>
// #include <string>
// #include <map>
// #include <set>
using namespace std;
// }}}

// {{{ put
void newline() {cout << endl;}
template <typename T> void display(T input){cout << input;}
template <typename T> void put(T input){display(input); newline();}
// }}}

int get_num(const int start, const int ans){
  int sum = 0;
  for(int i=start; i!=ans&&sum<ans; i++){
    sum+=i;
  }
  return (sum == ans) ? 1 : 0;
}

int main() {
  int n;
  while(cin >> n && n){
    int sum = 0;
    for(int i=1; i<n; i++){
      sum += get_num(i, n);
    }
    put(sum);
  }
}