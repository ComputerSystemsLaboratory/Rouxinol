#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <stack>
typedef long long int lli;
using namespace std;

int osenbei[10][10000];
int flag[10];
int C,R,ans;

int count(){
	int cnt=0;
	for(int i=0; i<C; ++i){
		int b=0;
		for(int j=0; j<R; ++j){
			if(flag[j]==1&&osenbei[j][i]==0) ++b;
			else if(flag[j]==0&&osenbei[j][i]==1) ++b;
		}
		if(b>R-b) cnt+=b;
		else cnt+=(R-b);
	}
	return cnt;
}

void solve(int k){
	if(k==R){
		ans=max(ans,count());
		return;
	}
	flag[k]=0;
	solve(k+1);
	flag[k]=1;
	solve(k+1);
	return;
}

int main(){
	//cin.tie(false);
    //ios::sync_with_stdio(false);
	while(cin >> R >> C&&C!=0&&R!=0){
		ans=0;
		for(int i=0; i<R; ++i){
			flag[i]=0;
			for(int j=0; j<C; ++j){
				cin >> osenbei[i][j];
			}
		}
		solve(0);
		cout << ans << "\n";
	}
	return 0;
}