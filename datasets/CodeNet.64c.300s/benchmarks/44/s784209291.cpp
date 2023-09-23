#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <math.h>

#define PREP(i, m, n) for(int i = m; i < n; i++)
#define MREP(i, m, n) for(int i = m - 1; i >= n; i--)

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define all(v) v.begin(), v.end()
#define rev(v) v.rbegin(), v.rend()
#define X first
#define Y second
#define MP make_pair
#define PB push_back

using namespace std;
int table[10][10];


int main(){
	int n;
	while(cin >> n && n != 0){
		for(int i = 0; i < 10; i++){
			fill(table[i], table[i]+10, 10000000);
			table[i][i] = 0;
		}
		for(int i = 0; i < n; i++){
			int node1, node2;
			cin >> node1 >> node2;
			cin >> table[node1][node2];
			table[node2][node1] = table[node1][node2];
		}
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				for(int k = 0; k < 10; k++){
					table[j][k] = min(table[j][k], table[j][i] + table[i][k]);
				}
			}
		}
		int index = -1;
		int min = 1000000;
		for(int i = 0; i < 10; i++){
			if(table[i][0] == 10000000) break;
			int sum = 0;
			for(int j = 0; j < 10; j++){
				if(table[i][j] == 10000000) break;
				sum += table[i][j];
			}
			if(sum<min){
				min = sum;
				index = i;
			}
		}
		cout << index << " " << min << endl;
	}

	return 0;
}