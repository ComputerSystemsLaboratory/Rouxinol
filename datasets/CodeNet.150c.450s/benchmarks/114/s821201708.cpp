#include<iostream>
#include<queue>

const static int MAX = 100;
const static int INF = 1001001001;
int A[MAX][MAX];
int d[MAX];
int p[MAX];
int color[MAX];

int main(void){
    int n, tmp, u, mincost, sum;
    std::cin >> n;
    for(int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
	    std::cin >> tmp;
	    if(tmp == -1) A[i][j] = INF;
	    else A[i][j] = tmp;
	}
    }

    d[0] = 0;
    for(int i = 1; i < n; i++){
	d[i] = INF;
    }
    p[0] = -1;
    for(int i = 0; i < n; i++){
	color[i] = 0;
    }

    while(true){
	mincost = INF;
	for(int i = 0; i < n; i++){
	    if(mincost > d[i] && color[i] == 0){
		mincost = d[i];
		u = i;
	    }
	}
	color[u] = 1;

	if(mincost == INF) break;

	for(int i = 0; i < n; i++){
	    if(d[i] > A[u][i] && color[i] == 0){
		d[i] = A[u][i];
		p[i] = u;
	    }
	}
    }

    sum = 0;
    for(int i = 0; i < n; i++){
	color[i] = 0;
    }
    for(int i = 0; i < n; i++){
	int cur = i;
	while(p[cur] != -1 && color[cur] == 0){
	    sum += A[p[cur]][cur];
	    color[cur] = 1;
	    cur = p[cur];
	}
    }
    std::cout << sum << std::endl;



    return 0;
}
