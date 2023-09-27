#include <bits/stdc++.h>

#define INF INT_MAX
#define ll long long

using namespace std;

int main(){
	while(true){
		int w,h;
		cin >> w >> h;
		if(w == 0 && h == 0)
			break;
		int c[h][w];
		//??\???
		for(int j = 0;j < h;j++){
			for(int i = 0;i < w;i++){
				cin >> c[j][i];
			}
		}

		//??????????????°????????????
		int ans = 0;
		for(int j = 0;j < h;j++){
			for(int i = 0;i < w;i++){
				if(c[j][i] == 1){
					ans++;
					vector< pair<int,int> > v;
					v.push_back(make_pair(j,i));
					while(!v.empty()){
						int y = v.back().first, x = v.back().second;
						c[y][x] = 0;	//????????¶????????????
						v.pop_back();
						for(int dirY = -1;dirY < 2;dirY++){
							for(int dirX = -1;dirX < 2;dirX++){
								int yy = y + dirY,xx = x + dirX;
								if((0 <= yy && yy < h) && (0 <= xx && xx < w) && (c[yy][xx] == 1)){
									v.push_back(make_pair(yy,xx));
								}
							}
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}