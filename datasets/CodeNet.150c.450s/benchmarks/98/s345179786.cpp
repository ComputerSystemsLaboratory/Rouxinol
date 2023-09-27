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
  while(1) {
    int n, m;
    cin >> n >> m;
    if(n == 0) return 0;
    int tarou[n], hanako[m];
    FOR(i,0,n) cin >> tarou[i];
    FOR(j,0,m) cin >> hanako[j];
    int sum_tarou = 0, sum_hanako = 0;
    FOR(i,0,n) sum_tarou += tarou[i];
    FOR(i,0,m) sum_hanako += hanako[i];
    int ansa = 1e9, ansb = 1e9, sum_ans = 2e9;
    FOR(i,0,n) {
      FOR(j,0,m) {
        if(sum_tarou - tarou[i] + hanako[j] == sum_hanako - hanako[j] + tarou[i]) {
          if(sum_ans > tarou[i] + hanako[j]) {
            ansa = tarou[i];
            ansb = hanako[j];
            sum_ans = ansa + ansb;
          }
        }
      }
    }
    if(sum_ans == 2e9) {
      cout << -1 << endl;
    } else {
      cout << ansa << " " << ansb << endl;
    }
  }
  return 0;
}