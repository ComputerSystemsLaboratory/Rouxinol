// 2015/01/05 Tazoe

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int G[100][100] = {0};

	for(int i=0; i<n; i++){
		int u, k;
		cin >> u >> k;

		for(int j=0; j<k; j++){
			int v;
			cin >> v;

			G[u-1][v-1] = 1;
		}
	}

	int d[100];
	for(int i=0; i<n; i++){
		d[i] = -1;
	}

	queue<int> Q;

	Q.push(0);
	d[0] = 0;

	while(!Q.empty()){
		int u = Q.front();

		int v = -1;
		for(int j=0; j<n; j++){
			if(G[u][j]==1 && d[j]==-1){
				v = j;
				break;
			}
		}

		if(v!=-1){
			Q.push(v);
			d[v] = d[u]+1;
		}
		else{
			Q.pop();
		}
	}

	for(int i=0; i<n; i++){
		cout << i+1 << ' ' << d[i] << endl;
	}

	return 0;
}