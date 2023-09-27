#include <bits/stdc++.h>

using namespace std;

#define llong long long 
typedef struct data{
	vector<int> way;
	vector<int> waycost;
	int useway;
	int cost;
}data;

data d[101];
bool ok[101];
int sum;
int hownum;

void solve(int N, int before){
	for(int i = 0; i < d[N].way.size(); i++){
		if(d[N].cost + d[N].waycost[i] < d[d[N].way[i] ].cost){
			d[d[N].way[i] ].cost = min(d[d[N].way[i]].cost, d[N].cost + d[N].waycost[i]);
			d[d[N].way[i]].useway = N;
		}
	}
}

int main(){
	fill_n(ok, 101, false);
	int howway;
	int num;
	cin >> hownum;
	for(int i = 0; i < hownum; i++){
		cin >> num;
		cin >> howway;
		for(int j = 0; j < howway; j++){
			int w,c;
			cin >> w >> c;
			d[num].way.push_back(w);
			d[num].waycost.push_back(c);
		}

		if(num == 0) d[num].cost = 0;
		else d[num].cost = 10000000;
	}

	for(int j = 0; j < hownum; j++){
		for(int i = 0; i < hownum; i++){
			solve(i, -1);
		}
	}

	for(int i = 0; i < hownum; i++){
		cout << i << " " << d[i].cost << endl;
	}
	return 0;
}