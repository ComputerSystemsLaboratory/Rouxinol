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

static const double eps = 1e-8;

int main(){

	int res=0;
	for(int i=0;i<2;i++){
		int sum = 0;
		for(int j=0;j<4;j++){
			int p;
			scanf("%d",&p);
			sum += p;
		}
		res = max(sum,res);
	}

	printf("%d\n",res);
}