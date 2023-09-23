///AOJ0515
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cmath>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#define rep(i,a) for( int i = 0; i != (a); ++i )
#define repd(i,a) for( int i = (a); i >= 0; --i )
#define repi(i,a,b) for( int i = (a); i != (b); ++i )
using namespace std;
typedef unsigned long long ull;

int road[17][17];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	while (std::cin >> a >> b, a, b){
		memset(road, 0, sizeof(road));
		road[0][0] = 1;
		int n;
		std::cin >> n;
		for (int i = 0; i < n; ++i){
			int x, y;
			std::cin >> x >> y;
			road[x - 1][y - 1] = -1;
		}

		for (int i = 0; i < a; ++i){
			for (int j = 0; j < b; ++j){
				if (road[i][j] >= 0){
					if (road[i][j - 1] >= 0 && j-1>=0)road[i][j] += road[i][j - 1];
					if (road[i - 1][j] >= 0 && i-1>=0)road[i][j] += road[i - 1][j];
				}
			}
		}
		/*for (int i = 0; i < a; ++i){
			for (int j = 0; j < b; ++j){
				std::cout << road[i][j] << " ";
			}
			std::cout << endl;
		}*/
		std::cout << road[a - 1][b - 1] << '\n';
	}
	//system("pause");
	return 0;

}

//1000000000000000000