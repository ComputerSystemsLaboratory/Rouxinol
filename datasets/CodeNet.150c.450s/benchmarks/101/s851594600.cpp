#include <iostream>
#include <cstdio>
#include <vector>

#define MAX 100000

#define WHITE 0
#define GRAY 1
#define BLACK 2


using namespace std;

vector<int> G[MAX];
int graphc[MAX];
int color[MAX];
int colorCount;

void def(int o)
{
	int v;

	for (int i = 0; i < G[o].size(); i++) {

		v = G[o][i];
		if (color[v] == WHITE) {

			color[v] = GRAY;
			def(v);
		}
	}
	color[o] = BLACK;
	graphc[o] = colorCount;
}


int main(void)
{
	int n;
	int m;
	int s;
	int t;
	int q;


	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> s >> t;
		G[s].push_back(t);
		G[t].push_back(s);
	}

	for (int i = 0; i < n; i++) {

		if (color[i] == WHITE) {
			colorCount++;
			def(i);
			
		}
	}



	cin >> q;

	for (int i = 0; i < q; i++) {

		cin >> s >> t;

		cout << ((graphc[s] == graphc[t]) ? "yes" : "no" )<< endl;
	}

	return 0;
}