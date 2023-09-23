#include <iostream>
#include <cstdio>
using namespace std;

const int N=40;

int main(){
	while(1){
		int a, b, n, x, y;
		long f[17][17];
		
		scanf(" %d %d", &a, &b);
		if(a==0 && b==0) break;
		scanf(" %d", &n);
		
		//入力なしは-1
		for(int i=1; i<=a; ++i)
			for(int j=1; j<=b; ++j)
				f[i][j] = -1;

		//通れないところは0
		for(int i=0; i<n; ++i){
			scanf(" %d %d", &x, &y);
			f[x][y]=0;
		}
		
		
		//端を１で初期化(通れないところを除く)
		bool flag=true;
		for(int i=1; i<=a; ++i){
			if(flag && f[i][1]==-1) f[i][1]=1;
			else{
				flag=false;	
				f[i][1]=0;
			}	
		}
		
		flag=true;
		for(int i=2; i<=b; ++i){
			if(flag && f[1][i]==-1) f[1][i]=1;
			else{
				flag=false;	
				f[1][i]=0;
			}	
		}
		
		//左と下から足していく
		for(int i=2; i<=a; ++i){
			for(int j=2; j<=b; ++j){
				if(f[i][j]==-1){
					f[i][j] = f[i-1][j] + f[i][j-1];
				}
			}
		}
		
		/*
		//confirm
		for(int i=b; i>=1; --i){
			for(int j=1; j<=a; ++j){
				printf("%3ld", f[j][i]);
			}
			printf("\n");
		}
		*/
		
		printf("%ld\n", f[a][b]);
	}
	return 0;
}