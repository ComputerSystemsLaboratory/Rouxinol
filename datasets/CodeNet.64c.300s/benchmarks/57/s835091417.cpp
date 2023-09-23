#include<iostream>
#include<cmath>
#include<cstdio>

#define R_MAX 10
#define C_MAX 10000

using namespace std;

int R,C;
int org_m[R_MAX][C_MAX], m[R_MAX][C_MAX];

void FlipRow(int i){
	for(int j = 0; j < C; ++j)
		m[i][j] = 1 ^ m[i][j];
}

void FlipColumn(int j){
	int cnt = 0;
	for(int i = 0; i < R; ++i){
		cnt += m[i][j];
	}
	if( cnt > R/2 ){
		for(int i = 0; i < R; ++i){
			m[i][j] = 1 ^ m[i][j];
		}
	}
}

int CountOsenbei(){
	int ret = 0;
	for(int i = 0; i < R; ++i){
		for(int j = 0; j < C; ++j){
			ret += 1 ^ m[i][j];
		}
	}
	return ret;
}

int main()
{
	while(true){
		int ans = 0;

		scanf("%d%d", &R, &C);
		if( R == 0 && C == 0 )
			break;

		for(int i = 0; i < R; ++i){
			for(int j = 0; j < C; ++j){
				scanf("%d", &m[i][j]);
				org_m[i][j] = m[i][j];
			}
		}

		for(int i = 0; i < (int)pow(2.0,R); ++i){
			
			for(int j = 0; j < R; ++j){
				int b = (int)pow(2.0,j);
				if( i & b ){
					FlipRow( j );
				}
			}

			for(int j = 0; j < C; ++j){
				FlipColumn( j );
			}

			ans = max( ans, CountOsenbei() );

			for(int j = 0; j < R; ++j){
				for(int k = 0; k < C; ++k){
					m[j][k] = org_m[j][k];
				}
			}
		}

		printf("%d\n", ans);
	}
	return 0;
}