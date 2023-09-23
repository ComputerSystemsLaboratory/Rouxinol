#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <queue>

using namespace std;

#define INF (1 << 28)
#define MAX_E 1000
#define MAX_V 100

int cost[MAX_V][MAX_V];
bool used[MAX_V];
int d[MAX_V];

// O(V^2)??§?????????????????£??¨??????

void shortest_path(int s, int V){
	for(int i = 0; i < V; i++){
		d[i] = INF;
		used[i] = false;
	}
	d[s] = 0;
	while(true){
		
		int add_v = -1;
		
		for(int u = 0; u < V; u++){
			if(!used[u] && (add_v == -1 || d[u] < d[add_v])){
				add_v = u;
			}
		} // ??´??°????????????????±????
		
		if(add_v == -1){
			break;
		} // ??´??°???????????????????????´????????????
		used[add_v] = true;
		
		for(int u = 0; u < V; u++){
			d[u] = min(d[u], d[add_v] + cost[add_v][u]);
		} // ???????????????????????????????°???????????????´??°
	}
}

int main(){
	
	int V = 10; // V???????????°
	
	int n;
	
	bool town_use[10];
	
	while(true){
		
		cin >> n;
		
		if(n == 0){
			break;
		}
		
		for(int i = 0; i < 100; i++){
			for(int j = 0; j < 100; j++){
				cost[i][j] = INF;
			}
		}
		
		for(int i = 0; i < 10; i++){
			town_use[i] = false;
		}
		
		for(int i = 0; i < n; i++){
			int hoge1, hoge2, hoge3;
			cin >> hoge1 >> hoge2 >> hoge3;
			cost[hoge1][hoge2] = hoge3;
			cost[hoge2][hoge1] = hoge3;
			town_use[hoge1] = true;
			town_use[hoge2] = true;
		}
		
		int min = INF;
		int ans = 0;
		
		for(int i = 0; i < 10; i++){
			int sum = 0;
			if(town_use[i]){
				shortest_path(i, V);
				for(int j = 0; j < 10; j++){
					if(d[j] != INF){
						sum += d[j];
					}
				}
				if(sum < min){
					min = sum;
					ans = i;
				}
			}
		}
		
		cout << ans << " " << min << endl;
		
	}
	
	return 0;
}