#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

int W,H;

bool sima[52][52];
bool checkmap[52][52];

int dx[9]={-1,0,1,-1,0,1,-1,0,1};
int dy[9]={-1,-1,-1,0,0,0,1,1,1};


int saiki(int x, int y) 
{
	if(sima[x][y]==1){sima[x][y]=0;}
	else if(sima[x][y]==0){return 0;}

	rep(i,9){
		saiki(x+dx[i], y+dy[i]);
	}

	return 1;
}

int main() {

	while(cin >> W >> H) {
		int count=0;
		if (W == 0 && H == 0) { break; }

		rep(h,H) {
			rep(w,W) {
				sima[w][h] = 0;
				checkmap[w][h] = 0;
			}
		}

		rep(h,H) {
			rep(w,W) {
				cin >> sima[w+1][h+1];
			}
		}

		REP(h,1,H+1){
			REP(w,1,W+1){
				if(sima[w][h]==1){
					saiki(w,h);
					//cout << w << ":" << h << endl; 
					count++;	
				}
			}
		}
/*
	cout << "map" << endl; 

		rep(h,51){
			rep(w,51){
				cout << sima[w][h] << " ";
			}
			cout << endl;
		}


	
	cout << "checkmap" << endl; 

		rep(h,51){
			rep(w,51){
				cout << checkmap[w][h] << " ";
			}
			cout << endl;
		}
*/

		cout << count << endl;
	}

	return 0;
}