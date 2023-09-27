#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

#define FAR (1<<22)
#define N 100

static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;


int n, color[N], d[N], p[N];
int m[N][N];

int prim(){
	for (int i = 0; i < n; ++i){
		color[i] = WHITE;
		d[i] = FAR;
		p[i] = -1;
	}

	d[0] = 0;
	int dist = FAR;

	while (1)
	{
		int u = -1;
		dist = FAR;
		for (int i = 0; i < n; ++i) {
			if (color[i] != BLACK && d[i] < dist){
				dist = d[i];
				u = i;
			}
		}

		if (-1 == u) break;
		color[u] = BLACK;

		for (int v = 0; v < n; ++v){
			if (color[v] != BLACK && (m[u][v] < d[v])){
				d[v] = m[u][v];
				p[v] = u;
				color[v] = GRAY;
			}
		}
	}
	dist = 0;
	for (int i = 0; i < n; ++i){
		if (p[i] != -1) dist += m[i][p[i]];
	}
	return dist;
}

int main(){
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int val; cin >> val;
			m[i][j] = (val == -1) ? FAR : val;
		}
	}
 
	cout << prim() << endl;

	return 0;
}