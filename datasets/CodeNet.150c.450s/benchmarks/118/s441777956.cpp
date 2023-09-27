#define _USE_MATH_DEFINES
#define INF 100000000

#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>
#include <cctype>
#include <utility>

using namespace std;

typedef long long ll;
typedef pair <string,string> P;
typedef pair <int,P> PP;

static const double EPS = 1e-8;

int calc(int Y,int M,int D){
	int res = 0;
	for(int y=1;y<=Y;y++){
		int ubm = 10;
		if(y==Y) ubm = M;
		for(int m=1;m<=10;m++){
			int ubd = 19;
			if(m % 2) ubd = 20;
			if(y % 3 == 0) ubd = 20;
			if(y==Y && m==M) ubd = D;

			for(int d=1;d<=ubd;d++){
				if(y==Y && m==M && d==D) goto found;
				res++;
			}
		}
	}
found:;

	return res;
}

int main(){
	int n;
	int mil = calc(1000,1,1);
	while(~scanf("%d",&n)){
		for(int i=0;i<n;i++){
			int Y,M,D;
			scanf("%d %d %d",&Y,&M,&D);
			printf("%d\n",mil-calc(Y,M,D));
		}
	}
}