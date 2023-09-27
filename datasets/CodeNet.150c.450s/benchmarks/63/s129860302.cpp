#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <vector>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct edge{
	int start, target, weight;
};

const int INF = 2147473000;


int main(){
	int init_buf;
	cin >> init_buf;
	const int num_of_node = init_buf;
	cin >> init_buf;
	const int num_of_edge = init_buf;
	cin >> init_buf;
	const int start_point = init_buf;

	edge *edges = new edge[num_of_edge];
	int *res = new int[num_of_node];

	for(int i = 0; i < num_of_node; i ++)
		res[i] = INF;
	for(int i = 0; i < num_of_edge; i ++)
		cin >> edges[i].start >> edges[i].target >> edges[i].weight;

	res[start_point] = 0;
	while(true){
		bool update = false;

		for(int i = 0; i < num_of_edge; i ++){
			edge e = edges[i];
			if(res[e.start] == INF) continue;	
			int test = res[e.start] + e.weight; 
			if(test < res[e.target]){
				res[e.target] = test;
				update = true;
			}
		}
		if(!update)break;
	}

	for(int i = 0; i < num_of_node; i ++){
		if(res[i] != INF) cout << res[i];
		else cout << "INF";
		cout << endl;
	}

	delete [] edges;
	delete [] res;
}