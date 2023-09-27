#include <bits/stdc++.h>
using namespace std;
#define Rep(i,N) for(int i = 0; i < N;i++)
typedef pair<int,int> Pi;
#define F first
#define S second
#define INF 1 << 28

inline void chmax(int &a,int b) {
  a = max(a,b);
}

inline void chmin(int &a,int b) {
  a = min(a,b);
}

int mx[] = {1,0};
int my[] = {0,1};

int main()
{
  int W, H, N;
  int A, B;
  while(cin >> W >> H,W || H) {
    int dp[20][20] = {0};
    dp[0][0] = 1;
    cin >> N;
    while(N--) {
      cin >> A >> B;--A,--B;
      dp[B][A] = -1;
    }
    Rep(i,H) {
      Rep(j,W) {
	if(!(~dp[i][j]))continue;
	Rep(k,2) {
	  int ny = i + my[k];
	  int nx = j + mx[k];
	  if(!~(dp[ny][nx]))continue;
	  if(ny > H || nx > W)continue;
	  dp[ny][nx] += dp[i][j];
	}
      }
    }
    cout << dp[H - 1][W - 1] << endl;
  }
  return 0;
}