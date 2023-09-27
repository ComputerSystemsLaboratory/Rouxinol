#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
	int n, cost;
}Data;

typedef struct{
	Data data;
	int prior;
}node;

typedef struct{
	node* nodes;
	int arr_sz;  //???????????????????????????
	int que_sz;  //?¬????????´?????????´????????????
}priority_queue;

node* my_realloc(node* old_ptr, int old_sz, int new_sz){
	node* new_ptr = (node*)malloc(sizeof(node) * new_sz);
	if(old_sz){
		memcpy(new_ptr, old_ptr, sizeof(node) * old_sz);
		free(old_ptr);
	}
	return new_ptr;
}

void push(priority_queue *q, Data d, int prior){
	if(q->que_sz >= q->arr_sz){
		int new_sz = (q->arr_sz ? q->arr_sz * 2 : 8);
		q->nodes = my_realloc(q->nodes, q->arr_sz, new_sz);
		q->arr_sz = new_sz;
	}
	
	int k = q->que_sz;
	
	while(true){
		if(k == 0)break;
		
		int next = (k - 1) / 2;
		if(q->nodes[next].prior > prior){
			q->nodes[k] = q->nodes[next];
			k = next;
		}
		else break;
	}
	
	q->nodes[k].data = d;
	q->nodes[k].prior = prior;
	
	++q->que_sz;
}

Data pop(priority_queue *q){
	Data ret = q->nodes[0].data;
	
	q->nodes[0] = q->nodes[--q->que_sz];
	
	int k = 0;
	while(true){
		int l = k * 2 + 1, r = k * 2 + 2;
		int next = -1;
		
		if(l < q->que_sz)next = l;
		if(r < q->que_sz)next = (q->nodes[r].prior < q->nodes[l].prior ? r : l);
		
		if(next == -1)break;
		
		if(q->nodes[next].prior < q->nodes[k].prior){
			q->nodes[k] = q->nodes[next];
			k = next;
		}
		else break;
	}
	
	q->nodes[k] = q->nodes[q->que_sz];
	
	return ret;
}

typedef struct{
	int to, cost;
}Edge;

#define maxN  100005
#define maxM  500001
#define inf 2000000000

int cost[maxN];
Edge *g[maxN];
int g_sz[maxN], cnt[maxN];
int n, m, r;
int s[maxM], t[maxM], d[maxM];

void dijkstra(int k){
	priority_queue que = {0};
	for (int i = 0; i < n; ++i)cost[i] = inf;
	cost[k] = 0;
	Data d;
	d.n = k, d.cost = 0;
	push(&que, d, d.cost);
	
	while (que.que_sz){
		d = pop(&que);
		
		int v = d.n;
		if (cost[v] < d.cost)continue;
		for (int i = 0; i < g_sz[v]; ++i){
			Edge e = g[v][i];
			if (cost[e.to] > cost[v] + e.cost){
				cost[e.to] = cost[v] + e.cost;
				
				Data x;
				x.n = e.to, x.cost = cost[e.to];
				push(&que, x, x.cost);
			}
		}
	}
}

int main(void){
	scanf("%d%d%d", &n, &m, &r);
	
	for(int i = 0; i < m; ++i){
		scanf("%d%d%d", &s[i], &t[i], &d[i]);
		
		++cnt[s[i]];
	}
	
	for(int i = 0; i < n; ++i){
		g[i] = (Edge*)malloc(sizeof(Edge) * cnt[i]);
	}
	
	for(int i = 0; i < m; ++i){
		Edge e;
		e.to = t[i], e.cost = d[i];
		g[s[i]][g_sz[s[i]]++] = e;
	}
	
	dijkstra(r);
	
	for(int i = 0; i < n; ++i){
		if(cost[i] == inf)printf("INF\n");
		else printf("%d\n", cost[i]);
	}
	
	return 0;
}