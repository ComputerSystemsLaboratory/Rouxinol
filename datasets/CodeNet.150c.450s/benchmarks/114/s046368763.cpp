#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

constexpr int LEN = 105;
int a[LEN][LEN];

int prim(int n){
	bool check[n];
	int p[n], d[n];
	memset(check, 0, n*sizeof(bool));
	memset(p, -1, n*sizeof(int));
	memset(d, 1, n*sizeof(int));
	rep(i, n) p[i] = INT_MAX;
	d[0] = 0;
	p[0] = -1;

	while(true){
		int min_cost = INT_MAX;
		int now_v;
		rep(i, n){
			if(!check[i] && d[i] < min_cost){
				min_cost = d[i];
				now_v = i;
			}
		}
		if(min_cost == INT_MAX) break;

		check[now_v] = true;

		rep(v, n){
			if(!check[v] && (a[now_v][v] > -1) && (a[now_v][v] < d[v])){
				d[v] = a[now_v][v];
				p[v] = now_v;
			}
		}
	}

	int sum = 0;
	rep(i, n) sum += d[i];

	return sum;
}

int main(){
	int n; cin >> n;
	rep(i, n)rep(j, n) {
		int w; cin >> w;
		a[i][j] = w;
		a[j][i] = w;
	}

	cout << prim(n) << endl;

	return 0;
}

