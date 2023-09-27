// A0J 1160 How Many Islands?

#include <iostream>

# define REP(i,n) for(int i=0; i<n;i++)

using namespace std;

int map[51][51];
int moumita[51][51];
int w,h;

bool check(int j, int k){
	if (j>=0 && j<h && k>=0 && k<w && map[j][k]==1 && !moumita[j][k]) return true;
	else return false;
}

int dfs(int j, int k){
	moumita[j][k] = true;
	
	if (check(j-1,k-1)) dfs(j-1,k-1);
	if (check(j-1,k)) dfs(j-1,k);
	if (check(j-1,k+1)) dfs(j-1,k+1);
	if (check(j,k-1)) dfs(j,k-1);
	if (check(j,k+1)) dfs(j,k+1);
	if (check(j+1,k-1)) dfs(j+1,k-1);
	if (check(j+1,k)) dfs(j+1,k);
	if (check(j+1,k+1)) dfs(j+1,k+1);
	
	return 1;
}

int main(){
	while (true){
		int ans;
		ans = 0;
		cin >> w >> h;
		
		if (w==0 && h==0) break;
		
		REP(j,h){
			REP(k,w){
				cin >> map[j][k];
				moumita[j][k] = false;
			}
		}
		
		REP(j,h){
			REP(k,w){
				if (check(j,k))	ans += dfs(j,k);
			}
		}
		
		cout << ans << endl;
	}
	return 0;
}

