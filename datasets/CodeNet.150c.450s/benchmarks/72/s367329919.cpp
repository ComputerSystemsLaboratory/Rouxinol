#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   getline(cin, s);
   for(int i = 0; i < (int)s.size(); i++){
     if('a' <= s[i] && s[i] <= 'z') s[i] = 'A' + s[i] - 'a';
     else if('A' <= s[i] && s[i] <= 'Z') s[i] = 'a' + s[i] - 'A';
  }
  cout << s << endl;
}

