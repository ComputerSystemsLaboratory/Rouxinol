#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <cstring>
#include <climits>
#include <queue>
#include <map>
#include <sstream>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define EPS 1e-9

int main(){
	int n,a,b,c,x;
	int reel[100];
	while(scanf("%d%d%d%d%d",&n,&a,&b,&c,&x),n|a|b|c|x){
		rep(i,n)scanf("%d",&reel[i]);
		int k = 0;
		int i;
		for(i=0; i<10001; i++){
			if( x==reel[k] ){
				k++;
				if( k==n )break;
			}
			x = (a*x + b) % c;
		}
		//printf("i:%d\n",i);
		printf("%d\n",i==10001?-1:i);
	}
	return 0;
}