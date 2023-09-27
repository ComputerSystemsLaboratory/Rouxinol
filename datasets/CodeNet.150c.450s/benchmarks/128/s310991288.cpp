#include <iostream>
#include <string>
using namespace std;

string reverse(string s){
  int n = s.size();
  string r;

  for(int i = n - 1; i >= 0; i--)r += s[i];
  
  return r;
}

int main(){
  string s;
  cin >> s;

  cout << reverse(s) << endl;

  return 0;
}