#include<iostream>
#define MAX 20
#define GEM 1
using namespace std;
int main(){
	while(true){
		int map[MAX+1][MAX+1]={{0,},};
		int ri=10,rj=10;
		int n,m;
		int cnt = 0;

		cin>>n;
		if(n==0)break;
		for(int i = 0; i < n; ++i){
			int ji,jj;
			cin>>ji>>jj;
			map[MAX-jj][ji]=GEM;
		}
		cin>>m;
		for(int i = 0; i < m; ++i){
			char dir;
			int len;
			cin>>dir>>len;
			switch(dir){
				case 'N':
					for(int j = 0; j < len; ++j){
						--ri;
						if( map[ri][rj] == GEM ){
							map[ri][rj] = 0;
							++cnt;
						}
					}
					break;
				case 'E':
					for(int j = 0; j < len; ++j){
						++rj;
						if( map[ri][rj] == GEM ){
							map[ri][rj] = 0;
							++cnt;
						}
					}
					break;
				case 'W':
					for(int j = 0; j < len; ++j){
						--rj;
						if( map[ri][rj] == GEM ){
							map[ri][rj] = 0;
							++cnt;
						}
					}
					break;
				case 'S':
					for(int j = 0; j < len; ++j){
						++ri;
						if( map[ri][rj] == GEM ){
							map[ri][rj] = 0;
							++cnt;
						}
					}
					break;
			}
		}
		if( cnt == n )
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}