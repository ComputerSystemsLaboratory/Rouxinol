#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i,a) for(int i = 0; i < a; i++)
#define repi(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define mp make_pair
#define INF 1e9

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int N;
  while(cin>>N,N){
    vector<pii> field;
    field.pb(mp(0,0));
    int mx = 0, my = 0;
    int Mx = 0, My = 0;
    rep(i,N-1){
      int n, d;
      cin >> n >> d;
      int x = field[n].first+dx[d];
      int y = field[n].second+dy[d];
      mx = min(mx, x);
      my = min(my, y);
      Mx = max(Mx, x);
      My = max(My, y);
      field.pb(mp(x,y));
    }
    cout << Mx-mx+1 << ' ' << My-my+1 << endl;
  }
}