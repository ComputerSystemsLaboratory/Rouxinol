#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int h;
	while(scanf("%d", &h), h){
		vector<vector<int> > v(5, vector<int>(h));
		for(int i = h - 1; i >= 0; --i)
		for(int j = 0; j < 5; ++j){
			scanf("%d", &v[j][i]);
		}
		int s = 0;
		bool upd = true;
		while(upd){
			upd = false;
			for(int i = 0; i < h; ++i){
				bool rm[5] = {};
				for(int j = 0; j < 3; ++j){
					if(v[j][i] && v[j][i] == v[j + 1][i] &&
					   v[j][i] == v[j + 2][i]){
						rm[j] = rm[j + 1] = rm[j + 2] = true;
						upd = true;
					}
				}
				for(int j = 0; j < 5; ++j){
					if(rm[j]){
						s += v[j][i];
						v[j][i] = 0;
					}
				}
			}
			for(int j = 0; j < 5; ++j){
				fill(remove(v[j].begin(), v[j].end(), 0), v[j].end(), 0);
			}
		}
		printf("%d\n", s);
	}
}