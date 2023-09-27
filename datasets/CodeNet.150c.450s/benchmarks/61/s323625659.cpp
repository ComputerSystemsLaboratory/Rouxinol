#define _USE_MATH_DEFINES
#define INF 0x3f3f3f3f
#include <cstdio>
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
typedef pair <int,P > PP;

int tx[] = {0,1,0,-1};
int ty[] = {-1,0,1,0};

static const double EPS = 1e-8;

int main(){
	int N,A,B,C,X;
	while(~scanf("%d %d %d %d %d",&N,&A,&B,&C,&X)){
		//x' = (A × x + B) mod C
		if(N==0) break;
		int count = 0;
		vector<int> Y;
		for(int i=0;i<N;i++){
			int y;
			scanf("%d",&y);
			Y.push_back(y);
		}

		if(Y[0]==X && Y.size() == 1){
			goto last;
		}
		
		for(int i=0;i<Y.size();i++){
			for(int j=0;j<=100000;j++){	
				if(i==0 && Y[i]==X){
					continue;
				}
				count++;
				X = (A*X + B) % C;
				if(Y[i]==X){
					break;
				}
				if(count > 10000) goto last;						
			}
		}

last:;
		printf("%d\n",count > 10000 ? -1 : count);
	}
}