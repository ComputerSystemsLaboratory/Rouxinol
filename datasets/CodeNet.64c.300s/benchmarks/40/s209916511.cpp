#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  
  string str;  
  getline(cin, str);
  for(char c: str){
    cout <<  (isupper(c)? (char)tolower(c): (char)toupper(c));
  }
  cout << endl;
  return 0;
}