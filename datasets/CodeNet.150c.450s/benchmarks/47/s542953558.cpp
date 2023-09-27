#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

#define FOR(i,init,n) for(int i = init; i < n ;i++)
#define REP(i,n)  FOR(i,0,n)


int main()
{
	//FILE* fin = freopen("input.txt", "r", stdin);
	//FILE* fout = freopen("output.txt", "w", stdout);
	while (1){
		int w, h,x,y,r;
		int cleft, cright, ctop, cbottom;
		scanf("%d %d %d %d %d", &w, &h,&x,&y,&r);
		if (x < -100 || x >100){
			break;
		}
		else if (y < -100 || y >100){
			break;
		}
		else if (w <= 0 || w > 100){
			break;
		}
		else if (h <= 0 || h > 100){
			break;
		}
		else if (r <= 0 || r > 100){
			break;
		}

		cleft = x - r;
		cright = x + r;
		ctop = y + r;
		cbottom = y - r;
		if (cleft < 0 || cright > w || ctop > h || cbottom < 0 ){
			printf("No\n");
			break;
		}
		else{
			printf("Yes\n");
			break;
		}
	}
	return 0;
}