#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>
#include <cmath>

#define MAX_N 100

using namespace std;

int inf = 1000000000;
int N, M;
int a[MAX_N], b[MAX_N];
int suma, sumb;

void solve() {
	int min = inf;
	int ansa, ansb;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if(suma-a[i]+b[j] == sumb+a[i]-b[j]){
				if(min > a[i] + b[j]){
					min = a[i]+b[j];
					ansa = i;
					ansb = j;
				}
			}
		}
	}
	if(min == inf) cout << -1 << endl;
	else cout << a[ansa] << " " << b[ansb] << endl;
}

int main(){
	while(1){
		cin >> N >> M;
		if(N == 0 && M == 0) break;
		suma = 0;
		for(int i = 0; i < N; i++){
			cin >> a[i];
			suma += a[i];
		}
		sumb = 0;
		for (int i = 0; i < M; i++)
		{
			cin >> b[i];
			sumb += b[i];
		}
		solve();
	}
	return 0;
}