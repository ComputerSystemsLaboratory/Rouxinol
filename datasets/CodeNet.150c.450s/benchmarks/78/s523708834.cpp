#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define INF (2 << 28)
#define fr first
#define sc second
using namespace std;

#define MAX 1000000

typedef pair< int, int > iP;
typedef pair< iP, int > iiP;

int dp1[MAX * 2 + 1], dp2[MAX * 2 + 1];

int main(){
  
  fill_n(dp1, MAX * 2 + 1, INF);
  fill_n(dp2, MAX * 2 + 1, INF);
  vector< int > num;
  for(int i = 1; i <= 185; i++) {
    num.push_back(i * (i + 1) * (i + 2) / 6);
    dp1[num[num.size() - 1]] = 1;
    if((i * (i + 1) * (i + 2) / 6) % 2) 
      dp2[num[num.size() - 1]] = 1;
  }

  for(int i = 1; i <= MAX; i++) {
    for(int j = 0; j < num.size() && i + num[j] <= MAX; j++) {
      dp1[i + num[j]] = min(dp1[i] + 1, dp1[i + num[j]]);
    }
  }
 
  for(int i = 1; i <= MAX; i++) {
    for(int j = 0; j < num.size() && i + num[j] <= MAX; j++) {
      if(num[j] % 2) dp2[i + num[j]] = min(dp2[i] + 1, dp2[i + num[j]]);
    }
  }

  int N;
  while(cin >> N, N) {
    cout << dp1[N] << " " << dp2[N] << endl;
  }
}