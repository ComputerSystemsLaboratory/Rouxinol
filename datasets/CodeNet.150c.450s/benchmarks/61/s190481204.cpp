#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

void func(int N,int A, int B, int C, int X){
	int table[N],index = 0,ans = -1;

	for(int i = 0; i < N; i++)scanf("%d",&table[i]);

	if(X == table[index]){
		index++;
		if(index == N){
			ans = 0;
		}
	}

	if(ans == -1){
		for(int i = 1; i <= 10000; i++){
			X = (A*X+B)%C;
			if(X == table[index]){
				index++;
				if(index == N){
					ans = i;
					break;
				}
			}
		}
	}

	printf("%d\n",ans);
}


int main(){

	int N,A,B,C,X;
	while(true){
		scanf("%d %d %d %d %d",&N,&A,&B,&C,&X);
		if(N == 0 && A == 0 && B == 0 && C == 0 && X == 0)break;

		func(N,A,B,C,X);

	}

	return 0;
}