#include <cmath>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <queue>
#include <complex>
#include <climits>

typedef long long ll;

using namespace std;

int main(void){
	int N, M, dif;
	int x, y, nx, ny;
	char c;

	while(1){
		int d[21][21] = {0};
		cin >> N;
		if(!N) break;
		for(int i=0; i<N; ++i){
			cin >> x >> y;
			d[x][y] = 1;
		}

		cin >> M;
		nx = ny = 10;
		d[nx][ny] = 0;
		for(int i=0; i<M; ++i){
			cin >> c >> dif;
			for(int j=0; j<dif; ++j){
				if(c == 'N'){
					ny++;
				}
				if(c == 'S'){
					ny--;
				}
				if(c == 'E'){
					nx++;
				}
				if(c == 'W'){
					nx--;
				}
				d[nx][ny] = 0;
			}
		}
	
		int check = 0;

		for(int i=0; i<21; ++i){
			for(int j=0; j<21; ++j){
				if(d[i][j] == 1) check = 1;
			}
		}

		if(check) cout << "No" << endl;
		else cout << "Yes" << endl;
	}

	return 0;
}