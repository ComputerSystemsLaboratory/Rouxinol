#include<queue>
#include<stack>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int n, dd[101], f[101], tmap[101][101];
int color[101], t = 1;
stack<int> S;

int a(){
	int d = S.top();
	dd[d] = t;
	t++;
	color[d] = 1;
	for (int i = 1; i <= n; i++){
		if (color[i] == 0 && tmap[d][i] == 1){
			S.push(i);
			a();
		}
	}
	
	f[d] = t;
	t++;
	return 0;
}


int main(){
	cin >> n;
	for (int i = 0; i < 100; i++){
		dd[i] = f[i] = color[i] = 0;
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
	for (int i = 1; i <= n; i++){
		if (color[i] == 0){
			S.push(i);
			a();
		}
	}
	for (int i = 1; i <= n; i++){
		cout << i << " " << dd[i] << " " << f[i] << endl;
	}
	return 0;
}