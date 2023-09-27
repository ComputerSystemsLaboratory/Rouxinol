#include<queue>
#include<queue>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int n, dd[101], f[101], tmap[101][101];
int color[101], t = 0;
queue<int> Q;


void a(){
	while (!Q.empty()){
		int d = Q.front();
		Q.pop();
		for (int i = 1; i <= n; i++){
			if (color[i] == 0 && tmap[d][i] == 1){
				Q.push(i);
				color[i] = 1;
				dd[i] = dd[d] + 1;
			}
		}
	}
}


int main(){
	cin >> n;
	for (int i = 0; i < 100; i++){
		f[i] = color[i] = 0;
		dd[i] = -1;
		for (int j = 0; j < 100; j++){
			tmap[i][j] = 0;
		}
	}

	int u, k, v;

	for (int i = 0; i < n; i++){
		cin >> u >> k;
		for (int j = 0; j < k; j++){
			cin >> v;
			tmap[u][v] = 1;
		}
	}
	color[1] = 1;
	Q.push(1);
	dd[1] = t;
	a();
	for (int i = 1; i <= n; i++){
		cout << i << " " << dd[i] << endl;
	}
	return 0;
}