#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define MP make_pair
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP1(i,n) for(int i=1;i<(n);i++)
#define REP2(i,d,n) for(int i=(d);i<(n);i++)
#define RREP(i,n) for(int i=(n);i>=0;i--)
#define CLR(a)      memset((a),0,sizeof(a))
#define MCLR(a)     memset((a),-1,sizeof(a))
#define RANGE(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<VI > VVI;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef pair<int,int> PII;

const int INF = 0x3f3f3f3f;
const LL INFL = 0x3f3f3f3f3f3f3f3fLL;
const double EPS = 1e-9;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

int main(){
	int h,w;
	int cnt=0;

	int box[10][5];

	while(1){
		int pt=0;
		cin >> h;
		if(h == 0)break;

		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				cin >> box[i][j];
			}
		}

		for(int g=0;g<h;g++){
			
			for(int i=0;i<h;i++){
				for(int j=0;j<3;j++){
					cnt=0;
					for(int k=j+1;k<5;k++){
						if(box[i][j]!=box[i][k]){
							break;
						}
						cnt++;
					}
					if(cnt>=2){
						for(int k=j;k<=j+cnt;k++){
							pt+=box[i][k];
							box[i][k]=0;
						}
						break;
					}
				}
			}

			for(int i=0;i<5;i++){
				int cnt=0;
				VI v;
				for(int j=h-1;j>=0;j--){
					if(box[j][i]!=0){
						v.PB(box[j][i]);
						box[j][i]=0;
						cnt++;
					}
				}
				for(int j=1;j<=cnt;j++){
					box[h-j][i]=v[j-1];
				}
				v.clear();
			}
		}
/*
		for(int i=0;i<h;i++){
			for(int j=0;j<5;j++){
				cout << box[i][j];
			}
			cout << endl;
		}
*/
		cout << pt << endl;					
	}
	return 0;
}