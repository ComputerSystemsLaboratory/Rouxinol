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
int sima_cnt;
int sima_size;
int sima[51][51];
bool is_visit[51][51];

int dw[8] = {1,1,0,-1,-1,-1,0,1};
int dh[8] = {0,1,1,1,0,-1,-1,-1};

void saiki(int w, int h) {
	int aw=0,ah=0;
	rep(i,8) {
		aw = w + dw[i];
		ah = h + dh[i];
		if ((0<=aw && aw<W) && (0<=ah && ah<H)) {
			//次の島を訊ねる条件
			if (sima[aw][ah] && !is_visit[aw][ah]) { 
				is_visit[aw][ah] = true;
				sima_size++;
				saiki(aw,ah);
			}
			else { 
				is_visit[aw][ah] = true;
			}
		}
	}
}

int main() {
	while(cin >> W >> H) {
		if (W==0 && H==0) { break; }
		sima_cnt = 0;
		sima_size = 0;
		rep(h,51) {
			rep(w,51) {
				sima[w][h]=0;
				is_visit[w][h]=0;
			}
		}

		rep(h,H) {
			rep(w,W) {
				cin >> sima[w][h];
			}
		}

		rep(h,H) {
			rep(w,W) {
				sima_size = 0;
				if (sima[w][h] && !is_visit[w][h]) { sima_size++; }
				saiki(w,h);
				if (sima_size>0) {
					sima_cnt++;
				}
			}
		}
		cout << sima_cnt << endl;
	}

	return 0;
}