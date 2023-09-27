#include <iostream>
#include <queue>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
int N = 0, M = 0;


void bfs(std::vector<std::vector<int>> G){
	std::vector<int> parent(N, -1);
	std::queue<int> q;
	int visit_cnt = 1;
	parent[0] = 0;
	q.push(0);

	while(!q.empty()){
		int f = q.front();
		q.pop();

		for(int i : G[f]){
			if(parent[i] != -1) continue;
			parent[i] = f;
			q.push(i);
			visit_cnt++;
		}
	}

	if(visit_cnt < N) std::cout << "No" << std::endl;
	else {
		std::cout << "Yes" << std::endl;
		for(int i = 1; i < N; i++) std::cout << (parent[i] + 1) << std::endl;
	}
	return;
}


int main(void){
	int a, b;
	std::cin >> N >> M;
	std::vector<std::vector<int>> G(N);
	rep(i, M){
	       std::cin >> a >> b;
	       G[a-1].push_back(b-1);
	       G[b-1].push_back(a-1);
	}

	bfs(G);
	return 0;
}
