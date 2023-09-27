#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define EPS 1e-14

#define all(v) v.begin(),v.end()
#define INF
#define mp
#define pb

#define fi
#define se

#define each

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

typedef long long ll;

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
int main(){
	while(1){
		int N;
		int xy[440][440];
		rep(y,440){
			rep(x,440){
				xy[y][x]=-1;
			}
		}
		cin >> N;
		if(N==0) break;
		xy[200][200]=0;
		rep(i,N-1){
			int t,d;
			cin >> t >> d;
			rep(x,440){
				rep(y,440){
					if(xy[y][x] == t){
						xy[dy[d]+y][dx[d]+x] = i+1;
					}
				}
			}
		}
		// for (int y = 190; y < 210; ++y)
		// {
		// 	for (int x = 10; x < 210; ++x)
		// 	{
		// 		printf("%2d ",xy[y][x]);
		// 	}
		// 	cout <<endl;
		// }
		// cout << endl;

		int r=0,l=440,u=440,b=0;
		rep(y,440){
			rep(x,440){
				if(xy[y][x]!=-1){
					r = max(r,x);
				}
			}
		}
		rep(y,440){
			rep(x,440){
				if(xy[y][x]!=-1)
				{
					l = min(l,x);
				}
			}
		}
		rep(y,440){
			rep(x,440){
				if(xy[y][x]!=-1){
					b = max(b,y);
				}
				
			}
		}
		rep(y,440){
			rep(x,440){
				if(xy[y][x]!=-1){
					u = min(u,y);
				}		
			}
		}
		// cout << r<<" " << l << " " << u << " " << b<<endl;
		cout << r-l+1 << " " << b-u+1 <<endl;
	}
	return 0;
}