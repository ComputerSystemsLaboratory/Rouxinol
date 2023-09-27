#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string f[100];

  map< string , string > str;
  str["lu"] = "ru";
  str["ru"] = "lu";
  str["ld"] = "rd";
  str["rd"] = "ld";


  while(cin >> n, n){
    for(int i = 0; i < n; i++){
      cin >> f[i];
    }
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
      cnt += (str[f[i]] == f[i + 1]);
    }

    cout << cnt << endl;
  }
  return 0;
}