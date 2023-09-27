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

using namespace std;

typedef long long ll;
typedef pair <int,int> P;
typedef pair <int,P> PP;

static const double EPS = 1e-8;

const int tx[] = {0,1,0,-1};
const int ty[] = {1,0,-1,0};

bool isPrime[1000000];

int main(){

	fill_n(isPrime,sizeof(isPrime),true);
	isPrime[0] = false;
	isPrime[1] = false;
	for(int i=1;i*i<=1000000;i++){
		if(isPrime[i]){
			for(int j=i+i;j<=1000000;j+=i){
				isPrime[j] = false;
			}
		}
	}

	int a,d,n;
	while(~scanf("%d %d %d",&a,&d,&n)){
		if(a==d && d==n && n==0) break;
		int c=0;
		int res=0;
		for(int i=a;i<=1000000;i+=d){
			if(isPrime[i]) {
				c++;
				if(c==n){
					res=i;
					break;
				}
			}
		}

		printf("%d\n",res);
	}
}