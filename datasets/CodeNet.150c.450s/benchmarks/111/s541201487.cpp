#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
typedef long long int ll;

using namespace std;

bool rangeCheck(int num){
	if(num >= 0 && num <= 20)return true;
	else{
		return false;
	}
}

int main(){

	int N;
	scanf("%d",&N);

	ll table[N][21];

	for(int i = 0; i < N; i++){
		for(int k = 0; k < 21; k++)table[i][k] = 0;
	}

	ll number[N];
	for(int i = 0; i < N; i++)scanf("%lld",&number[i]);

	table[0][number[0]] = 1;

	for(int i = 1; i < N-1; i++){
		for(int k = 0; k <= 20; k++){
			if(rangeCheck(k-number[i]) == true)table[i][k] += table[i-1][k-number[i]];
			if(rangeCheck(k+number[i]) == true)table[i][k] += table[i-1][k+number[i]];
		}
	}

	printf("%lld\n",table[N-2][number[N-1]]);

    return 0;
}