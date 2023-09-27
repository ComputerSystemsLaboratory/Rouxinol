#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 28)

template<typename T>
void remove(vector<T>& vector, unsigned int index){
vector.erase(vector.begin() + index);
}

typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int w, h;
int state[21][21];
bool memo[21][21] = {0};
int ans;
void dfs(int x, int y){
	if(!memo[x][y]){
		memo[x][y] = true;
		ans++;
	}else return;
	int res = 0;
	rep(k,4){
		int nx = x + dx[k];
		int ny = y + dy[k];
		if(nx < 0 || ny < 0 || nx >= w || ny >= h)continue;
		if(state[nx][ny])continue;
		dfs(nx, ny);
	}
}
int main(void){
	while(cin >> w >> h, w|h){
		ans = 0;
		fill_n(*memo, 21*21, false);
		int sx, sy;
		rep(i,h){
			rep(j,w){
				char c;
				cin >> c;
				if(c == '@'){
					sx = j;
					sy = i;
					state[j][i] = 2;
				}else if(c == '.'){
					state[j][i] = 0;
				}else{
					state[j][i] = 1;
				}
			}
		}
		dfs(sx, sy);
		cout << ans << endl;
	}
	return 0;
}



int StrToInt(string s){
	stringstream ss;
	ss << s;
	int val;
	ss >> val;
	return val;
}
string IntToStr(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}