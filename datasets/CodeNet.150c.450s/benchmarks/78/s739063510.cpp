#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;
typedef pair<int, int> P;

int d[1000001], d2[1000001];

int main()
{
	int tet[1001];
	for (int i = 1; i <= 1000; i++){
		tet[i] = i * (i + 1) * (i + 2) / 6;
	}
	
	fill(d, d + 1000001, INF);
	d[0] = 0;
	for (int i = 1; tet[i] <= 1000000; i++){
		for (int j = 0; j + tet[i] <= 1000000; j++){
			d[j + tet[i]] = min(d[j + tet[i]], d[j] + 1);
		}
	}
	
	fill(d2, d2 + 1000001, INF);
	d2[0] = 0;
	for (int i = 1; tet[i] <= 1000000; i++){
		if (tet[i] % 2 == 0) continue;
		for (int j = 0; j + tet[i] <= 1000000; j++){
			d2[j + tet[i]] = min(d2[j + tet[i]], d2[j] + 1);
		}
	}
	
	int n;
	while (scanf("%d", &n), n){
		cout << d[n] << " " << d2[n] << endl;
	}
	
	return 0;
}