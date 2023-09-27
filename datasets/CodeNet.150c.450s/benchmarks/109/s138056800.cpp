#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int Time(string t, string h, string m, string s){
  h = t.substr(0, 2);
  m = t.substr(3, 2);
  s = t.substr(6, 2);
  return atoi(h.c_str())*3600 + atoi(m.c_str())*60 + atoi(s.c_str());
}

int main(int argc, char *argv[]){
  int n;
  while(cin >> n, n){
    int table[24*3600] = {0};
    string t;
    for (int i = 0; i < n; i++) {
      cin >> t;
      string h, m, s;
      int st = Time(t, h, m, s);
      cin >> t;
      int e  = Time(t, h, m, s);
      table[st]++;
      table[e]--;
    }
    int a = 0;
    int Max = 0;
    for (int i = 0; i < 24*3600; i++) {
      a += table[i];
      Max = max(Max, a);
    }
    std::cout << Max << std::endl;
  }
  return 0;
}