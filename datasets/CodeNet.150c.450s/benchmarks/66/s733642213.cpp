#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
typedef long long ll;

int main()
{
  set<string> SET;
  int N;cin>>N;
  FOR(i,0,N) {
    string s;
    cin >> s;
    SET.insert(s);
  }
  int M;cin>>M;
  bool open = false;
  FOR(i,0,M) {
    string s;
    cin >> s;
    if(SET.count(s)) {
      if(!open) {
        cout << "Opened by " << s << endl;
        open = true;
      } else {
        cout << "Closed by " << s << endl;
        open = false;
      }
    } else {
      cout << "Unknown " << s << endl;
    }
  }
  return 0;
}