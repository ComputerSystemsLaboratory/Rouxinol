#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int n; cin >> n;
  while(n--) {
    int n1 = 0, n2 = 0;
    string s1, s2; cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++ ) {
      if(s1[i] == 'm') {
        if(i-1 != -1 && '1' <= s1[i-1] && s1[i-1] <= '9') n1 += 1000*(s1[i-1]-'0');
        else n1 += 1000;
      
      } else if(s1[i] == 'c') {
        if(i-1 != -1 && '1' <= s1[i-1] && s1[i-1] <= '9') n1 += 100*(s1[i-1]-'0');
        else n1 += 100;

      } else if(s1[i] == 'x') {
        if(i-1 != -1 && '1' <= s1[i-1] && s1[i-1] <= '9') n1 += 10*(s1[i-1]-'0');
        else n1 += 10;

      } else if(s1[i] == 'i') {
        if(i-1 != -1 && '1' <= s1[i-1] && s1[i-1] <= '9') n1 += s1[i-1]-'0';
        else n1 += 1;
      }
    }
    
    for(int i = 0; i < s2.size(); i++ ) {
      if(s2[i] == 'm') {
        if(i-1 != -1 && '1' <= s2[i-1] && s2[i-1] <= '9') n2 += 1000*(s2[i-1]-'0');
        else n2 += 1000;
      
      } else if(s2[i] == 'c') {
        if(i-1 != -1 && '1' <= s2[i-1] && s2[i-1] <= '9') n2 += 100*(s2[i-1]-'0');
        else n2 += 100;

      } else if(s2[i] == 'x') {
        if(i-1 != -1 && '1' <= s2[i-1] && s2[i-1] <= '9') n2 += 10*(s2[i-1]-'0');
        else n2 += 10;

      } else if(s2[i] == 'i') {
        if(i-1 != -1 && '1' <= s2[i-1] && s2[i-1] <= '9') n2 += s2[i-1]-'0';
        else n2 += 1;
      }
    }

    int sum = n1+n2;
    string ans;
    string c[4] = {"i", "x", "c", "m"}; 
    for(int i = 3; i >= 0; i--) {
      int p = sum / (int)pow(10, i);
      if(p > 0) {
        if(p > 1) ans += p+'0';
        ans += c[i];
      }
      sum %= (int)pow(10, i);
    }

    cout << ans << endl;
  }
}