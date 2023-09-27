#include <iostream>
using namespace std;

const int INF = 10000;
int cost[10][10];

void init()
{
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(i == j){
				cost[i][j] = 0;
			}else{
				cost[i][j] = INF;
			}
		}
	}
}

int main()
{
	int n;
	while(cin >> n){
		if(n==0)
			break;
		init();
		int a,b,c,m=0;
		for(int i=0;i<n;i++){
			cin >> a >> b >> c;
			cost[a][b] = c;
			cost[b][a] = c;
			if(m < max(a,b))
				m = max(a,b);
		}
		m++;
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				for(int k=0;k<m;k++){
					int cdis = cost[j][i] + cost[i][k];
					if(cdis < cost[j][k]){
						cost[j][k] = cdis;
					}
				}
			}
		}
		int mati,min_cost=100000000;
		for(int i=0;i<m;i++){
			int costs = 0;
			for(int j=0;j<m;j++){
				costs += cost[i][j];
			}
			if(min_cost > costs){
				min_cost = costs;
				mati = i;
			}
		}
		cout << mati << " " << min_cost << endl;
	}
	return 0;
}