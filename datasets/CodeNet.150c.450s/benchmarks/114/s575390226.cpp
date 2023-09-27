#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define ROOP1(i,n) for(int i=0;i<n;i++)
#define ROOP2(j,n) for(int j=0;j<n;j++)
#define Psi pair<string,int>
#define Pis pair<int,string>
#define Pii pair<int,int>
static const int INFTY = (1 << 21);
static const int MAX = 100;
static const int WHITE = 1;
static const int GRAY = 2;
static const int BLACK = 3;
// ??????????????????memset(a,0,sizeof(a));
// ?´???°?????? if(x<2)return0;else if(x==2)return1;if(x%2==0)return0;for(i=3;i*i<=x;i+=2){if(x%i==0)return0;}return1;}p440
//vector size();push_back(x);pop_back();begin();end();insert(p,x);erase(p);clear();
//stack  size();top();pop();push(x);emtpy();
//queue  size();front();pop();push(x);empty();
int n;
int M[MAX][MAX];
int color[MAX], d[MAX], p[MAX];

int main(){
	cin >> n;
	ROOP1(i, n){
		ROOP2(j, n){
			cin >> M[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		d[i] = INFTY;
		color[i] = WHITE;
		p[i] = -1;
  	}
	bool flag =  true;
	d[0] = 0;
	while (flag){
		int mincost = INFTY; int u = 0;
		for (int i = 0; i < n; i++){
			if (color[i] != BLACK && d[i] < mincost){
				mincost = d[i];
				u = i;
			}
		}
		if (mincost == INFTY) break;
		color[u] = BLACK;
		for (int v = 0; v < n; v++){
			if (M[u][v] != -1 && color[v] != BLACK){
				if (d[v] > M[u][v]){
					d[v] = M[u][v];
					p[v] = u;
					color[v] = GRAY;
				}
			}
		}
 	}
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += M[i][p[i]];
	}
	cout << sum << endl;
	return 0;
}