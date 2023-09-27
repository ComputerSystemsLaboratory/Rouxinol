#include <cstdio>
#include <vector>
#include <map>
#define pb push_back
#define fi first
#define sec second
using namespace std;
typedef pair<int,int> P;

int main(){
	int n;
	while(scanf("%d", &n),n){
		bool f[401][401];
		vector<P> v;
		for(int i = 0; i < 401; i++){
			for(int j = 0; j < 401; j++) f[i][j] = false;
		}
		v.pb(P(200,200));
		f[200][200] = true;
		for(int i = 0; i < n-1; i++){
			int a, b;
			scanf("%d%d", &a, &b);
			int fa = v[a].fi,fs = v[a].sec;
			if(b == 0){
				f[fa-1][fs] = true;
				v.pb(P(fa-1,fs));
			} else if(b == 1){
				f[fa][fs-1] = true;
				v.pb(P(fa,fs-1));
			} else if(b == 2){
				f[fa+1][fs] = true;
				v.pb(P(fa+1,fs));
			} else{
				f[fa][fs+1] = true;
				v.pb(P(fa,fs+1));
			}
		}
		int X = -1,x = 500,Y = -1,y = 500;
		for(int i = 0; i < 401; i++){
			for(int j = 0; j < 401; j++){
				if(f[i][j] == true){
					X = max(X,i);
					x = min(x,i);
					Y = max(Y,j);
					y = min(y,j);
				}
			}
		}
		printf("%d %d\n", (X-x+1), (Y-y+1));
	}
}