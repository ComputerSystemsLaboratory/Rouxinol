#include <iostream>
#include <cstdio>


using namespace std;

const long int INF = 5000000000;
const int MAX_E = 500000;
const int MAX_V = 100000;

struct edge   //??????????????????cost???(from,to)??¨??????(?????????)???
{
	int from;
	int to;
	int cost;

	edge()
	{
		from = 0;
		to = 0;
		cost = 0;
	}
};

//edge es[MAX_E];

int V,E,r;    //??°?????????????????°,?????°,?§????
long int d[MAX_V];
edge es[MAX_E];



void shortest_path(int r)
{
	for(int i = 0; i < V; i++)
	{
		d[i] = INF;
	}

	d[r] = 0;

	while(true)
	{
		bool update = false;

		for(int i = 0; i < E; i++)
		{
			edge e = es[i];

			if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost)
			{
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}

		if (!update) break;
	}
}


int main()
{
	int a[10];
	//edge es[MAX_E];

	scanf(" %d %d %d", &V,&E,&r);

	//cout << endl;
	//cout << V << E << r << endl;


	for(int i = 0; i < E; i++)
	{
		scanf(" %d %d %d", &es[i].from, &es[i].to, &es[i].cost);
	}

	/*for(int i = 0; i < E; i++)
	{
		//scanf("%d %d %d", &es[i].from, &es[i].to, &es[i].cost);
		printf("%d %d", i,es[i].from);
		printf(" %d", es[i].to);
		printf(" %d", es[i].cost);
		cout << endl;
	}


	cout << "okok";*/

	shortest_path(r);

	for(int i = 0; i < V; i++)
	{
		if (d[i] == INF)
		{
			printf("INF\n");
		}else
		{
			printf("%ld\n", d[i]);
		}
	}

	return 0;
}