#include <iostream>
#include <cctype>
using namespace std;

int mul[] = {1000, 100, 10, 1};
char op[] = {'m', 'c', 'x', 'i'};

string toMCXI(int x){
  string res = "";

  for(int i = 0; i < 4; i++){
    if(x < mul[i]) continue;

    int div = x / mul[i];
    x %= mul[i];

    if(div != 1){
      res += (char)(div + '0');
    }
    res += op[i];
  }
  return res;
}

int toInt(const string &s){
  int n = s.length();
  int res = 0;

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < n; j++){
      if(s[j] != op[i]) continue;

      if(j - 1 < 0 || !isdigit(s[j - 1])){
        res += mul[i];
      } else{
        res += mul[i] * (s[j - 1] - '0');
      }

      break;
    }
  }
  return res;
}

int main(){
  int T;
  cin >> T;

  while(T--){
    string a, b;
    cin >> a >> b;
    cout << toMCXI( toInt(a) + toInt(b) ) << endl;
  }
}