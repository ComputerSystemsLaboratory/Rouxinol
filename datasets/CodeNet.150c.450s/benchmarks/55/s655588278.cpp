#include <bits/stdc++.h>
using namespace std;

int main(){
  while(true){
    string s; cin >> s;
    if(s == "0") break;
    int sum_digit = 0;
    for(int i = 0; i < (int)s.size(); i++){
      sum_digit += s[i] - '0';
    }
    cout << sum_digit << endl;
  }
}

