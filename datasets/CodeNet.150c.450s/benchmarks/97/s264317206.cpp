#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main(){
  int N,d,n;
  while(cin>>N){
    if(!N)break;
    vector<pair<int,int>> mp(N);
    mp[0] = make_pair(0,0);
    int max_x=0,max_y=0,min_x=0,min_y=0;
    for(int i=1;i<N;i++){
      cin >> n >> d;
      mp[i] = make_pair(mp[n].first-dx[d],mp[n].second+dy[d]);
      min_x = min(min_x,mp[i].first);
      min_y = min(min_y,mp[i].second);
      max_x = max(max_x,mp[i].first);
      max_y = max(max_y,mp[i].second);
    }
    cout << max_x - min_x + 1 << " " << max_y - min_y + 1 << endl;
  }

  return 0;
}