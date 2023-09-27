#include<map>
#include<list>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define LOOP1(n) for(int i=0;i<n;i++)
#define LOOP2(n) for(int j=0;j<n;j++)
#define LOOP3(n) for(int k=0;k<n;k++)
#define Psi pair<string,int>
#define Pis pair<int,string>
#define Pii pair<int,int>
// ??????????????????memset(a,0,sizeof(a));
// ?´???°?????? if(x<2)return0;else if(x==2)return1;if(x%2==0)return0;for(i=3;i*i<=x;i+=2){if(x%i==0)return0;}return1;}p440
//vector size();push_back(x);pop_back();begin();end();insert(p,x);erase(p);clear();
//stack  size();top();pop();push(x);emtpy();
//queue  size();front();pop();push(x);empty();
static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 1;
static const int GRAY = 2;
static const int BLACK = 3;
int n; int M[MAX][MAX];
int color[MAX]; int d[MAX]; int p[MAX];
int main(){
	int u, k, v, c, uu, sum = 0;
	cin >> n;
	LOOP1(n){
		LOOP2(n){
			M[i][j] = INFTY;
		}
	}
	LOOP1(n){
		cin >> u >> k;
		LOOP2(k){
			cin >> v >> c;
			M[u][v] = c;
		}
	}
	for (int i = 0; i < n; i++){
		color[i] = WHITE;
		d[i] = INFTY;
		p[i] = -1;
	}
	d[0] = 0;
	while (true){
		int mincost = INFTY;
		LOOP1(n){
			if (color[i] != BLACK && mincost > d[i]){
				mincost = d[i];
				uu = i;
			}
		}
		if (mincost == INFTY) break;
		color[uu] = BLACK;
		LOOP1(n){
			if (M[uu][i] != INFTY && color[i] != BLACK){
				if (M[uu][i] + d[uu] < d[i]){
					d[i] = d[uu] + M[uu][i];
					color[i] = GRAY;
					p[i] = u;
				}
			}
		}
	}
	LOOP1(n){
		cout << i << ' ' << d[i] << endl;
	}
	return 0;
}