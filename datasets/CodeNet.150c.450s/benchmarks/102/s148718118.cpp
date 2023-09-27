#include<iostream>
#include<map>
#include<vector>
#include<list>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<climits>
#include<ctime>
#include<cstring>
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep_split(tok,a_str,re) for(char *tok = strtok((char *)a_str.c_str(),re); tok != NULL; tok = strtok(NULL,re))
#define ALL(c) (c).begin(), (c).end()
#define dump(a) cerr << #a << "=" << (a) << endl

using namespace std;


int W,H;
int _black_cnt;
char sima[21][21];
bool is_visit[21][21];
int dw[4] = {1,0,-1,0};
int dh[4] = {0,1,0,-1};

void saiki(int w, int h) {
	int aw,ah;
	rep(i,4) {
		aw = w+dw[i];
		ah = h+dh[i];
		if ((0 <= aw && aw <= W) || (0 <= ah && ah <= H)) { 
			if (sima[aw][ah] == '.' && !is_visit[aw][ah]) {
				is_visit[aw][ah] = true;
				_black_cnt++;
				saiki(aw,ah);
			}
			else {
				is_visit[aw][ah] = true;
			}
		}
	}

	return;
}

int main() {
	string a_str;
	while(cin >> W >> H) {
		if (W==0 && H==0) { break; }

		_black_cnt=0;
		//初期化
		rep(h,21) {
			rep(w,21) {
				sima[w][h] = 0;
				is_visit[w][h] = 0;
			}
		}
		
		//値挿入
		int fw=0,fh=0;
		rep(h,H) {
			cin >> a_str;
			rep(w,W) {
				if (a_str[w]=='@') { fw=w; fh=h; }
				sima[w][h] = a_str[w];
			}
		}

		is_visit[fw][fh] = true;
		_black_cnt=1;
		saiki(fw,fh);
		cout << _black_cnt << endl;
	}

	return 0;
}