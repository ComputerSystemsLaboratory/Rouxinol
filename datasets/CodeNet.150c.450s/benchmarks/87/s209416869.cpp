#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
#define PB push_back
#define all(v) (v).begin(),(v).end()
const int INF = 10000;

int main()
{
	int h;
	while (scanf("%d", &h), h){
		VI v[5];
		
		for (int i = 0; i < h; i++){
			for (int j = 0; j < 5; j++){
				int a;
				scanf("%d", &a);
				v[j].PB(a);
			}
		}
		
		for (int i = 0; i < 5; i++){
			reverse(all(v[i]));
		}
		
		int res = 0;
		while (true){
			bool update = false;
			
			for (int i = 0; i < h; i++){
				int chain[5] = {1, 1, 1, 1, 1};
				for (int j = 1; j < 5; j++){
					if (v[j][i] == v[j - 1][i] && v[j][i] != INF) chain[j] = chain[j - 1] + 1;
				}
				for (int j = 4; j >= 2; j--){
					if (chain[j] >= 3){
						for (int k = j; k > j - chain[j]; k--){
							res += v[k][i];
							v[k][i] = INF;
						}
						update = true;
						break;
					}
				}
			}
			
			if (!update) break;
			
			for (int i = h - 1; i >= 0; i--){
				for (int j = 0; j < 5; j++){
					if (v[j][i] == INF){
						for (int k = i; k < h - 1; k++){
							swap(v[j][k], v[j][k + 1]);
						}
					}
				}
			}
			
			/*
			for (int i = h - 1; i >= 0; i--){
				for (int j = 0; j < 5; j++){
					if (v[j][i] == INF) printf("-1 ");
					else printf("%2d ", v[j][i]);
				}
				puts("");
			}
			puts("");
			*/
			
		}
		
		cout << res << endl;
	}
	
	return 0;
}