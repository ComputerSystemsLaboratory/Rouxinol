#include <iostream>
using namespace std;
#include <algorithm>
#include <cstring>
#define INF 1000000

int flg[100];

bool check(int p){

	if (flg[p] == 1) return false;
	return true;
}

int main(void){

	int n;

	cin >> n;
	int u, k;
	int date[100][100]; //date[??????????????????][?????´?????????]
	int dis[100]; //0????????????????????????????????¢

	memset(date, INF, sizeof(date));
	memset(dis, INF, sizeof(dis));
	memset(flg, 0, sizeof(flg));
	date[0][0] = 0;
	dis[0] = 0;
	for (int i = 0; i < n; i++){

		cin >> u >> k;
		for (int j = 0; j < k; j++){

			int v, c;
			cin >> v >> c;
			date[u][v] = c;
		}
	}

	while(1){
		int mini = INF;
		int p = -1;
		for (int i = 0; i < n; i++){
			if (check(i) && mini > dis[i]){
				p = i;
				mini = dis[i];
			}
		}
		if (p == -1) break;
		flg[p] = 1;
		for (int i = 0; i < n; i++){
			if (check(i) && dis[i] > dis[p] + date[p][i]){
				dis[i] = dis[p] + date[p][i];
			}
		}
	}

	for (int i = 0; i < n; i++){
		cout << i << ' ' << dis[i] << endl;
	}
}