#include<iostream>
#include<queue>

const static int MAX = 100000;
int color[MAX];
int group_color;
std::vector<int> A[MAX];

int search(int o){
    if(color[o] != 0){
	return 0;
    }
    std::queue<int> qu;
    qu.push(o);
    color[o] = group_color;
    while(!qu.empty()){
	int cur = qu.front();
	qu.pop();
	for(int i = 0; i < A[cur].size(); i++){
	    if(color[A[cur][i]] == 0){
		qu.push(A[cur][i]);
	    	color[A[cur][i]] = group_color;
	    }
	}
    }
    return 0;
}

int main(void){
    int n, m, s, t, q;

    std::cin >> n >> m;
    for(int i = 0; i < m; i++){
	std::cin >> s >> t;
	A[s].push_back(t);
	A[t].push_back(s);
    }
    for(int i = 0; i < n; i++){
        color[i] = 0;
    }
    group_color = 1;
    for(int i = 0; i < n; i++){
	search(i);
	group_color++;
    }

    std::cin >> q;
    for(int i = 0; i < q; i++){
	std::cin >> s >> t;
	if(color[s] == color[t]){
	    std::cout << "yes" << std::endl;
	}else{
	    std::cout << "no" << std::endl;
	}
    }

    return 0;
}

