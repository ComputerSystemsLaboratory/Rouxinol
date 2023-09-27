#include <iostream>
#include <algorithm>

using namespace std;
#define MAX_R 10
#define MAX_C 10000

int senbei[MAX_R][MAX_C];

int main(){
	int R,C;
	cin >> R >> C;
	while(R){
		for(int i = 0; i < R; ++i){
			for(int j = 0; j < C; ++j){
				cin >> senbei[i][j];
			}
		}
		int max_kueru = 0;
		for(int i = 0; i < (1<<R); ++i){
			int retsu[MAX_C] = {0};
			int max_kueru_local = 0;
			for(int j = 0; j < C; ++j){
				for(int k = 0; k < R; ++k){
					if((senbei[k][j] == 0 && !(i&(1<<k)))||(senbei[k][j] == 1 && (i&(1<<k)))){
						++retsu[j];
					}
				}
				max_kueru_local += max(retsu[j], R-retsu[j]);
			}
			max_kueru = max(max_kueru, max_kueru_local);
		}
		cout << max_kueru << endl;
		cin >> R >> C;
	}
}