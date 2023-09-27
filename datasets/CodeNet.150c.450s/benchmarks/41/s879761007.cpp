#include<iostream>
#include<cstdio>
#include<vector>

#define INF 99999999999999999
#define ll long long

using namespace std;

struct edge
{
	int from;  //?????????
	int to;    //??°??????
	int cost;  //??????
};

const int MAX_N = 100;
const int MAX_M = 10000;

ll d[MAX_N][MAX_N];
edge es[MAX_M];
bool flag;

void shortest_path(int n,int m,int s)	//s???????????????????????????????????????????????¢????±???????
{
	int cnt = 0;
	d[s][s] = 0;
	while(true && cnt < n){
		bool update = false;
		for(int i=0;i<m;i++){
			edge e = es[i];
			if(d[s][e.from] != INF && d[s][e.to] > d[s][e.from] + e.cost){
				d[s][e.to] = d[s][e.from] + e.cost;
				update = true;
			}
		}
		if(!update) break;
		cnt++;
	}
	if(cnt == n){
		flag = true;
	}
}

int main()
{
	int i,n,m,s;
	cin >> n;  //????????°
	cin >> m;  //?????°
	for(int i=0;i<m;i++){
		scanf("%d",&es[i].from);
		scanf("%d",&es[i].to);
		scanf("%d",&es[i].cost);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			d[i][j] = INF;
		}
	}
	flag = false;
	for(int i=0;i<n;i++){
		shortest_path(n,m,i);
		if(flag){
			break;
		}
	}
	if(!flag){
		for(int i=0;i<n;i++){
			for(int j=0;j<n-1;j++){
				if(d[i][j] == INF){
					cout << "INF ";
				}else{
					cout << d[i][j] << " ";
				}
			}
			if(d[i][n-1] == INF){
				cout << "INF";
			}else{
				cout << d[i][n-1];
			}
			cout << "\n";
		}
	}else{
		cout << "NEGATIVE CYCLE\n";
	}
}