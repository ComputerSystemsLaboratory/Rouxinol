#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <deque>
#include <ctime>

using namespace std;

#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define pb push_back
#define mp make_pair
#define all(r) (r).begin(),(r).end()
#define rall(r) (r).rbegin(),(r).rend()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
double EPS = 1e-8;
const double PI = acos(-1);

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int w,h;
int sx,sy;
int a[30][30];
string str[30];
queue<int> q;

int main(){
	while(cin >> w >> h){
		if(w == 0 && h == 0){
			break;
		}

		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				a[i][j] = 0;
			}
		}

		for(int i=0; i<h; i++){
			cin >> str[i];
		}

		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(str[i][j] == '@'){
					sx = j;
					sy = i;
				}
			}
		}
		q.push(sy*30+sx);
		a[sy][sx] = 1;

		while(!q.empty()){
			int tmp = q.front();
			q.pop();

			for(int i=0; i<4; i++){
				int nx = tmp%30 + dx[i];
				int ny = tmp/30 + dy[i];

				if(ny <0 || nx <0 || ny >= h || nx >= w || str[ny][nx] == '#' || a[ny][nx] == 1){
					continue;
				}

				q.push(ny*30+nx);

				a[ny][nx] = 1;
			}
		}

		int count=0;

		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(a[i][j] == 1){
					count++;
				}
			}
		}

		cout << count << endl;
	}


}