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
  int n,m,p;
  while(cin>>n>>m>>p) {
    if(n == 0) return 0;
    int x[n];
    double sum = 0;
    FOR(i,0,n) {
      cin >> x[i];
      sum += x[i];
    }
    sum *= 100;
    sum = sum * (100 - p) / 100;
    if(x[m-1] == 0) sum = 0; 
    else sum /= x[m-1];
    cout << int(sum) << endl;
  }
  return 0;
}