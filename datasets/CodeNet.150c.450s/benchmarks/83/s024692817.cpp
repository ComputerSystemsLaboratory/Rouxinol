#include<iostream>
#include<algorithm>
#include<utility>
#define MAXN 105
#define MAXW 10005
#define TOP 0
#define DIA 1
using namespace std;

int p[MAXN], c[MAXN][MAXW], g[MAXN][MAXW] = { 0 };
int N, W;

struct Items{
	int weight, value;
};

Items items[MAXN];

int price(){
	for (int i = 0; i <= N; i++){
		c[i][0] = 0;
	}
	for (int i = 1; i <= W; i++){
		c[0][i] = 0;
	}
	for (int n = 1; n <= N; n++){
		for (int w = 1; w <= W; w++){
			c[n][w] = c[n - 1][w];
			g[n][w] = TOP;
			if (w < items[n].weight) continue;
			else if (c[n][w] < c[n - 1][w - items[n].weight] + items[n].value)
			{
				c[n][w] = c[n - 1][w - items[n].weight] + items[n].value;
				g[n][w] = DIA;
			}
				
		}
	}
	return c[N][W];
}

int main(){
	cin >> N >> W;
	for (int i = 1; i <= N; i++){
		cin >> items[i].value >> items[i].weight;
	}
	cout << price() << endl;
	
}