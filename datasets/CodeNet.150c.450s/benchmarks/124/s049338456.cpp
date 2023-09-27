#include<stdio.h>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<queue>
#include<functional>
using namespace std;
int main(){
	int a;
	int b;
	int s;
	int t;
	vector<int> n[10000];
	int nn[10000];
	vector<int> x[10000];
	priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > >y;
	vector<pair<int, int> >::iterator yy;
	int z;
	int d[10000];
	int e;
	int c[10000];
	int zz;
	pair<int, int>pai;
	for (int i = 0; i < 10000; i++){
		d[i] = 1000000009;
		c[i] = 0;
	}
	scanf("%d", &a);
	for (int i = 0; i < a; i++){
		scanf("%d %d", &s, &b);
		for (int j = 0; j < b; j++){
			scanf("%d %d", &t, &e);
			n[s].push_back(t);
			nn[s]++;
			x[s].push_back(e);

		}
	}
	d[0] = 0;
	y.push(std::make_pair(d[0], 0));
	for (int i = 0; y.empty() == 0; i++){
		zz = 0;
		for (int j = 0; y.empty() == 0 && zz == 0; j++){
			pai = y.top();
			z = pai.second;
			if (c[z] == 0)zz++;
			else y.pop();
		}
		if (zz == 0)break;
		c[z] = 1;
		for (int j = 0; j < nn[z]; j++){
			if (d[z] + x[z][j] < d[n[z][j]])
			{
				d[n[z][j]] = d[z] + x[z][j];
				y.push(std::make_pair(d[n[z][j]], n[z][j]));
			}
		}
		y.pop();
	}
	for (int i = 0; i<a; i++)printf("%d %d\n",i,d[i]);
		return 0;
}