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
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

int main()
{
  int a[4], b[4];
  while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]) {
    int num[10]; CLR(num);
    int hit = 0, blow = 0;
    FOR(i,0,4) {
      if(a[i] == b[i]) hit++;
      num[a[i]]++;
      num[b[i]]++;
    }
    FOR(i,0,10) if(num[i] > 1) blow++;
    cout << hit << " " << blow - hit << endl;
  }
  return 0;
}