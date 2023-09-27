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
typedef pair <int,int> P;
typedef pair <int,P> PP;

static const double EPS = 1e-8;

const int tx[] = {-1,0,1,0};
const int ty[] = {0,1,0,-1};

char stage[20][20];

int main(){
	int N;

	while(~scanf("%d",&N)){
		if(N==0) break;
		map<int,P> rect;
		int min_x=0,min_y=0,max_x=0,max_y=0;
		rect[0] = P(0,0);
		for(int i=1;i<N;i++){
			int n,d;
			scanf("%d %d",&n,&d);
			rect[i].first = rect[n].first + tx[d];
			rect[i].second = rect[n].second + ty[d];
			min_x = min(min_x,rect[i].first);
			max_x = max(max_x,rect[i].first);

			min_y = min(min_y,rect[i].second);
			max_y = max(max_y,rect[i].second);
		}

		printf("%d %d\n",max_x-min_x+1,max_y-min_y+1);
	}


}