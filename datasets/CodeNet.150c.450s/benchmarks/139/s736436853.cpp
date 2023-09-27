#include<iostream>
#include<vector>
#include<queue>

int main(void){
    int n, m, a, b;
    std::cin >> n >> m;
    std::vector<int> c(n+1), d(n+1);
    std::vector<std::vector<int>> r;
    r.resize(n+1);
    std::queue<int> q;

    for(int i = 0; i < m; i++){
	std::cin >> a >> b;
	r[a].push_back(b);
	r[b].push_back(a);
    }

    // for(int i = 0; i < n+1; i++){
    //     std::cout << i;
    //     for(int j = 0; j < r[i].size(); j++){
    //         std::cout << " " << r[i][j];
    //     }
    //     std::cout << std::endl;
    // }

    q.push(1);
    while(!q.empty()){
	int cur = q.front();
	q.pop();
	for(int i = 0; i < r[cur].size(); i++){
	    int next = r[cur][i];
	    if(c[next] == 0){
		q.push(next);
		d[next] = cur;
		c[next] = 1;
	    }
	}
    }

    bool flag = 0;
    for(int i = 2; i < n + 1; i++){
	if(c[i] == 0){
	    flag = 1;
	    break;
	}
    }

    if(!flag) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;

    for(int i = 2; i < n+1; i++){
	std::cout << d[i] << std::endl;
    }

    return 0;
}
