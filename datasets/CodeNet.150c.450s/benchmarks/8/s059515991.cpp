#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  string str_t, str_h;
  int T = 0, H = 0;
  for(int i=0; i< n; i++){
    cin >> str_t >> str_h;
    if(str_t > str_h) T += 3;
    else if (str_t < str_h) H += 3;
    else {T++; H++;}
  }
  cout << T << ' ' << H << endl;
}

