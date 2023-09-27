#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>
#define INF (2000000000)
#define MOD (1000000007)
using namespace std;

typedef vector<int> VI;
typedef vector<int>::iterator VII;
typedef vector<double> VD;
typedef vector<double>::iterator VDI;
typedef pair<int, int> P;
typedef map<int, int> MII;
typedef map<int, int>::iterator MIII;


int h[2000], w[2000];
map<int, int> x;
map<int, int> y;

int main()
{
	int N, M;
	while (scanf("%d %d", &N, &M), N + M){
		for (int i = 1; i <= N; i++){
			scanf("%d", &h[i]);
			h[i] += h[i - 1];
		}
		for (int j = 1; j <= M; j++){
			scanf("%d", &w[j]);
			w[j] += w[j - 1];
		}
		
		for (int i = 0; i <= N; i++){
			for (int j = i + 1; j <= N; j++){
				if (!y.count(h[j] - h[i])){
					y.insert(make_pair(h[j] - h[i], 1));
				}
				else {
					y[h[j] - h[i]]++;
				}
			}
		}
		
		for (int i = 0; i <= M; i++){
			for (int j = i + 1; j <= M; j++){
				if (!x.count(w[j] - w[i])){
					x.insert(make_pair(w[j] - w[i], 1));
				}
				else {
					x[w[j] - w[i]]++;
				}
			}
		}
		
		int cnt = 0;
		for (MIII ite = y.begin(); ite != y.end(); ite++){
			if (x.count(ite->first)){
				cnt += ite->second * x[ite->first];
			}
		}
		
		printf("%d\n", cnt);
		
		y.clear();
		x.clear();
	}
}