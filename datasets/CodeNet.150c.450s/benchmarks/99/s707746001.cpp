#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < (int) (n); i++)
#define ALL(v) (v).begin(), (v).end()

using namespace std;

int main(){
  int n;
  cin >> n;
  REP(i, n){
    string var1, var2;
    cin >> var1 >> var2;
    int v1 = 0;
    int v2 = 0;
    int tmp = 1;
    REP(j, var1.size()){
      if(var1[j] == 'm') { v1 += tmp * 1000; tmp = 1; }
      else if(var1[j] == 'c') { v1 += tmp * 100; tmp = 1; }
      else if(var1[j] == 'x') { v1 += tmp * 10; tmp = 1; }
      else if(var1[j] == 'i') { v1 += tmp; tmp = 1; }
      else tmp = var1[j] - '0';
    }
    REP(j, var2.size()){
      if(var2[j] == 'm') { v2 += tmp * 1000; tmp = 1; }
      else if(var2[j] == 'c') { v2 += tmp * 100; tmp = 1; }
      else if(var2[j] == 'x') { v2 += tmp * 10; tmp = 1; }
      else if(var2[j] == 'i') { v2 += tmp; tmp = 1; }
      else tmp = var2[j] - '0';
    }
    int sum = v1 + v2;
    string res = "0m0c0x0i";
    res[0] = sum / 1000 + '0'; sum %= 1000;
    res[2] = sum / 100 + '0'; sum %= 100;
    res[4] = sum / 10 + '0'; sum %= 10;
    res[6] = sum + '0';
    REP(i, 8){
      if(res[i] == '0') { i++; continue; }
      if(res[i] == '1') { continue; }
      cout << res[i];
    }
    cout << endl;
  }
  return 0;
}