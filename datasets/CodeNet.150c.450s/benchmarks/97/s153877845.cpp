#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<climits>
#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<string>
#include<queue>
#include<map>
#include<set>
#include<utility>
#include<queue>

using namespace std;

int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

int main(){
  ios::sync_with_stdio(false);
  int n;
  while(cin >> n && n != 0){
    vector<pair<int,int> > v;
    v.push_back(make_pair(0,0));
    for(int i = 0;i < n-1;i++){
      int n,d;
      cin >> n >> d;
      v.push_back(make_pair(v[n].first + dx[d], v[n].second + dy[d]));
    }
    int wmin = 0,wmax = 0;
    int hmin = 0,hmax = 0;
    for(int i = 0;i < n;i++){
      wmin = min(v[i].first,wmin);
      wmax = max(v[i].first,wmax);
      hmin = min(v[i].second,hmin);
      hmax = max(v[i].second,hmax);
    }
    cout << wmax - wmin + 1 << ' ' << hmax - hmin + 1 << endl;
  }
  return 0;
}