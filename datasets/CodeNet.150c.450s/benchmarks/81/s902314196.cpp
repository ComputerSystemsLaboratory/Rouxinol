#include <iostream>
#include <vector>
using namespace std;
int main(){
	constexpr int INF = 1e8;
	while(1) {
		int n;
		cin>>n;
		if(!n) break;
		vector<vector<int>> d(10,vector<int>(10,INF));
		for (int i = 0; i < 10; i++)
			d[i][i] = 0;
		for (int i = 0; i < n; i++) {
			int a,b,c;
			cin>>a>>b>>c;
			d[a][b] = d[b][a] = c;
		}
		int maxTown = 0;
		for (maxTown = 0; maxTown < 10; maxTown++) {
			bool exist = false;
			for (int j = 0; j < 10; j++)
				if(d[maxTown][j] != INF && d[maxTown][j]) exist = true;
			if(!exist) break;
		}
		for (int k = 0; k < maxTown; k++)
			for (int i = 0; i < maxTown; i++)
				for (int j = 0; j < maxTown; j++)
					d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
		int minsum = INF,minidx = -1;
		for (int i = 0; i < maxTown; i++) {
			int sum = 0;
			for (int j = 0; j < maxTown; j++)
				sum += d[i][j];
			if(minsum > sum) {
				minsum = sum;
				minidx = i;
			}
		}
		cout << minidx << ' ' << minsum << endl;
	}
	return 0;
}