/*** Mysterious Gems ***/

#include <bits/stdc++.h>
using namespace std;
#define SIZE 21
#define REP(i, n) for(int i=0; i<n; ++i)

void create_map(int map[][SIZE], int n){
	int x, y;
	REP(j, SIZE){
		REP(i, SIZE){
			map[j][i]=0;
		}
	}
	REP(i, n){
		cin >> x >> y;
		map[y][x]=1;
	}
	return;
}
	
int main(){
	int N, M;
	int l;
	int map[SIZE][SIZE], flag;
	char d;
	
	cin >> N;
	while(N!=0){
		create_map(map, N);
		
		int xx=10, yy=10;
		cin >> M;
		REP(k, M){
			cin >> d >> l;
			while(l>0){
				if(d=='N') ++yy;
				else if(d=='E') ++xx;
				else if(d=='S') --yy;
				else --xx;
				
				if(map[yy][xx]) map[yy][xx]=0;
				--l;
			}
		}
		flag=0;
		REP(j, SIZE){
			REP(i, SIZE){
				if(map[j][i]){
					flag=1;
					break;
				}
			}
		}
		
		if(flag) cout << "No" << endl;
		else cout << "Yes" << endl;
		
		cin >> N;
	}
	return 0;
}