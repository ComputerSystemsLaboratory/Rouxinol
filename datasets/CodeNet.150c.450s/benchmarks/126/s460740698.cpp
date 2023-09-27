#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	while(true){
		int a, b, n, t1, t2;
		scanf("%d %d", &a, &b);
		if(a == 0 && b == 0) return 0;
		scanf("%d", &n);

		vector< vector<int> > ucs;

		vector< vector<int> > crosses;

		for(int i = 0;i < b;++i){
			vector<int> row(a, 0);
			crosses.push_back(row);

			vector<int> ucrow(a, 0);
			ucs.push_back(ucrow);
		}

		for(int i = 0;i < n;++i){
			scanf("%d %d", &t1, &t2);
			ucs[t2-1][t1-1] = 1;
		}

		crosses[0][0] = 1;
		for(int i = 0;i < b;++i){
			for(int j = 0;j < a;++j){
				if(i != 0 || j != 0){
					if(i == 0){
						crosses[i][j] += crosses[i][j-1];
					}else if(j == 0){
						crosses[i][j] += crosses[i-1][j];
					}else{
						crosses[i][j] += crosses[i-1][j] + crosses[i][j-1];
					}


					if(ucs[i][j] == 1) crosses[i][j] = 0;
				}
			}
		}

		printf("%d\n", crosses[b-1][a-1]);
	}
}
