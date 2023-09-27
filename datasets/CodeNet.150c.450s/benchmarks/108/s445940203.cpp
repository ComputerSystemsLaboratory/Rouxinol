#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <list>

long long int INF = 1e18;
using namespace std;

typedef pair<long long int, long long int> P;

long long int DP[200][200] = {};

int n;

int main(){
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			DP[i][j] = INF;
		}
		DP[i][i] = 0;
	}
	for(int loop = 0; loop < n; loop++){
		
		int id, k;
		cin >> id >> k;
		id--;
		
		for(int i = 0; i < k; i++){
			int num;
			cin >> num;
			num--;
			DP[id][num] = 1;
		}
	}
	
	for(int k = 0; k < n; k++){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				DP[i][j] = min(DP[i][j], DP[i][k] + DP[k][j]);
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << i + 1 << " ";
		if(DP[0][i] == INF){
			cout << -1 << endl;
		}else{
			cout << DP[0][i] << endl;
		}
	}
	
	return 0;
}
