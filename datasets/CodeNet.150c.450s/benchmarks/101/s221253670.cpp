#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#define MAX 100000
using namespace std;
int d[MAX];

int n;
vector <int> M[MAX];


int tail;



void BFS(int s,int t) {
	queue <int>Q;
	Q.push(s);
	d[s] = t;
	while (!Q.empty()) {
		s = Q.front();
		Q.pop();
		for (int j = 0; j < M[s].size(); j++) {
				
				if (d[M[s][j]] == -1) {
					d[M[s][j]] = t;
					Q.push(M[s][j]);
				}
		}

	}
}


int main() {
	int  m, s, t, q;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &s, &t);
		M[s].push_back(t);
		M[t].push_back(s);
	}

	for (int i = 0; i < n; i++) {
		d[i] = -1;
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (d[i] == -1) {
			count++;
			BFS(i, count);
		}
	}
	cin >>q;
	for (int i = 0; i < q; i++) {
		int s2, t2;
		scanf("%d %d", &s2, &t2);
		if (d[s2] == d[t2]) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
		
		
	}
	
	return 0;
}
