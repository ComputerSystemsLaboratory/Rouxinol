#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int qx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int qy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main(void) {
	while(true) {
		int N;
		cin>>N;
		if(N==0) break;
		vector<vector<bool> > map(21, vector<bool>(21, false));
		int set = 0;
		REP(i, N) {
			int x, y;
			cin>>x>>y;
			map[x][y] = true;
		}
		int nx = 10, ny = 10;
		int ans = 0;
		if(map[nx][ny]) {
			++ans;
			map[nx][ny] = false;
		}
		int M;
		cin>>M;
		REP(i, M) {
			char dir;
			int l;
			cin>>dir>>l;
			if(dir == 'E') {
				REP(j, l) {
					nx = nx + dx[0];
					ny = ny + dy[0];
					if(map[nx][ny]) {
						++ans;
						map[nx][ny] = false;
					}
				}
			}
			if(dir == 'N') {
				REP(j, l) {
					nx = nx + dx[1];
					ny = ny + dy[1];
					if(map[nx][ny]) {
						++ans;
						map[nx][ny] = false;
					}
				}
			}
			if(dir == 'W') {
				REP(j, l) {
					nx = nx + dx[2];
					ny = ny + dy[2];
					if(map[nx][ny]) {
						++ans;
						map[nx][ny] = false;
					}
				}
			}
			if(dir == 'S') {
				REP(j, l) {
					nx = nx + dx[3];
					ny = ny + dy[3];
					if(map[nx][ny]) {
						++ans;
						map[nx][ny] = false;
					}
				}
			}
		}
		if(ans == N) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}