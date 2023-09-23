#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<bitset>
using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 1e+8
#define EPS 1e-8
#define rep(i,j) for(int i = 0; i < (j); i++)
#define reps(i,j,k) for(int i = (j); i < (k); i++)
int main(){
	int n;
	int change[] = {500,100,50,10,5,1};
	while(scanf("%d",&n),n){
		n = 1000-n;
		int ans = 0;
		while(n > 0){
			ans++;
			for(int i = 0; i < 6; i++){
				if(n - change[i] >= 0){
					n -= change[i];
					break;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}