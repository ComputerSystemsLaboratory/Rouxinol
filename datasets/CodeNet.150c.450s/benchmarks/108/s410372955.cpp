#define scanf_s scanf
#include <string>
#include <stdio.h>
#include <math.h>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

#define MAX 100
//#define MAX_ 1000
struct Graph
{
	int id, k;
	list<int> node;
	int d = -1;
};
Graph G[MAX];
//int cou = 0;
void Breadth_cou(Graph *g,int cou)
{
	for (auto i = g->node.begin(); i != g->node.end(); ++i) {
		if (G[*i].d == -1 || G[*i].d > cou) {
			if (G[*i].d != -1) {
				Breadth_cou(&G[*i], cou + 1);
			}
			G[*i].d = cou;
		}
	}
}
void Breadth(Graph *g)
{
	if (g->k > 0) {
		Breadth_cou(g, g->d + 1);
		g->k = 0;
		for (auto i = g->node.begin(); i != g->node.end(); ++i) {
			Breadth(&G[*i]);
		}
	}
}
int main(void)
{
	int u, xk, v, n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf_s("%d %d", &u, &xk);
		G[u - 1].id = u - 1;
		G[u - 1].k = xk;
		for (int j = 0; j < xk; ++j) {
			scanf_s("%d", &v);
			G[u - 1].node.push_back(v - 1);
		}
	}
	G[0].d = 0;
	Breadth(&G[0]);
	for (int i = 0; i < n; ++i) {
		printf("%d %d\n", G[i].id + 1, G[i].d);
	}
}