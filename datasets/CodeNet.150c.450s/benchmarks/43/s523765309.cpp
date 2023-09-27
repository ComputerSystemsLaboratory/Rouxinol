#define _USE_MATH_DEFINES
#define INF 10000000
#include <iostream>
#include <sstream>
#include <cmath>
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
typedef pair <int,PP> PPP;

static const double eps = 1e-8;

int main(){
	int n;
	while(~scanf("%d",&n)){
		if(n==0) break;
		int lSum=0,rSum=0;
		for(int i=0;i<n;i++){
			int lhs,rhs;
			scanf("%d %d",&lhs,&rhs);
			if(lhs > rhs) lSum += lhs + rhs;
			else if(lhs < rhs) rSum += lhs + rhs;
			else if(lhs == rhs){
				rSum += rhs;
				lSum += lhs;
			}
		}

		printf("%d %d\n",lSum,rSum);
	}
}