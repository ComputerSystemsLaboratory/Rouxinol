#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<map>
#include<unordered_map>
#include<set>
#include<stack>
#include<queue>
#include<sstream>
#include<iomanip>

#define reps(i,j,k) for(int i=(j);i<(k);i++)
#define rep(i,j) reps(i,0,j)
#define fs first
#define sc second
#define pb push_back
#define mk make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

template<class S,class T>
ostream &operator<<(ostream &out, const pair<S,T> p){
	return out << "(" << p.fs << ", " << p.sc << ")";
}

template<class T>
ostream &operator<<(ostream &out, const vector<T> &v){
	out << "{";
	rep(i,v.size()) out << v[i] << ", ";
	return out << "}" << endl;
}
int c[50][50];
int main(){
	int w,h;
	int dx[] = {-1,  0,  1, -1, 1, -1, 0, 1};
	int dy[] = {-1, -1, -1,  0, 0,  1, 1, 1};
	while(cin >> w >> h, w){
		rep(i,h) rep(j,w) {
			cin >> c[i][j];
		}
		int cnt = 2;
		rep(i,h) rep(j,w){
			if(c[i][j] != 1) continue;
			c[i][j] = cnt;
			queue<pii> q;
			q.push(pii(i, j));
			while(!q.empty()){
				int x = q.front().sc, y = q.front().fs;
				q.pop();
				rep(k,8){
					int cx = x + dx[k], cy = y+dy[k];
					if(cx >= 0 && cy >= 0 && cy < h && cx < w && c[cy][cx] == 1){
						q.push(pii(cy, cx));
						c[cy][cx] = cnt;
					}
				}
			}
			cnt ++;
		}
		cout << cnt - 2 << endl;
	}
	return 0;
}