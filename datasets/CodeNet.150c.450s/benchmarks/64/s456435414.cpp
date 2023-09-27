#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <numeric>
#include <functional>
#include <climits>



using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int n;
vector<int> a;
vector<vector<bool> > dp;

void debug(){
  for (size_t i = 0; i < dp.size(); i++) {
    for (size_t j = 0; j < dp[i].size(); j++) {
      cerr << dp[i][j] << " ";
    }
    cerr << endl;
  }
}

bool doit(int  m){
  //cerr << "m=" << m << endl;
  dp.clear();
  dp.resize(m+1, vector<bool>(n, false));
  for (int i = 0; i <= m; i++) {
    dp[i][0] = (a[0] == i);
  }
  for (int i = 0; i < n; i++) {
    dp[0][i] = true;
  }
  for (int j = 1; j < n; j++) {
    //cerr << "j=" << j << endl;    
    for (int i = 1; i <= m; i++) {
      bool b1 = dp[i][j-1];
      //cerr << "i=" << i << endl;
      bool b2 = (i - a[j] >= 0) ? dp[i-a[j]][j-1] : false;
      dp[i][j] = b1 || b2;
    }
    //debug();
  }
  return dp[m][n-1];
}


int main(){
  cin >> n;
  a.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  size_t q;
  cin >> q;
  for (size_t i = 0; i < q; i++) {
    int m;
    cin >> m;
    cout << (doit(m) ? "yes" : "no") << endl;
  }
  return 0;
}