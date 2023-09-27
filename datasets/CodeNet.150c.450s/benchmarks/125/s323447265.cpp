// 2015/01/05 Tazoe

#include <iostream>
#include <stack>
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

//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cout << G[i][j] << ' ';
//		}
//		cout << endl;
//	}

	int d[100] = {0};
	int f[100] = {0};

	stack<int> S;
	int T = 0;

	for(int i=0; i<n; i++){
		if(d[i]!=0)
			continue;

		S.push(i);
		d[i] = ++T;

		while(!S.empty()){
			int u = S.top();

			int v = -1;
			for(int j=0; j<n; j++){
				if(G[u][j]==1 && d[j]==0){
					v = j;
					break;
				}
			}

			if(v!=-1){
				S.push(v);
				d[v] = ++T;
			}
			else{
				S.pop();
				f[u] = ++T;
			}
		}
	}

	for(int i=0; i<n; i++){
		cout << i+1 << ' ' << d[i] << ' ' << f[i] << endl;
	}

	return 0;
}