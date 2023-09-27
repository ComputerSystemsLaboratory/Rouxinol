#include<cstdio>
#include<string>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;

string d;

int main() {
  int m;
  scanf("%d", &m);
  for (int i = 0; i < m; i++) {
    cin >> d;
    int size = d.size();
    map<string, int> n;
    n[d] = 1;
    string temp = d;
    reverse(temp.begin(), temp.end());
    n[temp] = 1;
    for (int i = 1; i < size; i++) {
      string s1 = d.substr(0, i), s2 = d.substr(i, size - i);
      string r1 = s1, r2 = s2;
      reverse(r1.begin(), r1.end());
      reverse(r2.begin(), r2.end());
      n[s1 + r2] = 1;
      n[r1 + s2] = 1;
      n[r1 + r2] = 1;
      n[s2 + s1] = 1;
      n[s2 + r1] = 1;
      n[r2 + s1] = 1;
    }
    printf("%d\n", (int)n.size());
  }
}

