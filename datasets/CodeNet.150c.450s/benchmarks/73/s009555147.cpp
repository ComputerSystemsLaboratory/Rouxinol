#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <cfloat>
#include <stack>
#include <queue>
#include <vector>
typedef long long int ll;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000001
using namespace std;

int N;
int* BIT;

void add(int loc,int value){

	BIT[loc] += value;

	loc += loc & -loc;

	while(loc <= N){
		BIT[loc] += value;
		loc += loc & -loc;
	}
}

int getSum(int loc){

	int sum = BIT[loc];

	loc -= loc & -loc;

	while(loc > 0){
		sum += BIT[loc];
		loc -= loc & -loc;
	}
	return sum;
}

int calc(int left,int right){
	return getSum(right)-getSum(left-1);
}

int main(){

	int Q,command,left,right;
	scanf("%d %d",&N,&Q);

	BIT = new int[N+1];
	for(int i = 0; i <= N; i++)BIT[i] = 0;

	for(int i = 0; i < Q; i++){

		scanf("%d %d %d",&command,&left,&right);

		if(command == 0){
			add(left,right);
		}else{
			printf("%d\n",calc(left,right));
		}
	}

	return 0;
}