#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(1){
    cin >> n;
    if(n == 0) break;
    int count = 0;
    string back;
    for(int i=0; i<n; i++){
      string s;
      cin >> s;
      if(s == "lu" && back == "ru") count++;
      if(s == "ru" && back == "lu") count++;
      if(s == "ld" && back == "rd") count++;
      if(s == "rd" && back == "ld") count++;
      back = s;
    }
    cout << count << endl;
  }
  return 0;
}

