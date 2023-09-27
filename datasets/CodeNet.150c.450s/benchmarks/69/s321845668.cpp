#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#define NUM_OF_BALLS 10
using namespace std;

int N;
queue<int> A;

//並べられるかどうかの判定とB,Cの値の更新
bool dfs(int B,int C){
	int ball;
	if(A.empty()) return true;
	else{
		ball = A.front();A.pop();
		if(ball <= min(B,C)){
			while(!A.empty())A.pop();
			return false;
		}
		if(ball > B)return dfs(ball,C);
		if(ball > C)return dfs(B,ball);

		printf("e\n");return false;
	}
}

void solve(){
	if(dfs(0,0))printf("YES\n");
	else printf("NO\n");
	return;
}

int main() {
	int tmp;
	scanf("%d",&N);

	for(int n = 0;n < N;n++){
		for(int i = 0;i < NUM_OF_BALLS;i++){
			scanf("%d",&tmp);
			A.push(tmp);
		}

		solve();
	}
   

    return 0;
}