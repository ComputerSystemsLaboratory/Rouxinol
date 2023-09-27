#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
#include <queue>
#include <list>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<vector<int> > v(n, vector<int>(n));

  for(int i=0;i<n;i++){
    int t, a;  cin >> a >> t;
    for(int j=0;j<t;j++){
      int val;cin >> val;
      v[a-1][val-1]++;
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout << v[i][j];
      if(j != n-1)  cout << " ";
    }
    cout << endl;
  }
  return 0;
}