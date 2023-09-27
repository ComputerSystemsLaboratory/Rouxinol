#include <cstdio>
#include <iostream>
using namespace std;

const int N=100;

int main(){
	int n;
	long m[N+1][N+1], p[N+1];
	
	scanf(" %d", &n);
	for(int i=1; i<=n; ++i)
		scanf(" %ld %ld", &p[i-1], &p[i]);
		
	//for(int i=0; i<=n; ++i) printf("p[%d]=%ld\n", i, p[i]);
		
	for(int i=1; i<=n; ++i) m[i][i]=0;
	
	for(int s=2; s<=n; ++s){ //s??????????????????
		for(int i=1; i+s-1<=n; ++i){ //?§????i
			int j=i+s-1; //??????j
			m[i][j]=100000000; //????????§???????????§?????????
			for(int k=i; k<=j-1; ++k){ //?????????k
				m[i][j]=min(m[i][j], m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
				//printf("go %d %d %d\n",i, j, k);
			}
		}
	}
	
	printf("%ld\n", m[1][n]);
}