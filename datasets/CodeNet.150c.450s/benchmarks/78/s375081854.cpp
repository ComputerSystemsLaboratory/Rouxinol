#include <iostream>
#include <algorithm>
#include <queue>

#define rep(i,n) for(int i=0; i<(n); i++)

using namespace std;

typedef pair<int,int> P;
typedef long long int ll;

const int INF = 0x3fffffff;

int vx[] = {1,0,-1,0}, vy[] = {0,1,0,-1};

int main(){
	int N;
	int sq[300];
	rep(i, 300){
		sq[i] = (ll)i*(i+1)*(i+2)/6;
	}
	sq[0] = INF;
	int memo[1000006]={};
	int modd[1000006]={};
	memo[1] = 1;
	modd[1] = 1;
	for(int n=1; n<1000002; n++){
		int mn = INF, mn_o = INF;
		rep(i,300){
			if( sq[i] > n ) continue;
			mn = min(mn, memo[ n-sq[i] ] + 1);
			if( sq[i]%2 == 1 ){
				mn_o = min(mn_o, modd[ n-sq[i] ] + 1);
			}
		}
		memo[n] = mn;
		modd[n] = mn_o;
	}
	//rep(i,20) cout << modd[i] << endl;
	while(cin >> N, N){
		cout << memo[N] << " " << modd[N] << endl;
	}
	return 0;
}