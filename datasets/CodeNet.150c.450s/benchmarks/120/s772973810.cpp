#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e4+10;
bitset<maxn> cookie[10];

int main(){
	int R,C;
	while(cin>>R>>C && (R||C)){
		int i,j;
		for(int i=0; i<R; i++)
			for(int j=0; j<C; j++){
				bool upward;
				cin >> upward;
				cookie[i][j] = upward;
			}

		int r = 1<<R;
		int res = 0;
		for(int i=0; i<r; i++){
			for(int j=0; j<R; j++){
				if(i & (1<<j)) 
					cookie[j].flip();
			}

			int ans = 0;
			for(int j=0; j<C; j++){
				int up = 0;
				for(int k=0; k<R; k++){
					if(cookie[k][j])
						up++;
				}
				ans += max(up,R-up);
			}

			res = max(ans,res);

			for(int j=0; j<R; j++){
				if(i & (1<<j)) 
					cookie[j].flip();
			}
		}
		printf("%d\n",res);
	}

}