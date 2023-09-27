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
  bool people[31]; FOR(i,0,31) people[i] = false;
  FOR(i,0,28) {
    int in; cin >> in;
    people[in] = true;
  }
  FOR(i,1,31) {
    if(!people[i]) cout << i << endl;
  }
  return 0;
}