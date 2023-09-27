//#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
#include <climits>

using namespace std;
using ll=long long;

void solve(){
  while(1){
    int m,mi,ma;
    cin >> m >> mi >> ma;
    if(!(m|mi|ma))return;
    int ar[m];
    for(int i=0;i<m;i++)
      cin >> ar[i];
    int res=0,j=-1;
    for(int i=mi;i<=ma;i++)
      if(res<=ar[i-1]-ar[i])
      {res=ar[i-1]-ar[i];j=i;}
    cout << j << endl;
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
  return 0;
}

