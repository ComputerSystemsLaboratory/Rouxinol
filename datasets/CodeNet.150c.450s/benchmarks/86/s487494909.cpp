//#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <cstdio>
#include <vector>
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
  while(true){
    int num,m,p;
    cin >> num >> m >> p;
    if(!(num|m|p))return;
    int sum=0,mm;
    for(int i=0;i<num;i++){
      int x;
      cin >> x;
      sum+=x;
      if(m-1==i)mm=x;
    }
    if(mm==0)
    {cout << 0 << endl;continue;}
    sum*=100;
    double re=sum*(double)(100-p)/100;
    cout << (int)(re/mm) << endl;
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
  return 0;
}

