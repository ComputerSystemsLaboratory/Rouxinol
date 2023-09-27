#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define X first
#define Y second

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int main(){

	int h, w;
	while( cin >> h >> w, h|w ){
		pii ans={1e3, 1e3};
		rep(i,155) rep(j,155) if(i>0 && j>0) if( i < j ){
			if( h*h + w*w < i*i + j*j || ( h*h + w*w == i*i + j*j && h < i)){
				if( ans.X*ans.X + ans.Y*ans.Y > i*i + j*j ){
					ans = pii(i, j);
				}else if( ans.X*ans.X + ans.Y*ans.Y == i*i + j*j &&
							ans.X > i ){
					ans = pii(i, j);
				}
			}
		}
		cout << ans.X << " " << ans.Y << endl;
	}
	return 0;
}