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

static const double EPS = 1e-8;



int main(){
	int R,C;
	while(~scanf("%d %d",&R,&C)){
		if(R==C && C==0) break;

		bitset<10000> bits[10];
		for(int y=0;y<R;y++){
			for(int x=0;x<C;x++){
				int num;
				scanf("%d",&num);
				bits[y][x] = (num >=1 ? true : false);
			}
		}

		int res = 0;
		bitset<10000> tmp[10];
		for(int S=0;S<=(1<<R)-1;S++){
			for(int i=0;i<10;i++) tmp[i] = bits[i];
			
			for(int i=0;i<R;i++){
				if(S & (1<<i)) tmp[i].flip();
			}

			int sum = 0;
			for(int x=0;x<C;x++){
				int rev = 0;
				for(int y=0;y<R;y++){
					if(tmp[y][x]) rev++;
				}
				rev = max(R-rev,rev);
				sum += rev;
			}
			res = max(sum,res);
		}


		printf("%d\n",res);

	}
}