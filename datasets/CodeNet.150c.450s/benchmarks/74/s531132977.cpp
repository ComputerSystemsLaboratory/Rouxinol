//コイン問題/動的計画法
#include <iostream>
#include <algorithm>

using namespace std;

static const int NMAX = 50000;
static const int MMAX = 20;
static const int INF = (1 << 29);

int main(){
	int n,m;//支払額,コイン枚数
	cin >> n >> m;

	int c[MMAX+1];//コイン金額リスト
	for (int i = 1; i <= m; ++i){
		cin >> c[i];
	}
	int t[NMAX+1];//
	for (int i = 0; i <= NMAX; ++i){
		t[i] = INF;
	}
	t[0] = 0;
	for (int i = 1; i <= m; ++i){
		for (int j = 0; j + c[i] <= n; ++j){
			t[j + c[i]] = min(t[j + c[i]], t[j] + 1);
		}
	}

	cout << t[n] << endl;
	
	return 0;
}