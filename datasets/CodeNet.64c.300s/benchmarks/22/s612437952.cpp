#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)

int main(){
	int n;
	cin >> n;
	int tri[1000][3];
	REP(i,n){
		REP(j,3){
			cin >> tri[i][j];
		}
		sort(tri[i],tri[i]+3);
	}
	REP(i,n){
		if(tri[i][2]*tri[i][2] == tri[i][1]*tri[i][1] + tri[i][0]*tri[i][0]){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}