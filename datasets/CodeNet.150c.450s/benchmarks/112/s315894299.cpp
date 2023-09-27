#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
char moji[53][3][2],s[100001][2];
int n,k;
int main()
{
	for(;;){
		scanf("%d",&n);
		if(n==0) return 0;
		for(int i=0;i<n;i++){
			scanf("%s %s", moji[i][0], moji[i][1]);
		}
		scanf("%d",&k);
		for(int i=0;i<k;i++){
			scanf("%s",s[i]);
			for(int j=0;j<n;j++){
				if(s[i][0]==moji[j][0][0]){
					s[i][0]=moji[j][1][0];
					break;
				}
			}
			printf("%c",s[i][0]);
		}
		printf("\n");
	}
}