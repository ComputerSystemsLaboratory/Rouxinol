#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <ctime>
#include <cstring>
using namespace std;

int n;


int main(void){

	cin >> n;
	int suji[n];
	int	num[n];
	int adj[n][n];
	int ans[n][n];

	

	for(int i = 0; i < n; i++){
		
		cin >> suji[i] >> num[i];

		
		for(int j = 0; j < num[i]; j++){
			cin >> adj[i][j];
			adj[i][j] -= 1;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			ans[i][j] = 0;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < num[i]; j++){
			ans[i][adj[i][j]] = 1;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j == n - 1){
				cout << ans[i][j] << endl;
			}else{
				cout << ans[i][j] << " ";
			}
		}
	}



	
    return 0;
}