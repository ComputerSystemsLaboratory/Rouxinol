#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)


#define all all(v) v.begin(),v.end()
#define INF i<<30
#define mp make_pair
#define pb push_back

#define fi first
#define se second

#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pair<int, int> > vp;

typedef long long ll;
int s[30][10];
int H,W;
int ans = 0;
void drop(int iy,int x){
	for (int y = iy; y > 0; --y)
	{
		s[y][x] = s[y-1][x];
	}
}
void kesu(int y){
	int c = 1;
	int tmp = 0;
	for(int x = 0;x<7;x++){
		if(s[y][x]==tmp) c++;
		else{
			if(c>=3){
				if(tmp==0) continue;
				ans += tmp*c;
				for (int tx = x-1; tx > x-1-c ; --tx)
				{
					s[y][tx]=0;
				}
			}
			c = 1;
			tmp = s[y][x];
		}
	}
	// cout << "kesu:"<<ans<< endl;
}
int main(){
	while(1){
		cin >> H;
		if(H==0) break;
		ans = 0;
		rep(i,H+1){
			if(i==0){
				rep(j,7){
					s[i][j] = 0;
				}
			}else{
				rep(j,7){
					if(j==0) s[i][j]=0;
					else if(j==6) s[i][j]=0;
					else{
						cin >> s[i][j];
					} 
				}
			}
			
		}
		// rep(i,H+1){
		// 	rep(j,7){
		// 		cout<< s[i][j];
		// 	}
		// 	cout << endl;
		// }
		while(1){
			int tmpans = ans;
			rep(y,H+1){
				kesu(y);
			
			}
			// cout << tmpans << " " << ans << endl;
			if(tmpans==ans) break;
			for (int y = 1; y < H+1; ++y)
			{
				for(int x=1;x<6;++x){
					if(s[y][x]==0){
						drop(y,x);
					}
				}
			}
		}

		// rep(i,H+1){
		// 	rep(j,7){
		// 		cout<< s[i][j];
		// 	}
		// 	cout << endl;
		// }
		cout << ans << endl;
	}
	return 0;
}