#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 10;
int num[N];
bool dfs(int i,int a,int b){
	if(i == N)	return true;
	if(num[i] > a)	if(dfs(i+1,num[i],b))	return true;
	if(num[i] > b)	if(dfs(i+1,a,num[i]))	return true;
	return false;
}
bool solve(){ return dfs(0,-1,-1); }
int main(){
	int T;	scanf("%d",&T);
	while(T--){
		for (int i = 0; i < N; ++i)	scanf("%d",num+i);
		if(solve())	puts("YES");
		else		puts("NO");
	}
}
