#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<bitset>
using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 1e+8
#define EPS 1e-8
#define rep(i,j) for(int i = 0; i < (j); i++)
#define reps(i,j,k) for(int i = (j); i < (k); i++)

int main(){
	int flg = 0;
	for(int i = 0; i < 28; i++){
		int tmp;
		scanf("%d",&tmp);
		flg = flg | 1<<tmp;
	}
	for(int i = 1; i < 31; i++){
		if(!(flg>>i & 1))printf("%d\n",i);
	}
	return 0;
}