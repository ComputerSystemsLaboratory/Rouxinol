#include <iostream>
#include <algorithm>
int cost[11][11];
#define INF 1e9

using namespace std;

int main(void){
	int n,a,b,d;
	int cmax;
	int t,rmin,tmin;
	while(cin >> n,n){
		tmin=INF;
		cmax=0;
		for(int i=0;i<11;i++)
				for(int j=0;j<11;j++)
					cost[i][j]=INF;
					
		for(int i=0;i<11;i++)
			cost[i][i]=0;
			
		for(int i=0;i<n;i++){
			cin >> a >> b >> d;
			if(cmax<a)
				cmax=a;
			if(cmax<b)
				cmax=b;
			cost[a][b]=cost[b][a]=d;
		}
		for(int k=0;k<=cmax;k++)
			for(int i=0;i<=cmax;i++)
				for(int j=0;j<=cmax;j++)
					cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
		
		for(int i=0;i<=cmax;i++){
			t=0;
			for(int j=0;j<=cmax;j++)
					t+=cost[i][j];
			if(t<tmin)
				tmin=t,rmin=i;
		}
		cout << rmin << ' ' << tmin << endl;
	}
	return 0;
}