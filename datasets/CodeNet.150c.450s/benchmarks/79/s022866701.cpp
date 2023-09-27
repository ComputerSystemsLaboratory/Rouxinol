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
  int n, r;
  while(1) {
    cin >> n >> r;
    if(n==0 && r==0) break;
    int num[n+1];
    FOR(i,0,n+1) num[i] = i;
    while(r--) {
      int p, c;
      scanf("%d %d\n", &p, &c);
      int tmp[c+p-1];
      FOR(i,0,c) {
        tmp[i] = num[n-(p-1)-i];
      }
      FOR(i,c,c+p-1) {
        tmp[i] = num[n-(i-c)];
      }
      FOR(i,0,c+p-1) num[n-i] = tmp[i];
    }
    printf("%d\n", num[n]);
  }
  return 0;
}