#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <cfloat>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <iostream>
typedef long long int ll;
typedef unsigned long long int ull;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000000001
using namespace std;


int main(){

	int N;
	scanf("%d",&N);

	int* table = new int[N+1];
	table[0] = -1;

	int index = 0;

	int tmp,left,right,m,replace_index;

	for(int i = 0; i < N; i++){
		scanf("%d",&tmp);

		if(tmp > table[index]){
			index++;
			table[index] = tmp;
			continue;
		}

		left = 1,right = index,m = (left+right)/2;

		while(left <= right){
			if(table[m] == tmp){
				replace_index = -1;
				break;
			}else if(table[m] > tmp){
				replace_index = m;
				right = m-1;
			}else{
				left = m+1;
			}
			m = (left+right)/2;
		}

		if(replace_index != -1){
			table[replace_index] = tmp;
		}
	}

	printf("%d\n",index);

	return 0;
}