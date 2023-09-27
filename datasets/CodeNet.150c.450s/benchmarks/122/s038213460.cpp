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
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  priority_queue<int> que;
  while(cin>>s&&s!="end"){
    if(s=="insert") {
      int x;
      cin >> x;
      que.push(x);
    } else {
      cout << que.top() << endl;
      que.pop();
    }
  }
}
