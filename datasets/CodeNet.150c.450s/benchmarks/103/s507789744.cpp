#include <iostream>
#include <string.h>
using namespace std;

int memo[10][1000][20];
//3,2,1
int dfs(int c,int h,int m)//c:選んだ回数、h:残りの数字、m以下の数字から選ぶ
{
	if(c==0&&h==0)
		return 1;
	if(h<0||m<0||c<0)
		return 0;
	/*if(memo[c][h][m] != -1)
		return memo[c][h][m];*/
	int res = 0;
	for(int i=0;i<=m;++i){
		res += dfs(c-1,h-i,i-1);
	}
	//memo[c][h][m] = res;
	return res;
}

int main(void)
{
	while(1){
		int n,s;
		cin >> n >> s;
		if(n==0&&s==0)
			return 0;
		memset(memo,-1,sizeof(memo));
		cout << dfs(n,s,9) << endl;
	}
	return 0;
}