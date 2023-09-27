#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;

const int INF = 1e9;
typedef long long ll;

int p[31];

int main(void){
  int n;
  for(int i = 0; i < 28; i++) {cin >> n; p[n]++;}
  for(int i = 1; i <= 30; i++){
    if(p[i] == 0) cout << i << endl;
  }
  return 0;
}