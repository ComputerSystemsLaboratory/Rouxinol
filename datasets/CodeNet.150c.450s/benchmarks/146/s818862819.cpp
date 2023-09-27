#define _USE_MATH_DEFINES
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

typedef long long ll;
using namespace std;

int main()
{
	int T;
	scanf("%d",&T);

	for(int t=0;t<T;t++){
		double pos[8];
		double eps = 10e-9;
		for(int i=0;i<8;i++){
			scanf("%lf",pos+i);
		}

		bool isok = (pos[0]-pos[2]) * (pos[1+4]-pos[3+4]) 
			== (pos[1]-pos[3]) * (pos[0+4]-pos[2+4]) ? true : false;

		printf("%s\n",isok ? "YES" : "NO");
	}
}