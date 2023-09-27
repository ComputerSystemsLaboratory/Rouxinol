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

long long int DP[1001][1001] = {};

int main(){
	
	int n;
	cin >> n;
	
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
	
	for(int i = 0; i < n; i++){
		cout << DP[i][0];
		for(int j = 1; j < n; j++){
			cout << " " << DP[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
