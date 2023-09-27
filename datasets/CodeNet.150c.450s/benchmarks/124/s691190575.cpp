#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
	int id;
	int cost;
	node(int i, int c){
		this->id = i;
		this->cost = c;
	}
	bool operator<(node c) const {
		return this->cost > c.cost;
	}
};

int main() {
	int n;
	scanf("%d", &n);
	
	int c[n];
	int w[n][n];
	for(int i = 0; i < n; i++){
		int u, k;
		scanf("%d %d", &u, &k);
		
		c[u] = u ? INT_MAX : 0;
		for(int j = 0; j < n; j++){
			w[u][j] = -1;
		}
		while(k--){
			int v, c;
			scanf("%d %d", &v, &c);
			w[u][v] = c;
		}
	}
	
	priority_queue<node> q;
	q.push(*new node(0, 0));
	while(q.size()){
		int i = q.top().id;
		int ca = q.top().cost;
		q.pop();
		
		for(int j = 0; j < n; j++){
			if(w[i][j] != -1 && c[j] > w[i][j] + ca){
				c[j] = w[i][j] + ca;
				q.push(*new node(j, c[j]));
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%d %d\n", i, c[i]);
	}
}