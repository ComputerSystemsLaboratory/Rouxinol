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
#define INF (1000000000)
#define MOD (1000000007)
using namespace std;

typedef vector<int> VI;
typedef vector<int>::iterator VII;
typedef vector<double> VD;
typedef vector<double>::iterator VDI;
typedef pair<int, int> PII;

int d[10][10];

int main()
{
	int n;
	while (scanf("%d", &n), n){
		for (int i = 0; i < 10; i++){
			for (int j = 0; j < 10; j++){
				d[i][j] = INF * (i != j);
			}
		}
		
		int v = 0;
		
		for (int i = 0; i < n; i++){
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			d[a][b] = c;
			d[b][a] = c;
			
			v = max(v, max(a, b));
		}
		
		for (int k = 0; k <= v; k++){
			for (int i = 0; i <= v; i++){
				for (int j = 0; j <= v; j++){
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}
		
		PII mini = PII(INF, INF);
		for (int i = 0; i <= v; i++){
			int sum = 0;
			
			for (int j = 0; j <= v; j++){
				sum += d[i][j];
			}
			
			if (mini.second > sum){
				mini = PII(i, sum);
			}
		}
		printf("%d %d\n", mini.first, mini.second);
	}
}