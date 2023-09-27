#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<string>
#include<queue>
#include<map>
#include<stack>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<sstream>


#define reps(i,f,n) for(int i = f; i < int(n); i++)
#define rep(i,n) reps(i,0,n)
#define f(n) n.first
#define s(n) n.second
using namespace std;
typedef pair<int,int> PII;

const int INF = 1e28;

PII xy[256];
int main(){
	
	int n;
	while(scanf("%d", &n),n){
		
		
		xy[0] = PII(0,0);
		
		reps(i,1,n){
			int in, d;
			cin >> in >> d;
			switch(d){
				case 0:
					xy[i] = PII(f(xy[in]),s(xy[in])-1);
					break;
				case 1:
					xy[i] = PII(f(xy[in])-1,s(xy[in]));
					break;
				case 2:
					xy[i] = PII(f(xy[in]),s(xy[in])+1);
					break;
				case 3:
					xy[i] = PII(f(xy[in])+1,s(xy[in]));
					break;
			}
		}
		
		int minx = INF, miny = INF;
		int maxx = -INF, maxy = -INF;
		
		rep(i,n){
			if(f(xy[i]) > maxx){
				maxx = f(xy[i]);
			}
			if(f(xy[i]) < minx){
				minx = f(xy[i]);
			}
			if(s(xy[i]) > maxy){
				maxy = s(xy[i]);
			}
			if(s(xy[i]) < miny){
				miny = s(xy[i]);
			}
		}
		
		printf("%d %d\n", maxy - miny+1, maxx-minx+1);
	}
	return 0;
}