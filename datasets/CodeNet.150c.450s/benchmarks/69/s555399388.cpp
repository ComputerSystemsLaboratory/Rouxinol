#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int a[10];

//B:=B?????????????????° C*=C?????????????????° cnt:=??????????????°??????
bool dfs(int B, int C, int cnt){
	if(cnt == 10){
		return true;
	}
	if(B < a[cnt]){
		return dfs(a[cnt], C, cnt + 1);
	}
	if(C < a[cnt]){
		return dfs(B, a[cnt], cnt + 1);
	}
	if(B > a[cnt] && C > a[cnt]){
		return false;
	}
}
int main(void){
	int n; cin >> n;
	for (int i = 0; i < n; ++i){
		rep(j, 10) cin >> a[j];
		if(dfs(0, 0, 0)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}