#include<iostream>
#include<cmath>
using namespace std;
int main(){
	while(true){
		int gold = 0;
		int n,m,p,mn;
		scanf("%d%d%d", &n, &m, &p);
		if( n == 0 && m == 0 && p == 0 )break;
		for(int i = 0; i < n; ++i){
			int t;scanf("%d", &t);gold += 100 * t;
			if(i==m-1)mn=t;
		}
		gold = (int)floor(gold * (1 - ((double)p/100)));
		printf("%d\n", mn > 0 ? (int)floor((double)gold / mn) : 0);
	}
	return 0;
}