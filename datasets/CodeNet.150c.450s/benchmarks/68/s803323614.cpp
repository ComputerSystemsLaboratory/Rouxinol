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
    int num;
    cin >> num;
    if(num==0)return;
    int ar[num];
    for(int i=0;i<num;i++)
      cin >> ar[i];
    int res=10000000;
    for(int i=0;i<num;i++)
      for(int j=i+1;j<num;j++)
        res=min(res,abs(ar[i]-ar[j]));
    cout << res << endl;
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
  return 0;
}

