#include<iostream>
#include<queue>

const static int MAX = 100;
int R[MAX][MAX];
int color[MAX], ar[MAX];
int n;

int search(int i){
    std::queue<int> qu;
    if(color[i] == 1){
	return 1;
    }
    qu.push(i);
    color[i] = 1;
    ar[i] = 0;
    while(!qu.empty()){
	int cur = qu.front();
	int flag = 0;
	for(int j = 0; j < n; j++){
	    if(R[cur][j] == 1 && color[j] == 0){
		qu.push(j);
		color[j] = 1;
		ar[j] = ar[cur] + 1;
		flag = 1;
	    }
	}
	if(flag == 0){
	    qu.pop();
	}
    }
    return 0;
}

int main(void){
    int u, k, v;
    std::cin >> n;

    for(int i = 0; i < MAX; i++){
	for(int j = 0; j < MAX; j++){
	    R[i][j] = 0;
	}
    }

    for(int i = 0; i < MAX; i++){
	color[i] = 0;
    }

    for(int i = 0; i < n; i++){
	std::cin >> u >> k;
	u--;
	for(int j = 0; j < k; j++){
	    std::cin >> v;
	    v--;
	    R[u][v] = 1;
	}
    }

    search(0);

    for(int i = 0; i < n; i++){
	if(color[i] == 0){
	    std::cout << i + 1 << " " << -1 << std::endl;
	}else{
	    std::cout << i + 1 << " " << ar[i] << std::endl;
	}
    }

    return 0;
}

