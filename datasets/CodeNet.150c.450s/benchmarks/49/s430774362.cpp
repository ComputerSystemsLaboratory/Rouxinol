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

int main(){
  int n;
  while(cin>>n)
  {
    if(n==0) return 0;
    int sum = 0;
    int mx = 0, mn = 9999;
    FOR(i,0,n)
    {
      int in;
      cin>>in;
      sum += in;
      mx = max(mx,in);
      mn = min(mn,in);
    }
    sum -= mx;
    sum -= mn;
    cout << sum/(n-2) << endl;
  }
  return 0;
}