#include <cstdio>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <cmath>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <vector>
#include <map>
#include <set>
#define sqr(x) ((x)*(x))
#define PI 3.1415926535897932384626
#define jue(x) (x>0?x:-x)
 
#define maxm 
#define maxn 1010
using namespace std;

int flag[10];
int num[10];

void dfs(int x){
	flag[x] = 1;
	for(int i = x + 1; i < 10; i++){
		if(num[i] > num[x]){
			dfs(i);
			break;
		}
	}
}

int main(){
	int n, res;
	while(scanf("%d", &n) == 1){
		while(n > 0){
			n--;
			res = 0;
			for(int i = 0; i < 10; i++){
				scanf("%d", &num[i]);
			}
			for(int i = 0; i < 10; i++){
				memset(flag, 0, sizeof flag);
				dfs(0);
				int numm[10], x = 0, y = 1;
				for(int j = 0; j < 10; j++){
					if(!flag[j]){
						numm[x++] = num[j];
					}
				}
				for(int j = 1; j < x; j++){
					if(numm[j - 1] >= numm[j]){
						y = 0;
					}
				}
				res = y;
				if(res) continue;
			}
			if(res){
				printf("YES\n");
			} else {
				printf("NO\n");
			}	
		}
	}
	return 0;
}