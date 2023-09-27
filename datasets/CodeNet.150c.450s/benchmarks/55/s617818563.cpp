#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  
  string str;  
  while(cin >> str, str!="0"){
    int sum = 0;
    for(char c: str)
      sum += c - '0';
    cout << sum << endl;
  }
  
  return 0;
}