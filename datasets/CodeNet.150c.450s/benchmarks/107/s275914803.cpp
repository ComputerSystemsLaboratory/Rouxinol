#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define LEN 1000
#define NIL -1
using namespace std;

char s1[LEN+1],s2[LEN+1];
int L1,L2;
int memo[LEN+2][LEN+2];//[s1][s2]

int rec(int n1,int n2){
	if(memo[n1][n2] != NIL)return memo[n1][n2];

	if(n1 == 0){memo[n1][n2] = n2;return memo[n1][n2];}
	if(n2 == 0){memo[n1][n2] = n1;return memo[n1][n2];}
	if(s1[n1] == s2[n2]){memo[n1][n2] = rec(n1-1,n2-1);return memo[n1][n2];}
	memo[n1][n2] = min(min(rec(n1,n2-1),rec(n1-1,n2)),rec(n1-1,n2-1)) + 1;return memo[n1][n2];
	//if(n1 > n2){memo[n1][n2] = rec(n1-1,n2) + 1;return memo[n1][n2];}
	//if(n1 < n2){memo[n1][n2] = rec(n1,n2-1) + 1;return memo[n1][n2];}
}

void solve(){
	for(int i = 0;i <= L1;i++)
		for(int j = 0;j <= L2;j++)memo[i][j] = NIL;
	int ans;
	ans = rec(L1,L2);
	printf("%d\n",ans);
	return;
}

int main() {
	scanf("%s",&s1);
	scanf("%s",&s2);
	for(int i = 0;s1[i] != NULL;i++)
		if(s1[i+1] == NULL)L1 = i+1;
	for(int i = 0;i < L1;i++)
		s1[L1-i] = s1[L1-1-i];
	for(int i = 0;s2[i] != NULL;i++)
		if(s2[i+1] == NULL)L2 = i+1;
	for(int i = 0;i < L2;i++)
		s2[L2-i] = s2[L2-1-i];
	//cout <<L1 <<" " <<L2 <<endl;

	solve();

    return 0;
}