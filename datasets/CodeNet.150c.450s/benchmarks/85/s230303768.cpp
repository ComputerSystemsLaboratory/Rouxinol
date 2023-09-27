#include<iostream>
#include<vector>

const static int MAX = 1000;
const static int INF = 1001001001;

int M[MAX];
int C[MAX][MAX];

int main(void){
    int n;
    int trash;
    std::cin >> n;
    std::cin >> M[0];
    for(int i = 1; i <= n; i++){
	std::cin >> M[i];
	std::cin >> trash;
    }

    for(int i = 0; i < MAX; i++){
	for(int j = 0; j < MAX; j++){
	    C[i][j] = INF;
	}
    }

    for(int i = 0; i < MAX; i++){
	C[i][i] = 0;
    }


    for(int l = 2; l <= n; l++){
	for(int i = 1; i <= n - l + 1; i++){
	    int j = i + l - 1;
	    for(int k = i; k <= j; k++){
		int tmp = C[i][k] + C[k+1][j] + M[i-1] * M[k] * M[j]; 
		if(tmp < C[i][j]){
		    C[i][j] = tmp;
		}
	    }
	}
    }

    std::cout << C[1][n] << std::endl;

    return 0;
}

