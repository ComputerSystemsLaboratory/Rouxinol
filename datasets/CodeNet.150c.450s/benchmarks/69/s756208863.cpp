#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

int a[10];
bool flag = false;

void dfs(int B, int C, int cnt){
	if(cnt == 9){
		if(B < a[cnt]) flag = true;
		if(C < a[cnt]) flag = true;
		return;
	}
	if(B < a[cnt]){
		dfs(a[cnt], C, cnt + 1);
	}
	if(C < a[cnt]){
		dfs(B, a[cnt], cnt + 1);
	}
	if(B > a[cnt] && C > a[cnt]){
		return;
	}
}
int main(void){
	int n; cin >> n;
	for (int i = 0; i < n; ++i){
		rep(j, 10) cin >> a[j];
		flag = false;
		dfs(0, 0, 0);
		if(flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}